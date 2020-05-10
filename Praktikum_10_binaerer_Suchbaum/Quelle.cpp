#include <iostream>
#include "binaerer_suchbaum.h";

int main()
{
	suchbaum::BaumKnoten *anker = nullptr;
	int eingabe = 0;
	suchbaum::ausgeben(anker);
	while (true)
	{
		std::cout << "Naechster Wert (99 beendet): ? ";
		std::cin >> eingabe;
		if (eingabe != 99)
		{
			suchbaum::einfuegen(anker, eingabe);
		}
		else 
		{
			break;
		}
	}
	suchbaum::ausgeben(anker);
	system("PAUSE");
	return 0;
}