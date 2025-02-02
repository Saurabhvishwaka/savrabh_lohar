#include<stdio.h>
int main()
{
int x;
printf("Enter a number ");
scanf("%d",&x);
if(x<50)
{
printf("Less than 50");
}
else if(x>50)
{
printf("Greater than 50");
}
else
{
printf("equal to 50");
}
return 0;
}