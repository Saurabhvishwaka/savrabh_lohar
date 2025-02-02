#include<stdio.h>
int main()
{
int x,y;
x=1,y=1;
while(x<=10)
{
printf("%d\n",y);
if(x%2==0)
{
y=y-x;
}
else
{
y=y+x;
}
x++;
}
return 0;
}