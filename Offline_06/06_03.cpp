#include <iostream>
using namespace std;
const char empty_pixel = '.';
const char filled_pixel = '#';
const int canvas_size = 40;


void init_canvas(char canvas[][canvas_size])
{
	for (int x = 0; x < canvas_size; x++)
		for (int y = 0; y < canvas_size; y++)
			canvas[x][y] = empty_pixel;
}


void print_canvas(char canvas[][canvas_size])
{
	for (int y = 0; y < canvas_size; y++) {
		for (int x = 0; x < canvas_size; x++) {
			cout << canvas[x][y];
		}
		cout << endl;
	}
	cout << endl;
}


void linie(int x1, int y1, int x2, int y2, char canvas[][canvas_size])
{
	// … Ihr Code hier …
	if ((x1 - x2 == 1) || (x2 - x1 == 1) || (x2 - x1 == 0) && (y1 - y2 == 1) || (y2 - y1 == 1) || (y1 - y2 == 1) || (y2 - y1 == 0))
	{
		canvas[x1][y1] = filled_pixel;
		canvas[x2][y2] = filled_pixel;
	}
	else
	{
		int x_mitte = (x1 + x2) / 2;
		int y_mitte = (y1 + y2) / 2;

		canvas[x1][y1] = filled_pixel;

		linie(x1, y1, x_mitte, y_mitte, canvas);
		linie(x_mitte, y_mitte, x2, y2, canvas);

	}
	int plus_x1 = x1 + 1;
	int plus_y1 = y1 + 1;
	int plus_x2 = x2 + 1;
	int plus_y2 = y2 + 1;
	
	if (x1 < x2)
	{
		while (true)
		{
			if (canvas[plus_x1][plus_y1] != filled_pixel)
			{
				canvas[plus_x1][y1] = filled_pixel;
				plus_x1++;
			}
			else
				break;
		}
	}
	else if (x2 < x1)
	{
		while (true)
		{
			if (canvas[plus_x2][plus_y2] != filled_pixel)
			{
				canvas[plus_x2][y2] = filled_pixel;
				plus_x2++;
			}
			else
				break;
		}
	}
}


int main()
{
	char canvas[canvas_size][canvas_size];
	init_canvas(canvas);
	int x1 = 0, y1 = 0, x2 = 0, y2 = 0;
	do {
		cout << "Bitte geben Sie den ersten Punkt ein: ? ";
		cin >> x1 >> y1;
	} while (x1 < 0 || x1 >= canvas_size || y1 < 0 || y1 >= canvas_size);
	do {
		cout << "Bitte geben Sie den zweiten Punkt ein: ? ";
		cin >> x2 >> y2;
	} while (x2 < 0 || x2 >= canvas_size || y2 < 0 || y2 >= canvas_size);
	linie(x1, y1, x2, y2, canvas);
	print_canvas(canvas);
	system("PAUSE");
	return 0;
}