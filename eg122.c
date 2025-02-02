#include<stdio.h>
int main()
{
int x;
char a[21],b[21];
printf("Enter a string: ");
scanf("%s",a);
printf("Enter second string: ");
scanf("%s",b);
x=0;
while(a[x]!='\0' && b[x]!='\0')
{
x++;
}
if(a[x]=='\0' && b[x]=='\0')
{
printf("%s as same as %s\n",a,b);
}
else
{
printf("%s is not same string %s\n",a,b);
}
return 0;
}
