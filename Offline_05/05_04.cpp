#include <iostream>
using namespace std;

/*int main()
{
	// array als speicher und integer fuer die eingabe
	int speicher_eingabe[9];
	int speicher_zahlen[6] = { 1,2,3,4,5,6 };
	int eingabe = 0;
	
	// for loop fuer raufzaehlen der 'x'ten zahl
	for (int i = 0; i < 9 && i >= 0; i++)
	{
		// do while fuer erkennen falscher eingaben
		do
		{
			cout << "Bitte geben Sie die " << i + 1 << ". Zahl ein: ? ";
			cin >> eingabe;
		} while (eingabe < 1 || eingabe > 6);

		// eingelesene zahl wird zum array hinzuefuegt
		speicher_eingabe[i] = eingabe;
	}

	// for loop zur ausgabe der werte des arrays
	for (int i = 0; i >= 0 && i < 9; i++)
	{
		cout << "Die " << i + 1 << ". eingegebene Zahl lautete: " << speicher_eingabe[i] << endl;
	}

	// for loops zum zaehlen der vorkommeden zahlen
	for (int i = 0; i >= 0 && i < 6; i++)
	{
		int zaehler = 0;
		for (int i2 = 0; i2 >= 0 && i2 < 9; i2++)
		{
			if (speicher_zahlen[i] == speicher_eingabe[i2])
			{
				zaehler = zaehler + 1;
			}
		}
		cout << "Die Zahl " << speicher_zahlen[i] << " wurde " << zaehler << " mal eingegeben." << endl;
	}

	system("PAUSE");
	return 0;
}*/