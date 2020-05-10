#include <iostream>
#include <string>
using namespace std;

/*struct w_haeufigkeit {
	string wort;
	int haeufigkeit;
};
string naechstes_wort(string zeile, int& pos)
{
	string temp_wort = "";
	while (pos < zeile.length())
	{
		if ((zeile.at(pos) >= 'a' && zeile.at(pos) <= 'z') || (zeile.at(pos) >= 'A' && zeile.at(pos) <= 'Z'))
		{
			temp_wort += zeile.at(pos);
		}
		if (temp_wort != "" && ((zeile.at(pos) < 'a' || zeile.at(pos) > 'z') && (zeile.at(pos) < 'A' || zeile.at(pos) > 'Z')))
		{
			break;
		}
		pos++;
	}
	return temp_wort;
}
void zaehle_wort(string wort, w_haeufigkeit haeufigkeiten[], int& w_count)
{
	if (w_count == 0)
	{
		haeufigkeiten[0].wort = wort;
		haeufigkeiten[0].haeufigkeit = 1;
		w_count++;
	}
	else
	{
		bool vorkommen = false;
		for (int i = 0; i >= 0 && i <= w_count; i++)
		{
			if (haeufigkeiten[i].wort == wort)
			{
				if (haeufigkeiten[i].haeufigkeit == 1 || haeufigkeiten[i].haeufigkeit >= 1)
				{
					vorkommen = true;
					haeufigkeiten[i].haeufigkeit += 1;
					break;
				}
				vorkommen = true;
				haeufigkeiten[i].haeufigkeit = 1;
				break;
			}
		}
		if (vorkommen == false)
		{
			haeufigkeiten[w_count].wort = wort;
			haeufigkeiten[w_count].haeufigkeit = 1;
			w_count++;
		}

	}
}
int main()
{
	int z_count = 0, w_count = 0;
	string wort = "";
	string eingabe[5];

	while (z_count < 5)
	{
		cout << "Eingabezeile = ? ";
		getline(cin, eingabe[z_count]);

		if (eingabe[z_count] == "")
		{
			break;
		}
		z_count++;
	}

	w_haeufigkeit haeufigkeiten[1000];
	for (int k = 0; k < z_count; k++)
	{
		int pos = 0;
		while (true)
		{
			wort = naechstes_wort(eingabe[k], pos);
			if (wort == "")
				break;
			zaehle_wort(wort, haeufigkeiten, w_count);
		}
	}
	for (int k = 0; k < w_count; k++)
		cout << haeufigkeiten[k].wort << ": "
		<< haeufigkeiten[k].haeufigkeit << endl;
	system("PAUSE");
	return 0;
}*/