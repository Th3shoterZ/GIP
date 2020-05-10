#include <iostream>
#include <string>
using namespace std;

#include "wortspiegel.h";

int main()
{
	// string fuer nutzer eingabe, char fuer funktions auswahl, string fuer anzeige des '*'
	string text_eingabe = "";
	char auswahl = 'l';
	string sternchen = "";

	// string eingabe
	cout << "Bitte geben Sie den Text ein: ? ";
	getline(cin, text_eingabe);
	
	// loop um die laenge des strings 'sternchen' anzugleichen
	for (int i = 0; i >= 0 && i < text_eingabe.length(); i++)
	{
		if (i == 0)
		{
			sternchen += '*';
		}
		else
		{
			sternchen += " ";
		}
	}


	int pos = 0;
	while (true)
	{
		cout << text_eingabe << endl << sternchen << endl << "Befehl (l: links, r: rechts, s: spiegeln, q: Ende) ?- ";
		cin >> auswahl;
		

		if (auswahl == 'l')
		{
			if (pos != 0)
			{
				sternchen.at(pos) = ' ';
				pos--;
				sternchen[pos] = '*';
			}
			{
				continue;
			}
		}
		if (auswahl == 'r')
		{
			if (pos < sternchen.length() - 1)
			{
				sternchen.at(pos) = ' ';
				pos++;
				sternchen[pos] = '*';
			}
			else
			{
				continue;
			}
		}
		if (auswahl == 's')
		{
			wortspiegel();
		}
		if (auswahl == 'q')
		{
			break;
		}
	}

	cout << endl;

	system("PAUSE");
	return 0;
}