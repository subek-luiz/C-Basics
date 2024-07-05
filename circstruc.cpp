// circstruc.cpp
// circles as graphics objects
#include <iostream>
#include <msoftcon.h>

using namespace std;

struct Circle
{
    int xCo, yCo;
    int radius;
    color fillcolor;
    fstyle fillstyle;
};


void circ_draw(Circle c)
{
    set_color(c.fillcolor);                     //set color
    set_fill_style(c.fillstyle);                //set fill pattern
    draw_circle(c.xCo,c.yCo,c.radius);          //draw solid circle
}

int main()
{
    init_graphics(); //initialize graphics system

    // create circles
    Circle c1 = {15, 7, 5, cBLUE, X_FILL};
    Circle c2 = {41, 12, 7, cRED, O_FILL};
    Circle c3 = {65, 18, 4, cGREEN, MEDIUM_FILL};

    // draw circles
    circ_draw(c1);
    circ_draw(c2);
    circ_draw(c3);

    set_cursor_pos(1,25);

    return 0;
}
