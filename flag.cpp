#include <graphics.h>
#include <iostream>
#include <conio.h>
#include <math.h>



int main()

{

    int gd=DETECT,gm;

    initgraph(&gd,&gm,"C:\\T\\BGI");

    setbkcolor(YELLOW);

    setcolor(WHITE);

    rectangle(150,40,450,180);

    setfillstyle(1,GREEN);

    floodfill(160,50,WHITE);

    setcolor(WHITE);

    circle(300,110,55);

    setfillstyle(1,RED);

    floodfill(320,120,WHITE);

    setcolor(RED);

    outtextxy(200,250,"BANGLADESH NATIONAL FLAG");

    outtextxy(250,330,"BSc in CSE");

    for(int i=1,j=433; i<=433; i++,j--)
    {

        outtextxy(1+i,310," Programmed BY HM JUBAYER ");

        outtextxy(1+j,350," Programmed BY HM JUBAYER ");

        _sleep(50);



    }



    getch();

}

///another
#include<graphics.h>
#include<conio.h>
main()
{
    int driver,mode;
    driver=DETECT;
    mode=0;


    initgraph(&driver,&mode,"c:\\tc\\bgi");
    setbkcolor(WHITE);
    setcolor(WHITE);
    rectangle(150,40,450,180);
    setfillstyle(1,GREEN);
    floodfill(160,50,WHITE);
    setcolor(WHITE);
    rectangle(138,35,150,450);
    setfillstyle(1,BLUE);
    floodfill(140,40,WHITE);
    setcolor(WHITE);
    bar(130,450,160,460);
    setcolor(WHITE);
    circle(300,110,55);
    setfillstyle(1,RED);
    floodfill(320,120,WHITE);
    getch();
}
