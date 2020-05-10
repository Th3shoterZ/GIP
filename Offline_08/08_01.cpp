#include <iostream>
#include <string>
using namespace std;
/*
struct Person
{
	string nachname, vorname;
	int alter;
	char geschlecht;
};

Person personen[100] = {
{ "Musterfrau1", "Petra1", 18, 'w' },
{ "Mustermann1", "Klaus1", 18, 'm' },
{ "Mustermaedchen1", "Lisa1", 1, 'w' },
{ "Musterjunge1", "Jan1", 1, 'm' },
{ "Musterfrau2", "Petra2", 19, 'w' },
{ "Mustermann2", "Klaus2", 19, 'm' },
{ "Mustermaedchen2", "Lisa2", 2, 'w' },
{ "Musterjunge2", "Jan2", 2, 'm' },
{ "Musterfrau3", "Petra3", 20, 'w' },
{ "Mustermann3", "Klaus3", 20, 'm' },
{ "Mustermaedchen3", "Lisa3", 3, 'w' },
{ "Musterjunge3", "Jan3", 3, 'm' },
{ "Musterfrau4", "Petra4", 21, 'w' },
{ "Mustermann4", "Klaus4", 21, 'm' },
{ "Mustermaedchen4", "Lisa4", 4, 'w' },
{ "Musterjunge4", "Jan4", 4, 'm' },
{ "Musterfrau5", "Petra5", 22, 'w' },
{ "Mustermann5", "Klaus5", 22, 'm' },
{ "Mustermaedchen5", "Lisa5", 5, 'w' },
{ "Musterjunge5", "Jan5", 5, 'm' },
{ "Musterfrau6", "Petra6", 23, 'w' },
{ "Mustermann6", "Klaus6", 23, 'm' },
{ "Mustermaedchen6", "Lisa6", 6, 'w' },
{ "Musterjunge6", "Jan6", 6, 'm' },
{ "Musterfrau7", "Petra7", 24, 'w' },
{ "Mustermann7", "Klaus7", 24, 'm' },
{ "Mustermaedchen7", "Lisa7", 7, 'w' },
{ "Musterjunge7", "Jan7", 7, 'm' },
{ "Musterfrau8", "Petra8", 25, 'w' },
{ "Mustermann8", "Klaus8", 25, 'm' },
{ "Mustermaedchen8", "Lisa8", 8, 'w' },
{ "Musterjunge8", "Jan8", 8, 'm' }
};
int anzahl_personen = 32;

void filter(Person p[], int anzahl_personen)
{
	int auswahl = 0;
	int summe = 0;
	cout<< "Ihre Auswahl:" << endl
		<< "1 - Weibliche Erwachsene" << endl
		<< "2 - Maennliche Erwachsene" << endl
		<< "3 - Weibliche Kinder" << endl
		<< "4 - Maennliche Kinder" << endl
		<< "? ";
	cin >> auswahl;
	if (auswahl == 1)
	{
		for (int i = 0; i >= 0 && i < anzahl_personen; i++)
		{
			if (p[i].alter >= 18 && p[i].geschlecht == 'w')
			{
				cout << p[i].nachname << ", " << p[i].vorname << ", " << p[i].geschlecht << ", " << p[i].alter << endl;
				summe++;
			}
		}
	}
	else if (auswahl == 2)
	{
		for (int i = 0; i >= 0 && i < anzahl_personen; i++)
		{
			if (p[i].alter >= 18 && p[i].geschlecht == 'm')
			{
				cout << p[i].nachname << ", " << p[i].vorname << ", " << p[i].geschlecht << ", " << p[i].alter << endl;
				summe++;
			}
		}
	}
	else if (auswahl == 3)
	{
		for (int i = 0; i >= 0 && i < anzahl_personen; i++)
		{
			if (p[i].alter < 18 && p[i].geschlecht == 'w')
			{
				cout << p[i].nachname << ", " << p[i].vorname << ", " << p[i].geschlecht << ", " << p[i].alter << endl;
				summe++;
			}
		}
	}
	else if (auswahl == 4)
	{
		for (int i = 0; i >= 0 && i < anzahl_personen; i++)
		{
			if (p[i].alter < 18 && p[i].geschlecht == 'm')
			{
				cout << p[i].nachname << ", " << p[i].vorname << ", " << p[i].geschlecht << ", " << p[i].alter << endl;
				summe++;
			}
		}
	}
	cout << "Summe: " << summe << endl;
}

int main()
{
	// eingabe string 
	string eingabe;

	// anzeigen und eingaben loopen
	do
	{
		Person p;
		
		cout << "Eine weitere Person eingeben (j/n)? ";
		cin >> eingabe;
		if ((eingabe.at(0) != 'j' && eingabe.at(0) != 'n') || eingabe.length() > 1)
		{
			continue;
		}
		else if (eingabe.length() == 1 && eingabe.at(0) == 'n')
		{
			break;
		}
		anzahl_personen++;

		cout << "Bitte den Nachnamen der " << anzahl_personen << ". Person eingeben: ? ";
		cin >> p.nachname;
		cout << "Bitte den Vornamen der " << anzahl_personen << ". Person eingeben: ? ";
		cin >> p.vorname;
		cout << "Bitte das Alter der " << anzahl_personen << ". Person eingeben: ? ";
		cin >> p.alter;
		cout << "Bitte das Geschlecht der " << anzahl_personen << ". Person eingeben: ? ";
		cin >> p.geschlecht;

		personen[anzahl_personen - 1] = p;

	} while(true);

	filter(personen, anzahl_personen);

	system("PAUSE");
	return 0;
}
*/