#include<stdio.h>
int main()
{
int x;
char a[21],b[21];
printf("Enter a string: ");
scanf("%s",a);
fflush(stdin);
x=0;
while(a[x]!='\0')
{
b[x]=a[x];
x++;
}
b[x]='\0';
printf("%s",b);
return 0;
}