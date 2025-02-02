#include<stdio.h>
int main()
{
int x,y;
x=1,y=1;
while(x<=5)
{
y=x*y;
printf("%d\n",y);
x++;
}
return 0;
}