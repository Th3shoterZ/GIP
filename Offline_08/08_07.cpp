#include <iostream>
#include <string>
using namespace std;

/*unsigned int my_strlen(const char * ptr, unsigned int count)
{
	int zaehler = 0;
	for (int i = 0; i >= 0 && i < 20 && ptr != nullptr; i++)
	{
		if ((ptr[i] >= 'a' && ptr[i] <= 'z') || (ptr[i] >= 'A' && ptr[i] <= 'Z') || ptr[i] == ' ' || (ptr[i] >= '0' && ptr[i] <= '9'))
		{
			zaehler++;
		}
		else if (ptr = nullptr)
		{

		}
	}
	return zaehler;

}



char * my_strconcat2(const char * sptr1, const char * sptr2, unsigned int count)
{
	int ptr1_len = my_strlen(sptr1,count);
	int ptr2_len = my_strlen(sptr2, count);
	char* ausgabe;
	ausgabe = new char[40];
	int zaehler = 0;
	for (int i = 0; i >= 0 && i < ptr1_len; i++, zaehler++)
	{
		if (ptr1_len == 0)
		{
			break;
		}
		ausgabe[zaehler] = sptr1[i];
	}
	for (int i = 0; i >= 0 && i < ptr2_len; i++, zaehler++)
	{
		if (ptr2_len == 0)
		{
			break;
		}
		ausgabe[zaehler] = sptr2[i];
	}
	ausgabe[zaehler] = '\0';
	char* finale_ausgabe = new char[count];
	int i = 0;
	for (; i >= 0 && i < count; i++)
	{
		finale_ausgabe[i] = ausgabe[i];
	}
	finale_ausgabe[i] = '\0';
	return finale_ausgabe;
}

int main()
{
	unsigned int anzahl = 0;
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
	cout << "Anzahl Zeichen: ? ";
	cin >> anzahl;
	char* ausgabe;
	ausgabe = my_strconcat2(str_arr, str_arr2, anzahl);
	cout << "Ergebnis my_strconcat2(): " << ausgabe << endl;
	system("PAUSE");
	return 0;
}*/