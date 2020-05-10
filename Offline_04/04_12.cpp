#include <iostream>
#include <string>
using namespace std;

int main()
{
	int breite = 0;
	int hoehe = 0;
	string punktereihe = ".";
	char punkt = '.';

	cout << "Bitte geben Sie die Breite des Parallelogramms ein: ? ";
	cin >> breite;
	cout << "Bitte geben Sie die Hoehe des Parallelogramms ein: ? ";
	cin >> hoehe;

	for (int i = 0; i < hoehe && i >= 0; i++)
	{
		for (int i2 = 0; i2 < breite && i2 >= 0; i2++)
		{
			if (i2 >= 1 && i2 <= breite - 2 && i > 0 && i < hoehe - 1)
			{
				cout << "+";
			}
			else
			{
				cout << "*";
			}
		}
		cout << endl;
		if (i < hoehe - 1)
		{
			cout << punktereihe;
			punktereihe = punktereihe + punkt;
		}
	}

	cout << endl;
	system("PAUSE");
	return 0;
}