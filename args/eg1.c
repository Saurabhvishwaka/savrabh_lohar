#include<stdio.h>
#include<stdarg.h>
int getSum(int numberOfElements,...)
{
va_list list;
int x,total;
va_start(list,numberOfElements);
total=0;
for(x=1;x<=numberOfElements;x++)
{
total+=va_arg(list,int);
}
va_end(list);
return total;
}
int main()
{
int sum;
sum=getSum(5,10,20,30,40,50);
printf("Sum : %d\n",sum);
sum=getSum(3,1000,2000,3000);
printf("Sum : %d \n",sum);
return 0;
}