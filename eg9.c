#include<stdio.h>
int main()
{
 char a[21],b[21];
int x,y;
printf("Enter a string: ");
scanf("%s",a);
x=0;
y=0;
while(a[x]!='\0')
{
b[y]=a[x];
y++;
x++;
}
b[y]='\0';
printf("same string copy as: %s\n",b);
return 0;
}