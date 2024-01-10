
Flood Fill Algorithm:

In this method, a point or seed which is inside region is selected. This point is called a seed point. Then four connected approaches or eight connected approaches is used to fill with specified color.

The flood fill algorithm has many characters similar to boundary fill.
But this method is more suitable for filling multiple colors boundary. When boundary is of many
colors and interior is to be filled with one color we use this algorithm.
In fill algorithm, we start from a specified interior point (x, y)
    and reassign all pixel values are currently set to a given interior
    color with the desired color. Using either a 4-connected or 8-connected
    approaches, we then step through pixel positions until all interior points have been repainted.
Disadvantage:

    Very slow algorithm
    May be fail for large polygons
    Initial pixel required more knowledge about surrounding pixels.
Algorithm:

    Procedure floodfill (x, y,fill_ color, old_color: integer)
        If (getpixel (x, y)=old_color)
    {
        setpixel (x, y, fill_color);
        fill (x+1, y, fill_color, old_color);
        fill (x-1, y, fill_color, old_color);
        fill (x, y+1, fill_color, old_color);
        fill (x, y-1, fill_color, old_color);
    }
}

//Program1: To implement 4-connected flood fill algorithm:

#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void flood(int,int,int,int);
void main()
{
    intgd=DETECT,gm;
    initgraph(&gd,&gm,"C:/TURBOC3/bgi");
    rectangle(50,50,250,250);
    flood(55,55,10,0);
    getch();
}
void flood(intx,inty,intfillColor, intdefaultColor)
{
    if(getpixel(x,y)==defaultColor)
    {
        delay(1);
        putpixel(x,y,fillColor);
        flood(x+1,y,fillColor,defaultColor);
        flood(x-1,y,fillColor,defaultColor);
        flood(x,y+1,fillColor,defaultColor);
        flood(x,y-1,fillColor,defaultColor);
    }
}


// Program2: To implement 8-connected flood fill algorithm:

#include<stdio.h>
#include<graphics.h>
#include<dos.h>
#include<conio.h>
void floodfill(intx,inty,intold,intnewcol)
{
    int current;
    current=getpixel(x,y);
    if(current==old)
    {
        delay(5);
        putpixel(x,y,newcol);
        floodfill(x+1,y,old,newcol);
        floodfill(x-1,y,old,newcol);
        floodfill(x,y+1,old,newcol);
        floodfill(x,y-1,old,newcol);
        floodfill(x+1,y+1,old,newcol);
        floodfill(x-1,y+1,old,newcol);
        floodfill(x+1,y-1,old,newcol);
        floodfill(x-1,y-1,old,newcol);
    }
}
void main()
{
    intgd=DETECT,gm;
    initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
    rectangle(50,50,150,150);
    floodfill(70,70,0,15);
    getch();
    closegraph();
}
