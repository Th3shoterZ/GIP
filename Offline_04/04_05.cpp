#include <iostream>
#include <string>
using namespace std;

/*int main()
{
	string palindrom;
	string palindrom_r;
	bool eingabe = false;


	do
	{
		cout << "Text: ? ";
		getline(cin, palindrom);
		eingabe = true;
		for (unsigned int i = 0; i >= 0 && i < palindrom.length(); i++)
		{
			if (int(palindrom.at(i)) < int('a') || int(palindrom.at(i)) > int('z'))
			{
				eingabe = false;
				break;
			}
		}
	} while (eingabe == false);
	
	for (unsigned int i = palindrom.length() - 1;i < palindrom.length() && i >= 0; i--)
	{			
		palindrom_r = palindrom_r + palindrom.at(i);
	}
	if (palindrom == palindrom_r)
	{
		cout << "Das eingegebene Wort ist ein Palindrom.\n";
	}
	else
	{
		cout << "Das eingegebene Wort ist KEIN Palindrom.\n";
	}
		
	system("PAUSE");
	return 0;
}*/