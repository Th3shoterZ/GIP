#include <iostream>
using namespace std;

int main()
{
	// array + eingabewert definieren
	int zahlengruppe[9];
	int eingabe = 0;

	// bool fuer letzen loop
	bool suche = false;

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
		zahlengruppe[i] = eingabe;
	}

	// eingabe der suchzahl
	cout << "Bitte geben Sie die Suchzahl ein: ? ";
	cin >> eingabe;

	// for loop um zu erkennen ob die suchzahl im array vorhanden ist
	for (int i = 0; i >= 0 && i < 9; i++)
	{
		if (eingabe == zahlengruppe[i])
		{
			suche = true;
		}
	}
	
	// if statement zum entscheiden welcher satz am ende ausgegeben werden soll
	if (suche == true)
	{
		cout << "Die Suchzahl kam unter den Eingaben vor." << endl;
	}
	else
	{
		cout << "Die Suchzahl kam NICHT unter den Eingaben vor." << endl;
	}

	system("PAUSE");
	return 0;
}