#include<stdio.h>
#include<string.h>
int main()
{
int x,y;
char a[21],b[21];
printf("enter your string: ");
scanf("%s",a);
printf("Enter onther string: ");
scanf("%s",b);
x=0;
y=0;
while(a[x]!='\0')
{
x++;
}
while(b[y]!='\0')
{
a[x]=b[y];
x++;
y++;
}
a[x]='\0';
printf("%s",a);
return 0;
}