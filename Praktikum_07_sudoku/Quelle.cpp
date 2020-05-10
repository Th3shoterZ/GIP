#include <iostream>
#include <string>
using namespace std;

int main()
{
	// ein array fuer die eingabe strings
	string eingabe[11] = {" "};

	// ein zweidimensionales array fuer die ausgabe
	int sudoku[9][9] = {0};

	// string fuer die eingabe;
	string eingabe_1;

	cout << "Bitte geben Sie das Sudoku ein: " << endl;
	

	// eingabe_1 in array "eingabe" verpacken
	for (int i = 0; i >= 0 && i < 11; i++)
	{
		getline(cin, eingabe_1);
		eingabe[i] = eingabe_1;
	}

	// hinzufuegen der zahlen des eingabe arrays in das sudoku array
	int korrigierter_zaehler = 0;
	for (int i = 0; i >= 0 && i < 11; i++)
	{
		for (int i2 = 0, i3 = 0; i2 >= 0 && i2 < eingabe[i].length(); i2++)
		{
			if (i == 3 || i == 7)
			{
				break;
			}
			else if (eingabe[i].at(i2) >= '0' && eingabe[i].at(i2) <= '9')
			{
				sudoku[i3][korrigierter_zaehler] = int(eingabe[i].at(i2)) - '0';
				i3++;
			}
		}
		if (i != 3 && i != 7)
		{
			korrigierter_zaehler++;
		}
	}

	// ausgabe des neuen sudoku feldes
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
	
	system("PAUSE");
	return 0;
}