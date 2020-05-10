#define CATCH_CONFIG_RUNNER
#include "catch.h"

#include <iostream>
using namespace std;

#include "suchen.h"


int main()
{
	if (Catch::Session().run()) {
		system("PAUSE"); return 1;
	}
	// Ihr Code ab hier ...

	const unsigned int laenge = 20;
	char text[laenge] = { 0 };
	char zkette[laenge] = { 0 };

	cout << "Bitte geben Sie den Text ein: ";
	cin.getline(text, laenge);
	cin.clear();
	cout << "Bitte geben Sie die zu suchende Zeichenkette ein: ";
	cin.getline(zkette, laenge);
	cin.clear();

	if (zeichenkette_suchen(text, zkette) == -1)
	{
		cout << "Die Zeichenkette '" << zkette << "' ist NICHT in dem Text '" << text << "' enthalten." << endl;
	}
	else
	{
		cout << "Die Zeichenkette '" << zkette << "' ist in dem Text '" << text << "' enthalten." << endl;
		cout << "Sie startet ab Zeichen " << zeichenkette_suchen(text, zkette) << " (bei Zaehlung ab 0)." << endl;
	}

	system("PAUSE");
	return 0;
}