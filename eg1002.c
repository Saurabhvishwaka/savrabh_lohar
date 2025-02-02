#include<stdio.h>
int  main()
{
int x,y;
x=1,y=1;
while(x<=10)
{
printf("%d\n",y);
if(x%4==0)
{
y=x-y;
}
else
{
y=x+y;
}
x++;
}

return 0;

}