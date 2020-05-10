#include <iostream>
#include <string>
using namespace std;

void spalte_ab_erstem(char zeichen, string eingabe, string& erster_teil, string& zweiter_teil)
{
	// suche fuer das zeichen
	int pos = -1;
	for (int i = 0; i >= 0 && i < eingabe.length(); i++)
	{
		if (zeichen == eingabe.at(i))
		{
			pos = i;
			break;
		}
	}
	if (pos >= 0)
	{
		// alles vor dem zeichen wird in den ersten string geschoben
		for (int i = 0; i >= 0 && i < pos; i++)
		{
			erster_teil += eingabe.at(i);
		}
		// alles nach dem zeichen wird in den zweiten string geschoben
		for (int i = pos + 1; i >= pos + 1 && i < eingabe.length(); i++)
		{
			zweiter_teil += eingabe.at(i);
		}
	}
	else
	{
		erster_teil = eingabe;
	}
}

string trimme(string s)
{
	// neuer string fuer s ohne +
	string vorne;
	string hinten;

	// for loop fuer vorne
	for (int i = 0; i >= 0 && i < s.length(); i++)
	{
		if (s.at(i) != ' ')
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
		if (vorne.at(i) != ' ')
		{
			for (int i2 = 0; i2 >= 0 && i2 < i + 1; i2++)
			{
				hinten += vorne.at(i2);
			}
			break;
		}
	}
	return hinten;
}

string ersetze(string zeile, char zu_ersetzendes_zeichen, string ersatztext)
{
	string mini;
	for (int i = 0; i >= 0 && i < zeile.length(); i++)
	{
		if (zu_ersetzendes_zeichen == zeile.at(i))
		{
			mini += ersatztext;
		}
		else
		{
			mini += zeile.at(i);
		}
	}
	return mini;
}