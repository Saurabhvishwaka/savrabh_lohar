#include<stdio.h>
int main()
{
int x[10],y,num,lb,ub,j;
y=0;
while(y<=9)
{
printf("enter a number: ");
scanf("%d",&x[y]);
y++;
}
lb=0;
ub=9;
y=lb+1;
while(y<=ub)
{
num=x[y];
j=y-1;
while(j>=lb && x[j]>num)
{
x[j+1]=x[j];
j--;
}
x[j+1]=num;
y++;
}
printf("insertion sort \n");
y=0;
while(y<=9)
{
printf("%d\n",x[y]);
y++;
}
return 0;
} 