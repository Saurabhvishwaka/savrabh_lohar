#include<stdio.h>
struct Rectangle
{
int breadth;
int area;
int height;
};
void createRectangle()
{
struct Rectangle  g;
printf("Enter a height:");
scanf("%d",&g.height);
printf("Enter a breadth");
scanf("%d",&g.breadth);
g.area=g.breadth*g.height;
printf("Area: %d ,Height: %d, Breadth: %d",g.area,g.height,g.breadth);
}
int main()
{
createRectangle();
return 0;
}