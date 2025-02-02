#include<stdio.h>
int main()
{
int y,x[10],lookfor,found,count;
y=0;
while(y<=9)
{
printf("enter a number: ");
scanf("%d",&x[y]);
y++;
}
printf("Enter the number to search: ");
scanf("%d",&lookfor);
found=0;
y=0;
count=0;
while(y<=9)
{
if(lookfor==x[y])
{
found=1;
count++;
//break;
}
y++;
}
if(found==0)
{
printf("%d not found \n",lookfor);
}
else
{
printf("%d found index %d count %d\n",lookfor,y,count);
}
return 0;
}