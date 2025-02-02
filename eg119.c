#include<stdio.h>
int main()
{
int x;
char a[21];
printf("Enter a string: ");
scanf("%s",a);
if(a[x]>=97 && a[x]<=122)
{
a[0]=a[0]-32;
}
x=1;
while(a[x]!='\0')
{
if(a[x]>=65 && a[x]<=90)
{
a[x]=a[x]+32;
}
x++;
}
printf("convert to captilze case (%s) ",a);
return 0;
}