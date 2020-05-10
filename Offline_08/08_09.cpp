#include <iostream>
#include <string>
using namespace std;

/*int main()
{
	unsigned int hoehe = 0;
	unsigned int stufe = 0;
	cout << "Bitte die Hoehe des Tannenbaums eingeben: ? ";
	cin >> hoehe;
	cout << "Bitte die Hoehe jeder Stufe eingeben: ? ";
	cin >> stufe;

	string* canvas = new string[hoehe];
	int punkt_l = hoehe;
	int punkt_r = hoehe;
	int speicher = stufe - 1;
	for (int hoehen_zaehler = 0; hoehen_zaehler >= 0 && hoehen_zaehler < hoehe; hoehen_zaehler++)
	{
		string eingabe;
		for (int i = 0; i >= 0 && i < hoehe * 2; i++)
		{
			if (hoehen_zaehler == speicher && (i == punkt_l || i == punkt_l + 1 || i == punkt_l + 2 || i == punkt_r || i == punkt_r - 1 || i == punkt_r - 2))
				eingabe += '*';
			else if (hoehen_zaehler != speicher && (i == punkt_l || i == punkt_r))
				eingabe += '*';
			else
				eingabe += '+';
		}
		if (hoehen_zaehler == speicher)
		{
			punkt_l += 1;
			punkt_r -= 1;
			speicher += stufe - 1;
		}
		else
		{
			punkt_l -= 1;
			punkt_r += 1;
		}

		canvas[hoehen_zaehler] = eingabe;
	}
	for (int i = 0; i >= 0 && i < hoehe; i++)
	{
		cout << canvas[i] << endl;
	}
	
	system("PAUSE");
	return 0;
}*/