#include<stdio.h>
int main()
{
int x=1,y=1,z;
while(x<=34)
{
printf("%d\n",x);
z=x+y;
x=y;
y=z;
}
return 0;
}