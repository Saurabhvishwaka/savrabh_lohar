#include<stdio.h>
int main()
{
int x[10],y,g,e,f;
y=0;
while(y<=9)
{
printf("Enter a number: ");
scanf("%d",&x[y]);
y++;
}
e=0;
while(e<=8)
{
f=e+1;
while(f<=9)
{
if(x[f]<x[e])
{
g=x[e];
x[e]=x[f];
x[f]=g;
}
f++;
}
e++;
}
printf("linear sort\n");
y=0;
while(y<=9)
{
printf("%d\n",x[y]);
y++;
}
return 0;
}