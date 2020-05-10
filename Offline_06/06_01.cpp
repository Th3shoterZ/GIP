#include <iostream>
#include <string>
using namespace std;

/*void spalte_ab_erstem(char zeichen, string eingabe, string& erster_teil, string& zweiter_teil)
{
	// suche fuer das zeichen
	int pos = -1;
	for (int i = 0; i >= 0 && i < eingabe.length(); i++)
	{
		if (zeichen == eingabe.at(i))
		{
			pos = i;
			break;
		}
	}
	if (pos >= 0)
	{
		// alles vor dem zeichen wird in den ersten string geschoben
		for (int i = 0; i >= 0 && i < pos; i++)
		{
			erster_teil += eingabe.at(i);
		}
		// alles nach dem zeichen wird in den zweiten string geschoben
		for (int i = pos + 1; i >= pos + 1 && i < eingabe.length(); i++)
		{
			zweiter_teil += eingabe.at(i);
		}
	}
	else
	{
		erster_teil = eingabe;
	}
}

int main()
{
	// string fuer die eingabe, den ersten und zweiten teil der spaltung und ein char fuer auswahl, welches zeichens
	string eingabe;
	string erster_teil;
	string zweiter_teil;
	char auswahl;

	// abfrage fuer eingabe des strings und des chars
	cout << "Bitte geben Sie die einzeilige Zeichenkette ein: ? ";
	getline(cin, eingabe);
	cout << "Bitte geben Sie das Zeichen ein: ? ";
	cin >> auswahl;

	// berechnen der teile des strings
	spalte_ab_erstem(auswahl, eingabe, erster_teil, zweiter_teil);

	// ausgabe der teile
	cout << "Der erste Teil der Zeichenkette lautet: " << erster_teil << endl;
	cout << "Der zweite Teil der Zeichenkette lautet: " << zweiter_teil << endl;

	system("PAUSE");
	return 0;
}*/