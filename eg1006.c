#include<stdio.h>
int main()
{
int x[10],y,larges;
y=0;
while(y<=9)
{
printf("Enter a number: ");
scanf("%d",&x[y]);
y++;
}
larges=0;
y=0;
while(y<=9)
{
if(x[y]>larges)
{
larges=x[y];
}
y++;
}
printf("largest number %d",larges);
return 0;
}