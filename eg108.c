#include<stdio.h>
int main()
{
int x[10],y,e,f,g;
y=0;
while(y<=9)
{
printf("Enter a number: ");
scanf("%d",&x[y]);
y++;
}
e=0;
f=9;
while(e<f)
{
g=x[e];
x[e]=x[f];
x[f]=g;
e++;
f--;
}
y=0;
while(y<=9)
{
printf("%d\n",x[y]);
y++;
}
return 0;
}