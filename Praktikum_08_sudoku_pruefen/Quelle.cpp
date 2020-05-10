#include <iostream>
#include <string>
using namespace std;

int main()
{
	// ein array fuer die eingabe strings
	string eingabe[11] = { " " };

	// ein zweidimensionales array fuer die ausgabe
	int sudoku[9][9] = { 0 };

	// string fuer die eingabe;
	string eingabe_string;

	cout << "Bitte geben Sie das Sudoku ein: " << endl;


	// eingabe_1 in array "eingabe" verpacken
	for (int i = 0; i >= 0 && i < 11; i++)
	{
		getline(cin, eingabe_string);
		eingabe[i] = eingabe_string;
	}

	// hinzufuegen der zahlen des eingabe arrays in das sudoku array
	for (int i = 0, korrigierter_y_zaehler = 0; i >= 0 && i < 11; i++)
	{
		for (int i2 = 0, korrigierter_x_zaehler = 0; i2 >= 0 && i2 < eingabe[i].length(); i2++)
		{
			if (i == 3 || i == 7)
			{
				break;
			}
			else if (eingabe[i].at(i2) >= '0' && eingabe[i].at(i2) <= '9')
			{
				sudoku[korrigierter_x_zaehler][korrigierter_y_zaehler] = int(eingabe[i].at(i2)) - '0';
				korrigierter_x_zaehler++;
			}
		}
		if (i != 3 && i != 7)
		{
			korrigierter_y_zaehler++;
		}
	}

	bool gueltigkeit = true;

	for (int spalte = 0; spalte >= 0 && spalte < 9; spalte++)
	{
		for (int zaehler = 1; zaehler >= 1 && zaehler <= 9; zaehler++)
		{
			int vergleich = 0;
			for (int zeile = 0; zeile >= 0 && zeile < 9; zeile++)
			{
				if (sudoku[spalte][zeile] == zaehler)
				{
					vergleich++;
				}
			}
			if (vergleich == 0)
			{
				gueltigkeit = false;
				cout << "Spalte " << spalte << ": Zahl " << zaehler << " kommt nicht vor." << endl;
			}
			if (vergleich > 1)
			{
				gueltigkeit = false;
				cout << "Spalte " << spalte << ": Zahl " << zaehler << " kommt mehrfach vor." << endl;
			}
		}
	}
	for (int zeile = 0; zeile >= 0 && zeile < 9; zeile++)
	{

		for (int zaehler = 1; zaehler >= 1 && zaehler <= 9; zaehler++)
		{
			int vergleich = 0;

			for (int spalte = 0; spalte >= 0 && spalte < 9; spalte++)
			{
				if (sudoku[spalte][zeile] == zaehler)
				{
					vergleich++;
				}
			}
			if (vergleich == 0)
			{
				gueltigkeit = false;
				cout << "Zeile " << zeile << ": Zahl " << zaehler << " kommt nicht vor." << endl;
			}
			if (vergleich > 1)
			{
				gueltigkeit = false;
				cout << "Zeile " << zeile << ": Zahl " << zaehler << " kommt mehrfach vor." << endl;
			}
		}	
	}

	for (int block = 0; block >= 0 && block < 9; block++)
	{
		
		for (int zaehler = 1; zaehler >= 1 && zaehler <= 9; zaehler++)
		{
			int vergleich = 0;
			for (int zeile = block / 3 * 3; zeile >= block / 3 * 3 && zeile <= block / 3 * 3 + 2; zeile++)
			{
				for (int spalte = block % 3 * 3; spalte >= block % 3 * 3 && spalte <= block % 3 * 3 + 2; spalte++)
				{

					if (sudoku[spalte][zeile] == zaehler)
					{
						vergleich++;
					}
				}
			}
			if (vergleich == 0)
			{
				gueltigkeit = false;
				cout << "Block " << block << ": Zahl " << zaehler << " kommt nicht vor." << endl;
			}
			if (vergleich > 1)
			{
				gueltigkeit = false;
				cout << "Block " << block << ": Zahl " << zaehler << " kommt mehrfach vor." << endl;
			}
			
		}
	
	}

	if (gueltigkeit == true)
	{
		cout << "Das Sudoku ist gueltig. " << endl;
	}

	/* // ausgabe des neuen sudoku feldes
	cout << endl << "Das Sudoku lautet: " << endl;
	for (int i = 0; i >= 0 && i < 9; i++)
	{
		for (int i2 = 0; i2 >= 0 && i2 < 9; i2++)
		{
			cout << ";" << sudoku[i2][i];
			if (i2 == 2 || i2 == 5)
			{
				cout << ";//";
			}
		}
		cout << endl;
		if (i == 2 || i == 5)
		{
			cout << "=======//=======//=======" << endl;
		}
	}
	*/
	system("PAUSE");
	return 0;
}