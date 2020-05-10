#include <iostream>
#define CIMGGIP_MAIN
#include "CImgGIP05.h"
using namespace std;
using namespace cimg_library;

const int grid_size = 10; // Anzahl an Kaestchen in x- und y-Richtung
const int box_size = 30;  // size der einzelnen Kaestchen (in Pixel)
const int border = 20;    // Rand links und oben bis zu den ersten Kaestchen (in Pixel)

// Prototyp der Funktionen zum Vorbelegen des Grids ...
void grid_init(bool grid[][grid_size]);

int main()
{
	bool grid[grid_size][grid_size] = { 0 };
	bool next_grid[grid_size][grid_size] = { 0 };

	// Erstes Grid vorbelegen ...
	grid_init(grid);

	while (gip_window_not_closed())
	{
		// Spielfeld anzeigen ...
		// Ggfs gip_stop_updates();
		// TO DO
		gip_start_updates();
		gip_sleep(3);

		int x_c = border;
		int y_c = border;

		for (int y = 0; y >= 0 && y < 10; y++)
		{
			x_c = border;
			for (int x = 0; x >= 0 && x < 10; x++)
			{
				if (grid[y][x] == true)
				{
					gip_draw_rectangle(x_c, y_c, x_c + box_size, y_c + box_size, green); // draws green squares
				}
				if (grid[y][x] == false)
				{
					gip_draw_rectangle(x_c, y_c, x_c + box_size, y_c + box_size, white); // draws white squares
				}
				x_c += box_size;
			}
			y_c += box_size;
		}

		gip_stop_updates(); // ???

		// Berechne das naechste Spielfeld ...
		// Achtung; Für die Zelle (x,y) darf die Position (x,y) selbst *nicht*
		// mit in die Betrachtungen einbezogen werden.
		// Ausserdem darf bei zellen am rand nicht über den Rand hinausgegriffen
		// werden (diese Zellen haben entsprechend weniger Nachbarn) ...

		// TO DO

		for (int y_k = 0; y_k >= 0 && y_k < grid_size; y_k++)
		{
			for (int x_k = 0; x_k >= 0 && x_k < grid_size; x_k++)
			{
				int zaehler = 0;

				if (y_k == 0 && x_k == 0) // Ecke oben links
				{
					for (int j = y_k; j >= 0 && j < y_k + 1; j++)
					{
						for (int i = x_k; i >= 0 && i < x_k + 1; i++)
						{
							if (grid[y_k][x_k] != grid[j][i])
							{
								if (grid[j][i] == true)
								{
									zaehler++;
								}
							}
						}
					}
				}

				if (y_k == 0 && x_k == 9) // Ecke oben rechts
				{
					for (int j = y_k; j >= 0 && j < y_k + 1; j++)
					{
						for (int i = x_k - 1; i >= 0 && i < x_k; i++)
						{
							if (grid[y_k][x_k] != grid[j][i])
							{
								if (grid[j][i] == true)
								{
									zaehler++;
								}
							}
						}
					}
				}
				if (y_k == 9 && x_k == 0) // Ecke unten links
				{
					for (int j = y_k - 1; j >= 0 && j < y_k; j++)
					{
						for (int i = x_k; i >= 0 && i < x_k + 1; i++)
						{
							if (grid[y_k][x_k] != grid[j][i])
							{
								if (grid[j][i] == true)
								{
									zaehler++;
								}
							}
						}
					}
				}
				if (y_k == 9 && x_k == 9) // Ecke unten rechts
				{
					for (int j = y_k - 1; j >= 0 && j < y_k; j++)
					{
						for (int i = x_k - 1; i >= 0 && i < x_k; i++)
						{
							if (grid[y_k][x_k] != grid[j][i])
							{
								if (grid[j][i] == true)
								{
									zaehler++;
								}
							}
						}
					}
				}
				if (y_k == 0 && (x_k > 0 && x_k < 9)) // Kante oben
				{
					for (int j = y_k; j >= 0 && j < y_k + 1; j++)
					{
						for (int i = x_k - 1; i >= 0 && i < x_k + 1; i++)
						{
							if (grid[y_k][x_k] != grid[j][i])
							{
								if (grid[j][i] == true)
								{
									zaehler++;
								}
							}
						}
					}
				}
				if (y_k == 9 && (x_k > 0 && x_k < 9)) // Kante unten
				{
					for (int j = y_k - 1; j >= 0 && j < y_k; j++)
					{
						for (int i = x_k - 1; i >= 0 && i < x_k + 1; i++)
						{
							if (grid[y_k][x_k] != grid[j][i])
							{
								if (grid[j][i] == true)
								{
									zaehler++;
								}
							}
						}
					}
				}
				if ((y_k > 0 && y_k < 9) && x_k == 0) // Kante links 
				{
					for (int j = y_k - 1; j >= 0 && j < y_k + 1; j++)
					{
						for (int i = x_k; i >= 0 && i < x_k + 1; i++)
						{
							if (grid[y_k][x_k] != grid[j][i])
							{
								if (grid[j][i] == true)
								{
									zaehler++;
								}
							}
						}
					}
				}
				if ((y_k > 0 && y_k < 9) && x_k == 9) // Kante rechts
				{
					for (int j = y_k - 1; j >= 0 && j < y_k + 1; j++)
					{
						for (int i = x_k; i >= 0 && i < x_k + 1; i++)
						{
							if (grid[y_k][x_k] != grid[j][i])
							{
								if (grid[j][i] == true)
								{
									zaehler++;
								}
							}
						}
					}
				}
				if ((y_k > 0 && y_k < 9) && (x_k > 0 && x_k < 9)) // Alles nicht am Rand
				{
					for (int j = y_k - 1; j >= 0 && j < y_k + 1; j++)
					{
						for (int i = x_k - 1; i >= 0 && i < x_k + 1; i++)
						{
							if (grid[y_k][x_k] != grid[j][i])
							{
								if (grid[j][i] == true)
								{
									zaehler++;
								}
							}
						}
					}
				}

				if (zaehler < 2 || zaehler > 3) // uebergeben des naechsten Status des feldes an das next_grid
				{
					next_grid[y_k][x_k] = false;
				}
				else
				{
					next_grid[y_k][x_k] = true;
				}

			}
		}



		// Kopiere das naechste Spielfeld in das aktuelle Spielfeld ...

		// TO DO

		for (int y = 0; y >= 0 && y < 10; y++)
		{
			for (int x = 0; x >= 0 && x < 10; x++)
			{
				grid[y][x] = next_grid[y][x];
			}
		}

	}
	return 0;
}

