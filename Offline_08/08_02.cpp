#include <iostream>
#include <string>
using namespace std;

/*int main()
{
	// string array fuer die eingaben
	string eingaben[5] = { "" };

	// string fuer die eingaben anzunehmen
	string eingabe = "";

	// zaehler 
	for (int i = 0; i >= 0 && i < 5; i++)
	{
		cout << "Eingabezeile = ? ";
		getline(cin, eingabe);
		if (eingabe == "")
		{
			break;
		}
		else
		{
			eingaben[i] = eingabe;
		}
	}
	for (int i = 0; i >= 0 && i < 5; i++)
	{
		for (int i2 = 0; i2 >= 0 && i2 < eingaben[i].length(); i2++)
		{
			if (eingaben[i].at(i2) != ' ' && eingaben[i].at(i2) != '	')
			{
				cout << eingaben[i].at(i2);
				
				if (i2 < eingaben[i].length() - 1)
				{
					if (eingaben[i].at(i2 + 1) == ' ')
					{
						cout << endl;
					}
				}
				else
				{
					cout << endl;
				}
			}
		}
	}
	system("PAUSE");
	return 0;
}
*/