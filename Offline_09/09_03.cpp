#include <iostream>
#include <string>
using namespace std;

#include "templates.h";

int main()
{
	const int laenge = 5;
	TListenKnoten<double> *anker = nullptr;
	liste_ausgeben(anker);
	/*liste_loeschen(anker);
	for (int i = 0; i < laenge; i++)
		hinten_anfuegen(anker, i*i);
	liste_ausgeben(anker);*/
	for (int i = 0; i < laenge; i++)
		vorne_anfuegen(anker, i*i);
	liste_ausgeben(anker);
	for (int i = 0; i < laenge; i++)
		vorne_anfuegen(anker, i*i);
	liste_ausgeben(anker);
	liste_aufaddieren(anker);
	system("PAUSE");
	return 0;
}
