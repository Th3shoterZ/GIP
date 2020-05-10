#include <iostream>
#include <string>
using namespace std;

/*unsigned int my_strlen(const char * ptr)
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

char* my_strconcat(const char * ptr1, const char * ptr2)
{
	int ptr1_len = my_strlen(ptr1);
	int ptr2_len = my_strlen(ptr2);
	char* ausgabe;
	ausgabe = new char[40];
	int zaehler = 0;
	for (int i = 0; i >= 0 && i < ptr1_len; i++, zaehler++)
	{
		if(ptr1_len == 0)
		{
			break;
		}
		ausgabe[zaehler] = ptr1[i];
	}
	for (int i = 0; i >= 0 && i < ptr2_len; i++, zaehler++)
	{
		if(ptr2_len == 0)
		{
			break;
		}
		ausgabe[zaehler] = ptr2[i];
	}
	ausgabe[zaehler] = '\0';
	return ausgabe;
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
	char* ausgabe;

	ausgabe = my_strconcat(str_arr, str_arr2);
	cout << "Ergebnis my_strconcat(): " << ausgabe << endl;
	system("PAUSE");
	return 0;
}*/