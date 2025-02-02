#include<stdio.h>
int main()
{
int x,y,m;
m=3;
while(m>=3)
{
x=0;
y=1;
while(x<=m)
{
printf("%d %d\n",x,y);
x++;
y++;
}
m--;
}
return 0;
}