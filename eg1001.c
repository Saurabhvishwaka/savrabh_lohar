#include<stdio.h>
#include<stdbool.h>
int main()
{
int x,y=2;
x=1;
while(x<=10)
{
printf("%d\n",y);
y=y*x;
x++;
//break;
}
return 0;
}