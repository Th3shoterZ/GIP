#include <iostream>
#include <string>
#include <fstream>
#include "Personen.h";
#include "Texte.h";
using namespace std;

string br(string s)
{
	return s += "<br/>";
 
}

string b(string s)
{
	return s = "<b>" + s + "</b>";

}

int main()
{
	string eingabezeile = "", kurztext = "", langtext = "";
	ifstream myfile;
	myfile.open("personendaten.txt");
	while (getline(myfile, eingabezeile))
	{
		Person person = extrahiere_person(eingabezeile);
		kurztext += br(b(person.nachname) + ", " + person.vorname) + "\n";
		// cout << person.nachname << person.vorname << person.geburtsdatum << '\n';
		langtext += br(b(person.vorname + " " + person.nachname) + ", " + person.geburtsdatum) + "\n";
	}
	myfile.close();
	
	ifstream mytmpl;
	ofstream mywebpge;
	mytmpl.open("webseite.html.tmpl");
	mywebpge.open("webseite.html");
	while (getline(mytmpl, eingabezeile))
	{
		eingabezeile = ersetze(eingabezeile, '%', kurztext);
		eingabezeile = ersetze(eingabezeile, '$', langtext);

		mywebpge << eingabezeile + "\n";
		// schreibe eingabezeile + "\n" in die Ausgabedatei;
	}
	mytmpl.close();
	mywebpge.close();


	return 0;
}