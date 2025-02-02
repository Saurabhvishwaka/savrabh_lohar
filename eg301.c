#include<stdio.h>
int main()
{
int x;
char a[21];
printf("Enter a string: ");
fgets(a,6,stdin);
fflush(stdin);
x=0;
while(a[x]!='\0')
{
x++;
}
printf("string:%s Length: %d",a,x);
return 0;
}
