#include<graphics.h>
#include<conio.h>
#include<stdio.h>
void main()
{
    intgd = DETECT ,gm, i;
    float x, y,dx,dy,steps;
    int x0, x1, y0, y1;
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    setbkcolor(WHITE);
    x0 = 100 , y0 = 200, x1 = 500, y1 = 300;
    dx = (float)(x1 - x0);
    dy = (float)(y1 - y0);
    if(dx>=dy)
    {
        steps = dx;
    }
    else
    {
        steps = dy;
    }
    dx = dx/steps;
    dy = dy/steps;
    x = x0;
    y = y0;
    i = 1;
    while(i<= steps)
    {
        putpixel(x, y, RED);
        x += dx;
        y += dy;
        i=i+1;
    }
    getch();
    closegraph();
}

















/*DDA Algorithm

DDA stands for Digital Differential Analyzer. It is an incremental method of scan conversion of line. In this method calculation is performed at each step but by using results of previous steps.

Suppose at step i, the pixels is (xi,yi)

The line of equation for step i
              yi=mxi+b......................equation 1

Next value will be
              yi+1=mxi+1+b.................equation 2
              m =DDA Algorithm
              yi+1-yi=∆y.......................equation 3
              yi+1-xi=∆x......................equation 4
              yi+1=yi+∆y
              ∆y=m∆x
              yi+1=yi+m∆x
              ∆x=∆y/m
              xi+1=xi+∆x
              xi+1=xi+∆y/m

              Case1: When |M|<1 then (assume that x12)
              x= x1,y=y1 set ∆x=1
              yi+1=y1+m,     x=x+1
              Until x = x2

Case2: When |M|<1 then (assume that y12)
              x= x1,y=y1 set ∆y=1
              xi+1=DDA Algorithm,     y=y+1
              Until y → y2
Advantage:

    It is a faster method than method of using direct use of line equation.
    This method does not use multiplication theorem.
    It allows us to detect the change in the value of x and y ,so plotting of same point twice is not possible.
    This method gives overflow indication when a point is repositioned.
    It is an easy method because each step involves just two additions.

Disadvantage:

    It involves floating point additions rounding off is done. Accumulations of round off error cause accumulation of error.
    Rounding off operations and floating point operations consumes a lot of time.
    It is more suitable for generating line using the software. But it is less suited for hardware implementation.

DDA Algorithm:

Step1: Start Algorithm

Step2: Declare x1,y1,x2,y2,dx,dy,x,y as integer variables.

Step3: Enter value of x1,y1,x2,y2.

Step4: Calculate dx = x2-x1

Step5: Calculate dy = y2-y1

Step6: If ABS (dx) > ABS (dy)
            Then step = abs (dx)
            Else

  Step7: xinc=dx/step
            yinc=dy/step
            assign x = x1
            assign y = y1

Step8: Set pixel (x, y)

Step9: x = x + xinc
            y = y + yinc
            Set pixels (Round (x), Round (y))

Step10: Repeat step 9 until x = x2

Step11: End Algorithm   */
