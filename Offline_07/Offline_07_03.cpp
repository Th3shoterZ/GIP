#include <iostream>
#include <string>
using namespace std;

struct T_Morse_Data
{
	char letter;
	std::string morse_code;
	
};


const T_Morse_Data morse_data[] = {
 { 'a', ".-" },
 { 'b', "-..." },
 { 'c', "-.-." },
 { 'd', "-.." },
 { 'e', "." },
 { 'f', "..-." },
 { 'g', "--." },
 { 'h', "...." },
 { 'i', ".." },
 { 'j', ".---" },
 { 'k', "-.-" },
 { 'l', ".-.." },
 { 'm', "--" },
 { 'n', "-." },
 { 'o', "---" },
 { 'p', ".--." },
 { 'q', "--.-" },
 { 'r', ".-." },
 { 's', "..." },
 { 't', "-" },
 { 'u', "..-" },
 { 'v', "...-" },
 { 'w', ".--" },
 { 'x', "-..-" },
 { 'y', "-.--" },
 { 'z', "--.." },
 { '0', "-----" },
 { '1', ".----" },
 { '2', "..---" },
 { '3', "...--" },
 { '4', "....-" },
 { '5', "....." },
 { '6', "-...." },
 { '7', "--..." },
 { '8', "---.." },
 { '9', "----." },
	// Leerzeichen zur Worttrennung werden im Morsecode
	// durch einen Slash '/' umgeben von Leerzeichen
	// dargestellt ...
	// (Alternative: Trennung durch 3 Leerzeichen)
	// Hier bei uns, um die Testläufe eindeutiger zu
	// machen: Trennung mittels drei Slashes
	{ ' ', "///" },
	{ '.', ".-.-.-" },
	{ ',', "--..--" },
	{ ':', "---..." },
	{ '?', "..--.." },
	{ '-', "-....-" },
	{ '/', "-..-." },
	{ '@', ".--.-." },
	{ '=', "-...-" }
};
const int morse_data_len = 47;


T_Morse_Data *anker = nullptr;
/*void morsern(string eingabe)
{
	if(eingabe == "")
	{

	}
	else
	{
		char anker_wert = morse_data[0].letter;
		do
		{
			if (anker == nullptr)
			{
				anker = &anker_wert;
			}
			else
			{

				for (int i = 0; i >= 0 && i < eingabe.length(); i++)
				{
					T_Morse_Data *ptr = anker;
					for (int i2 = 0; i2 >= 0 && i2 < morse_data_len; i2++)
					{
						if (ptr->letter == eingabe.at(i))
						{
							cout << ptr->morse_code;
							break;
						}
						ptr = ptr->next;
					}
				}
				break;
			}
		} while (true);
	}
}*/

void morsern(string eingabe)
{
	for (int i = 0; i >= 0 && i < eingabe.length(); i++)
	{
		if (eingabe.at(i) >= 'A' && eingabe.at(i) <= 'Z')
		{
			eingabe.at(i) += ('a' - 'A');
			for (int i2 = 0; i2 >= 0 && i2 < morse_data_len; i2++)
			{
				if (morse_data[i2].letter == eingabe.at(i))
				{
					cout << morse_data[i2].morse_code << '#';

					break;
				}
			}
		}
		else
		{
			for (int i2 = 0; i2 >= 0 && i2 < morse_data_len; i2++)
			{
				if (morse_data[i2].letter == eingabe.at(i))
				{
					cout << morse_data[i2].morse_code << '#';

					break;
				}
			}
		}
	}
}

int main()
{
	cout << "Bitte Text eingeben (ggfs. mit Leerzeichen): ? ";
	// add string for input
	string eingabe;
	getline(cin, eingabe);

	// for loop for identifying the right morse sign
	morsern(eingabe);
	cout << endl;

	system("PAUSE");
	return 0;
}