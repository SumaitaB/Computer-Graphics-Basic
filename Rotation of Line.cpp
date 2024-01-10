#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    int gd=DETECT,gm;
    int pivot_x,pivot_y,x,y;
    double degree,radian;
    int rotated_point_x,rotated_point_y;
    initgraph(&gd,&gm,"C://TURBOC3//BGI");
    cleardevice();
    printf("\t\t*********** ROTATION *********** \n");
    printf("\n Enter an initial coordinates of the line = ");
    scanf("%d %d",&pivot_x,&pivot_y);
    printf("\n Enter a final coordinates of the line = ");
    scanf("%d %d",&x,&y);
    line(pivot_x,pivot_y,x,y);
    printf("\n\n Now, Enter a degree = ");
    scanf("%lf",&degree);
    radian=degree*0.01745;
    rotated_point_x=(int)(pivot_x +((x-pivot_x)*cos(radian)-(y-pivot_y)*sin(radian)));
    rotated_point_y=(int)(pivot_y +((x-pivot_x)*sin(radian)+(y-pivot_y)*cos(radian)));
    setcolor(RED);
    line(pivot_x,pivot_y,rotated_point_x,rotated_point_y);
    getch();
    closegraph();
}
