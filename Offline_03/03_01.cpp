#include <iostream>
using namespace std;

int main()
{
	int zahl1 = 0;
	int zahl2 = 0;
	int zahl3 = 0;

	cout << "Bitte geben Sie die 1. Zahl ein: ? ";
	cin >> zahl1;
	cout << "Bitte geben Sie die 2. Zahl ein: ? ";
	cin >> zahl2;
	cout << "Bitte geben Sie die 3. Zahl ein: ? ";
	cin >> zahl3;

	if (zahl1 < zahl2 && zahl1 < zahl3)
	{
		cout << "Die kleinste eingegebene Zahl lautet: " << zahl1 << endl;
	}
	else if (zahl2 < zahl1 && zahl2 < zahl3)
	{
		cout << "Die kleinste eingegebene Zahl lautet: " << zahl2 << endl;
	}
	else if (zahl3 < zahl1 && zahl3 < zahl2)
	{
		cout << "Die kleinste eingegebene Zahl lautet: " << zahl3 << endl;
	}
	
	if (zahl1 > zahl2 && zahl1 > zahl3)
	{
		cout << "Die groesste eingegebene Zahl lautet: " << zahl1 << endl;
	}
	else if (zahl2 > zahl1 && zahl2 > zahl3)
	{
		cout << "Die groesste eingegebene Zahl lautet: " << zahl2 << endl;
	}
	else if (zahl3 > zahl1 && zahl3 > zahl2)
	{
		cout << "Die groesste eingegebene Zahl lautet: " << zahl3 << endl;
	}

	system("PAUSE");
	return 0;
}