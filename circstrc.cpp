// circstrc.cpp
// circles as graphics objects
#include <msoftcon.h>                   // for graphics functions
/////////////////////////////////////////////////////////////////////
struct circle
{
    int xCo, yCo;                       // coordinates of center
    int radius;
    color fillcolor;                    // color
    fstyle fillstyle;                   // fill pattern
};
//////////////////////////////////////////////////////////////////////
void circle_draw(circle c)
{
    set_color(c.fillcolor);             // set color
    set_fill_style(c.fillstyle);        // set fill pattern
    draw_circle(c.xCo, c.yCo, c.radius); // draw solid circle
}
//--------------------------------------------------------------------
int main()
{
    init_graphics();                    // initialize graphics system

    circle c1 = { 15, 7, 5, cBLUE, X_FILL };

    circle_draw(c1);                    // draw circles

    set_cursor_pos(1,25);               // cursor to lower left corner

    return 0;
}
