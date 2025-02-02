#include<stdio.h>
int main()
{
int y,x[10],e,f,g,m;
y=0;
while(y<=9)
{
printf("Enter a number: ");
scanf("%d",&x[y]);
y++;
}
m=8;
while(m>=0)
{
e=0;
f=1;
while(e<=m)
{
if(x[f]<x[e])
{
g=x[e];
x[e]=x[f];
x[f]=g;
}
f++;

e++;
}
m--;
}
printf("Bubble sort\n");
y=0;
while(y<=9)
{
printf("%d\n",x[y]);
y++;
}
return 0;
}








