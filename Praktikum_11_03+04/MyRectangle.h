#pragma once
class MyRectangle
{
private:
	int x1;
	int y1;
	int x2;
	int y2;

public:
	MyRectangle(int def_x1 = 0, int def_y1 = 0, int def_x2 = 20, int def_y2 = 20) : x1(def_x1), y1(def_y1), x2(def_x2), y2(def_y2) {}
	int get_ecken() { return x1, y1, x2, y2; }
	void set_ecken(int new_x1, int new_y1, int new_x2, int new_y2) { x1 = new_x1; y1 = new_y1; x2 = new_x2; y2 = new_y2; }
	void draw();
	bool does_not_collide_with(const MyRectangle& other);
};