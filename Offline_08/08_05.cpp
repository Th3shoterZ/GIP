#include <iostream>
#include <string>
using namespace std;
/*
int my_strcmp(const char * ptr1, const char * ptr2)
{
	int safe = 0;
	int zaehler = 0;
	for (int i = 0; i >= 0 && i < 20 && ptr1[i] != '\0' && ptr2[i] != '\0'; i++)
	{
		if (ptr1[i] != ptr2[i])
		{
			safe = i;
			zaehler++;
			break;
		}
	}
	if (zaehler >= 1)
	{
		if (ptr1[safe] > ptr2[safe])
		{
			cout << "Ergebnis my_strcmp(): ";
			return 1;
		}
		else if (ptr1[safe] < ptr2[safe])
		{
			cout << "Ergebnis my_strcmp(): ";
			return -1;
		}
	}
	else if (zaehler == 0)
	{
		cout << "Die Texte sind identisch. Ergebnis my_strcmp(): ";
		return 0;
	}
}

int main()
{
	char str_arr[20];
	char str_arr2[20];
	string eingabe;
	cout << "Bitte ersten Text eingeben (ggfs. mit Leerzeichen): ? ";
	getline(cin, eingabe);
	for (int i = 0; i >= 0 && i < eingabe.length(); i++)
	{
		str_arr[i] = eingabe.at(i);
	}
	cout << "Bitte zweiten Text eingeben (ggfs. mit Leerzeichen): ? ";
	getline(cin, eingabe);
	for (int i = 0; i >= 0 && i < eingabe.length(); i++)
	{
		str_arr2[i] = eingabe.at(i);
	}
	cout << my_strcmp(str_arr, str_arr2) << endl;
	system("PAUSE");
	return 0;
}*/