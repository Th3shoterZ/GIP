#include <iostream>
using namespace std;

int main()
{
	// integer fuer die eingabe und array um die eingaben zu speichern
	int eingabe = 0;
	int speicher[5];
	
	
	int i = 0;
	do
	{
		cout << "Bitte geben Sie die " << i + 1 << ". Zahl ein: ? ";
		cin >> eingabe;

		if (eingabe < 1 || eingabe > 9)
		{
			continue;
		}
		else if (eingabe >= 1 && eingabe <= 9)
		{
			speicher[i] = eingabe;
			i++;
		}

	} while (i < 5);

	for (int ii = 9; ii <= 9 && ii > 0; ii--)
	{
		cout << ii;
		for (int ia = 0; ia >= 0 && ia < 5; ia++)
		{
			if (speicher[ia] == ii)
			{
				cout << "*";
			}
			else if (speicher[ia] > ii)
			{
				cout << "+";
			}
			else
			{
				cout << ".";
			}
		}
		cout << endl;
	}

	cout << " ";
	for (int ii = 0; ii >= 0 && ii < 5; ii++)
	{
		cout << speicher[ii];
	}
	cout << endl;

	system("PAUSE");
	return 0;
}