void grid_init(bool grid[][grid_size])
{
	int eingabe = -1;
	do {
		cout << "Bitte waehlen Sie die Vorbelegung des Grids aus:" << endl
			<< "0 - Zufall" << endl
			<< "1 - Statisch" << endl
			<< "2 - Blinker" << endl
			<< "3 - Oktagon" << endl
			<< "4 - Gleiter" << endl
			<< "5 - Segler 1 (Light-Weight Spaceship)" << endl
			<< "6 - Segler 2 (Middle-Weight Spaceship)" << endl
			<< "? ";
		cin >> eingabe;
		cin.clear();
		cin.ignore(1000, '\n');
	} while (eingabe < 0 || eingabe > 6);

	if (eingabe == 0)
	{
		// Erstes Grid vorbelegen (per Zufallszahlen) ...

		// TO DO

		for (int y = 0; y >= 0 && y < 9; y++)
		{
			for (int x = 0; x >= 0 && x < 9; x++)
			{
				if (gip_random(0, 1) == 1)
				{
					grid[y][x] = true;
				}
				else
					grid[y][x] = false;
			}
		}


	}
	else if (eingabe == 1)
	{
		const int pattern_size = 3;
		char pattern[pattern_size][pattern_size] =
		{
			{ '.', '*', '.' },
			{ '*', '.', '*' },
			{ '.', '*', '.' },
		};
		for (int y = 0; y < pattern_size; y++)
			for (int x = 0; x < pattern_size; x++)
				if (pattern[y][x] == '*')
					grid[x][y + 3] = true;
	}
	else if (eingabe == 2)
	{
		const int pattern_size = 3;
		char pattern[pattern_size][pattern_size] =
		{
			{ '.', '*', '.' },
			{ '.', '*', '.' },
			{ '.', '*', '.' },
		};
		for (int y = 0; y < pattern_size; y++)
			for (int x = 0; x < pattern_size; x++)
				if (pattern[y][x] == '*')
					grid[x][y + 3] = true;
	}
	else if (eingabe == 3)
	{
		const int pattern_size = 8;
		char pattern[pattern_size][pattern_size] =
		{
			{ '.', '.', '.', '*', '*', '.', '.', '.' },
			{ '.', '.', '*', '.', '.', '*', '.', '.' },
			{ '.', '*', '.', '.', '.', '.', '*', '.' },
			{ '*', '.', '.', '.', '.', '.', '.', '*' },
			{ '*', '.', '.', '.', '.', '.', '.', '*' },
			{ '.', '*', '.', '.', '.', '.', '*', '.' },
			{ '.', '.', '*', '.', '.', '*', '.', '.' },
			{ '.', '.', '.', '*', '*', '.', '.', '.' },
		};
		for (int y = 0; y < pattern_size; y++)
			for (int x = 0; x < pattern_size; x++)
				if (pattern[y][x] == '*')
					grid[x][y + 1] = true;
	}
	else if (eingabe == 4)
	{
		const int pattern_size = 3;
		char pattern[pattern_size][pattern_size] =
		{
			{ '.', '*', '.' },
			{ '.', '.', '*' },
			{ '*', '*', '*' },
		};
		for (int y = 0; y < pattern_size; y++)
			for (int x = 0; x < pattern_size; x++)
				if (pattern[y][x] == '*')
					grid[x][y + 3] = true;
	}
	else if (eingabe == 5)
	{
		const int pattern_size = 5;
		char pattern[pattern_size][pattern_size] =
		{
			{ '*', '.', '.', '*', '.' },
			{ '.', '.', '.', '.', '*' },
			{ '*', '.', '.', '.', '*' },
			{ '.', '*', '*', '*', '*' },
			{ '.', '.', '.', '.', '.' },
		};
		for (int y = 0; y < pattern_size; y++)
			for (int x = 0; x < pattern_size; x++)
				if (pattern[y][x] == '*')
					grid[x][y + 3] = true;
	}
	else if (eingabe == 6)
	{
		const int pattern_size = 6;
		char pattern[pattern_size][pattern_size] =
		{
			{ '.', '*', '*', '*', '*', '*' },
			{ '*', '.', '.', '.', '.', '*' },
			{ '.', '.', '.', '.', '.', '*' },
			{ '*', '.', '.', '.', '*', '.' },
			{ '.', '.', '*', '.', '.', '.' },
			{ '.', '.', '.', '.', '.', '.' },
		};
		for (int y = 0; y < pattern_size; y++)
			for (int x = 0; x < pattern_size; x++)
				if (pattern[y][x] == '*')
					grid[x][y + 3] = true;
	}
}

