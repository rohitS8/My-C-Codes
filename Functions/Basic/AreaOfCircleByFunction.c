#include<stdio.h>
#include<math.h>
#define pi 3.14

float distancecalculation(int x1,int x2,int y1,int y2)
{
    float result;
    
    result = (x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
    
    return sqrt(result);
}

float circlearea(int x1,int x2,int y1,int y2, float (*ptr) (int,int,int,int))
{
    float result;
    float r;
    r = distancecalculation(x1,x2,y1,y2);
    result = pi*r*r;
    return result;
}

int main()
{
    int x1,x2,y1,y2;
    float distance,area;

   printf("Enter the vale of x1: ");
    scanf("%d",&x1);
   printf("Enter the vale of y1: ");
    scanf("%d",&y1);
   printf("Enter the vale of x2: ");
    scanf("%d",&x2);
   printf("Enter the vale of y2: ");
    scanf("%d",&y2);

    distance = distancecalculation(x1,x2,y1,y2);
    area = circlearea(x1,x2,y1,y2,distancecalculation);

    printf("The distance between those points: %.2f\n", distance);
    printf("The area of the circle is: %.2f\n",area);

    return 0;
}