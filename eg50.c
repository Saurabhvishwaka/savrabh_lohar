#include<stdio.h>
int main()
{
int x;
printf("enter a number: ");
scanf("%d",&x);
if(x<50)
{
printf("%d: less than 50",x);
}
else
{
printf("%d :greater than 50",x);
}
return 0;
}