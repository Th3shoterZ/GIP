#include <iostream>
using namespace std;

int main()
{
	int num = 0, maxi = 0, mini = 0, maxipos = 0, minipos = 0;

	for (int i = 1; i < 6; i++)
	{
		cout << "Bitte geben Sie die " << i << ". Zahl ein: ? "; 
		cin >> num;
		
		if (num < mini || i == 1)
		{
			mini = num;
			minipos = i;
		}
		if (num > maxi || i == 1)
		{
			maxi = num;
			maxipos = i;
		}
	}

	cout << "Die " << minipos << ". Zahl war die kleinste der eingebenen Zahlen und lautet: " << mini << endl;
	cout << "Die " << maxipos << ". Zahl war die groesste der eingebenen Zahlen und lautet: " << maxi << endl;

	system("PAUSE");
	return 0;
}