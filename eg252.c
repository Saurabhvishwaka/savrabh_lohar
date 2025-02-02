#include<stdio.h>
int main()
{
int x,y;
x=1;
y=1;
while(y<=5)
{
x=x*y;
printf("%d\n",x);
y++;
}
return 0;
}