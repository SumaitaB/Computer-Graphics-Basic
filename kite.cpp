#include <graphics.h>
#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

void kite()
{
    line(200, 200, 300, 100);
    line(300, 100, 400, 200);
    line(400, 200, 300, 300);
    line(300, 100, 300, 300);
    line(300,300,200,200);
    arc(300, 300, 45, 135, 140);
    setfillstyle(SOLID_FILL, 12);

    floodfill(301, 105, WHITE);
    setfillstyle(SOLID_FILL, 12);

    floodfill(299, 105, WHITE);
    setfillstyle(SOLID_FILL, WHITE);

    floodfill(299, 275, WHITE);
    setfillstyle(SOLID_FILL, WHITE);

    floodfill(301, 275, WHITE);
    line(300, 300, 250, 350);
    line(250, 350, 350, 350);
    line(300, 300, 350, 350);
    setfillstyle(SOLID_FILL, GREEN);

    floodfill(300, 310, WHITE);
}
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    kite();

    getch();
    closegraph();

    return 0;
}


///another

#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main()

{
    int gd,gm;
    detectgraph(&gd,&gm);

    initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
    line(200,200,300,100);
    line(300,100,400,200);
    line(400,200,300,300);
    line(300,100,300,300);
    line(300,300,200,200);
    arc(300,300,45,135,140);
    setfillstyle(SOLID_FILL,BLUE);

    floodfill(301,105,WHITE);
    setfillstyle(SOLID_FILL,LIGHTRED);

    floodfill(299,105,WHITE);
    setfillstyle(SOLID_FILL,BLUE);


    floodfill(299,275,WHITE);
    setfillstyle(SOLID_FILL,LIGHTRED);


    floodfill(301,275,WHITE);
    line(300,300,250,350);
    line(250,350,350,350);
    line(300,300,350,350);
    setfillstyle(SOLID_FILL,YELLOW);


    floodfill(300,310,WHITE);
    getch();
    closegraph();
}
