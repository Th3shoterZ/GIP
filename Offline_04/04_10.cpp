#include <iostream>
#include <string>
using namespace std;

/*int main()
{
	string my_string;
	string mini;

	cout << "Bitte Text eingeben (ggfs. mit Leerzeichen): ? ";
	getline(cin, my_string);

	for (unsigned int i = 0 ; i >= 0 && i < my_string.length(); i++)
	{
		if(int(my_string.at(i)) >= int('a') && int(my_string.at(i)) <= int('z')) // doppelter kleinbuchstabe
		{
			mini = mini + my_string.at(i) + my_string.at(i);
			
		}
		else if (int(my_string.at(i)) >= int('A') && int(my_string.at(i)) <= int('Z')) // dreifacher grossbuchstabe
		{
			mini = mini + my_string.at(i) + my_string.at(i) + my_string.at(i);
		}
		else if (int(my_string.at(i)) >= int('0') && int(my_string.at(i)) <= int('9')) // ziffer zu punkt
		{
			my_string.at(i) = '.';
			mini = mini + my_string.at(i);
		}
		else if (my_string.at(i) == '?' || my_string.at(i) == '!') // frage- und ausrufezeichen entfallen
		{
			
		} 
		else if (my_string.at(i) == ' ') // leerzeichen zu underscore
		{
			my_string.at(i) = '_';
			mini = mini + my_string.at(i);
		}
		else
		{
			mini = mini + my_string.at(i);
		}
	}
	cout << "Der Text nach der Umwandlung: " << mini << endl;


	system("PAUSE");
	return 0;
}*/