#include<stdio.h>
int main()
{
int x,y,z;
printf("enter a number: ");
scanf("%d",&x);
y=1;
while(y<=x)
{
z=1;
while(z<=y)
{
printf("%d",z);
z++;
}
printf("\n");
y++;
}
return 0;
}