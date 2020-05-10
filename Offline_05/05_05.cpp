#include <iostream>
using namespace std;

/*int main()
{
	// array als speicher und integer fuer die eingabe
	int speicher[9];
	int speicher_zahlen[6] = { 1,2,3,4,5,6 };
	int eingabe = 0;
	int zaehler = 0;
	int summe = 0;

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
		speicher[i] = eingabe;
	}

	// for loops zum zaehlen der vorkommeden zahlen
	for (int i = 0; i >= 0 && i < 6; i++)
	{
		zaehler = 0;
		for (int i2 = 0; i2 >= 0 && i2 < 9; i2++)
		{
			if (speicher_zahlen[i] == speicher[i2])
			{
				zaehler++;
			}
		}
		if (zaehler > 0)
		{
			summe++;
		}

	}

	cout << "In der Eingabe kamen " << summe << " unterschiedliche Zahlen vor." << endl;

	system("PAUSE");
	return 0;
}*/