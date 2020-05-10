#include <iostream>
#include <string>
using namespace std;

/*int main()
{
	// string array fuer eingaben + int fuer die laenge
	const int safe_size = 4;
	string safe[safe_size];

	// max string zum finden des laengsten strings
	string max = "";

	// zaehler fuer die schleife
	int i = 0;

	//
	do
	{
		string eingabe;
		cout << "Textzeile = ? ";
		getline(cin, eingabe);
		if(eingabe == "")
		{
			break;
		}
		else
		{
			safe[i] = eingabe;
		}
		if (eingabe.length() > max.length() || i == 0)
		{
			max = eingabe;
		}
		i++;
		
	} while (i < 4);

	// zwischenspeicher string fuer neue laenge der strings
	string zwischenspeicher;
	
	// loops fuer laengen anpassung
	for (int i = 0; i >= 0 && i < safe_size; i++)
	{
		zwischenspeicher = "";
		if (safe[i].length() > 0)
		{
			for (int i2 = 0; i2 >= 0 && i2 < max.length() - safe[i].length(); i2++)
			{
				zwischenspeicher += '#';
			}
			safe[i] = zwischenspeicher + safe[i];
		}
	}

	for (int i = 0; i >= 0 && i < safe_size; i++)
	{
		if(safe[i].length() > 0)
		cout << safe[i] << endl;
	}

	system("PAUSE");
	return 0;
}*/