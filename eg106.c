#include<stdio.h>
int main()
{
int x,y;
x=0;
while(x<=5)
{
y=x+1;
while(y<=5)
{
printf("%d %d \n",x,y);
y++;
}
x++;
}
return 0;
}