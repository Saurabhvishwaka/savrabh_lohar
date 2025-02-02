#include<stdio.h>
int main()
{
int x;
char a[21],b[21];
printf("Enter a string: ");
scanf("%s",a);
x=0;
while(a[x]!='\0')
{
b[x]=a[x];
x++;
}
b[x]='\0';
printf("copy to logic %s \n",b);
return 0;
}