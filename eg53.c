#include<stdio.h>
int main()
{
int x,y;
x=1;
y=1;
while(x<=5)
{
printf("%d \n",y);
y=x+y;
x++;
}
return 0;
}