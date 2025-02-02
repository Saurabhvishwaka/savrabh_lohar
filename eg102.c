#include<stdio.h>
int main()
{
int  x;
printf("Engter a number: ");
scanf("%d",&x);
if(x<50)
{
printf("Less than 50");
}
if(x>50)
{
printf("Greater than 50");
}
if(x==50)
{
printf("equal to 50");
}
return 0;
}