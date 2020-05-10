#include <iostream>
#include <string>
using namespace std;

/*string trimme(string s)
{
	// neuer string fuer s ohne +
	string vorne;
	string hinten;

	// for loop fuer vorne
	for (int i = 0; i >= 0 && i < s.length(); i++)
	{
		if (s.at(i) != '+')
		{
			for (int i2 = i; i2 >= 0 && i2 < s.length(); i2++)
			{
				vorne += s.at(i2);
			}
			break;
		}
	}

	// for loop fuer hinten
	for (int i = vorne.length() - 1; i >= 0 && i < vorne.length(); i--)
	{
		if (vorne.at(i) != '+')
		{
			for (int i2 = 0; i2 >= 0 && i2 < i+1; i2++)
			{
				hinten += vorne.at(i2); 
			}
			break;
		}
	}
	return hinten;
}


int main()
{
	string s = "";

	cout << "Bitte geben Sie die Textzeile ein: ? ";
	getline(cin, s);

	cout << "Vorher: " << s << endl;
	cout << "Nachher: " << trimme(s) << endl;
	system("PAUSE");
	return 0;
}*/