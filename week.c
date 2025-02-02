#include<stdio.h>
int main()
{
int x;
printf("Enter your choice: ");
scanf("%d",&x);
if(x<1 || x>7)
{
printf("Invalid choice");
return 0;
}
while(1)
{
if(x==1)
{
printf("Sunday");
break;
}
if(x==2)
{
printf("Monday");
break;
}
if(x==3)
{
printf("Tuesday");
break;
}
if(x==4)
{
printf("Wednesday");
break;
}
if(x==5)
{
printf("Thursday");
break;
}
if(x==6)
{
printf("Friday");
break;
}
if(x==7)
{
printf("saturday");
break;
}
}
return 0;
}