#include "MyFilledRectangle.h"
#include "CImgGIP05.h"
#include "MyRectangle.h"

void MyFilledRectangle::draw()
{
	gip_stop_updates();
	MyFilledRectangle::get_ecken();
	gip_draw_rectangle(x1, y1, x2, y2, blue);
	
	if (y2 - y1 >= 5 && x2 - x1 >= 5)
	{
		int line_start = x1 + 2;
		int line_end = x2 - 2;
		for (int i = y1 + 2; i >= y1 + 2 && i <= y2 - 2; i++)
			gip_draw_line(line_start, i, line_end, i, red);
	}
}

