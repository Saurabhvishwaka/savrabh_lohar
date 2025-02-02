#include<stdio.h>
int main()
{
int x;
char a[21];
printf("Enter a string:");
scanf("%s",a);
x=0;
while(a[x]!='\0')
{
x++;
}
printf("%s Lenght %d\n",a,x);
return 0;
}