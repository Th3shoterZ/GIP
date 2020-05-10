#pragma once
#include "MyRectangle.h"

class MyFilledRectangle : public MyRectangle
{
private:


public:
	MyFilledRectangle(int def_x1 = 0, int def_y1 = 0, int def_x2 = 20, int def_y2 = 20) : MyRectangle(def_x1, def_y1, def_x2, def_y2) {}
	void draw();
};