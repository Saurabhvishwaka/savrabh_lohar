#include<stdio.h>
int main()
{
int x,y,z;
printf("Enter number of step: ");
scanf("%d",&x);
y=1;
while(y<=5)
{
z=1;
while(z<=y)
{
printf("%d\n",z);
z++;
}
printf("\n");
y++;
}
return 0;
}