#include <iostream>
using namespace std;

int main()
{
	int stunde = 0;
	int minute = 0;
	int sekunde = 0;
	int mitternacht = 0;

	int stunde2 = 0;
	int minute2 = 0;
	int sekunde2 = 0;
	int mitternacht2 = 0;

	cout << "Bitte geben Sie die Stundenzahl der ersten Uhrzeit ein: ? ";
	cin >> stunde;
	cout << "Bitte geben Sie die Minutenzahl der ersten Uhrzeit ein: ? ";
	cin >> minute;
	cout << "Bitte geben Sie die Sekundenzahl der ersten Uhrzeit ein: ? ";
	cin >> sekunde;
	mitternacht = stunde * 3600 + minute * 60 + sekunde;
	cout << stunde << ":" << minute << " Uhr und " << sekunde << " Sekunden sind in Sekunden seit Mitternacht: " << mitternacht << endl << endl;
	
	cout << "Bitte geben Sie die Stundenzahl der zweiten Uhrzeit ein: ? ";
	cin >> stunde2;
	cout << "Bitte geben Sie die Minutenzahl der zweiten Uhrzeit ein: ? ";
	cin >> minute2;
	cout << "Bitte geben Sie die Sekundenzahl der zweiten Uhrzeit ein: ? ";
	cin >> sekunde2;
	mitternacht2 = stunde2 * 3600 + minute2 * 60 + sekunde2;
	cout << stunde2 << ":" << minute2 << " Uhr und " << sekunde2 << " Sekunden sind in Sekunden seit Mitternacht: " << mitternacht2 << endl << endl;

	int mitternacht3 = mitternacht2 - mitternacht;
	int stunde3 = mitternacht3 / 3600;
	int minute3 = (mitternacht3 % 3600) / 60;
	int sekunde3 = mitternacht3 % 60;

	cout << "Die Differenz zwischen den beiden Uhrzeiten betraegt:\n";
	cout << stunde3 << " Stunden, " << minute3 << " Minuten und " << sekunde3 << " Sekunden.\n";
	
	system("PAUSE");
	return 0;
}