#include<stdio.h>
int main()
{
int x[10],y,total;
y=0;
while(y<=9)
{
printf("Enter a number: ");
scanf("%d",&x[y]);
y++;
}
total=0;
y=0;
while(y<=9)
{
total=x[y]+total;
y++;
}
printf("%d\n",total);
return 0;
}