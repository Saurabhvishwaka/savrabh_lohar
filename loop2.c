#include<stdio.h>
int main()
{
int x=0;
int y=1;
while(x<=5)
{
printf("%d \n",y);
y=y+x;
x++;
}
return 0;
}