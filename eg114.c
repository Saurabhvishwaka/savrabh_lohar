#include<stdio.h>
int main()
{
int x,y;
x=0;
y=3;
printf("%c\n",y);
while(x<=255)
{
printf("%d (%c) ",x,x);
x++;
}
return 0;
}