#include <iostream>
#include <conio.h>
#include <graphics.h>
using namespace std;


int main()
{
	int gd=DETECT,gm;
	float x1,y1,x2,y2,sx,sy,f1,f2;
	initgraph(&gd,&gm,"C:\\Tc\\BGI");
	cout<<"SCALING OF A LINE\n";
	cout<<"Enter the first coordinate of a line:";
	cin>>x1>>y1;
	cout<<"Enter the second coordinate of a line:";
	cin>>x2>>y2;
	line(x1,y1,x2,y2);
	cout<<"Enter the scaling factor:";
	cin>>sx>>sy;
	setcolor(YELLOW);
	f1=x1*sx;
	y1=y1*sy;
	f2=x2*sx;
	y2=y2*sy;
	line(f1,y1,f2,y2);
	getch();
	closegraph();
}
