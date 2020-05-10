#include <iostream>
using namespace std;

int main()
{
	double zahl = 1.0, ergebnis = 0;
	int auswahl = 0;
	cout << "Ihre Eingabe: ? ";
	cin >> zahl;
	cout << "\n Ihre Auswahl der Umwandlung: \n 1 - Celsius in Fahrenheit\n 2 - Meter in Fuss\n 3 - Euro in US Dollar\n";
	cin >> auswahl;
	
	ergebnis = ((zahl * 1.8 + 32) * (auswahl / 1) * (auswahl % 2) * (auswahl % 3)) +
		((zahl * 3.2808)   * (auswahl / 2) * ((auswahl % 3) / 2)) +
		((zahl * 1.2957)   * (auswahl / 3));
	
	cout << "Das Ergebnis lautet: " << ergebnis << endl;

	system("PAUSE");
	return 0;
}