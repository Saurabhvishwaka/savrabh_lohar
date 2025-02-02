#include<stdio.h>
#include<string.h>
int main()
{
int x;
char a[21],b[21],e,f;
printf("Enter first string: ");
scanf("%s",b);
fflush(stdin);

printf("Enter second string: ");
scanf("%s",a);
fflush(stdin);

x=0;
while(a[x]!='\0' && b[x]!='\0')
{
e=a[x];
f=b[x];
if(e>=65 && e<=90)
{
e=e+32;
}
if(f>=65 && f<=90)
{
f=f+32;
}
if(e!=f)
{
break;
}
x++;
}
if(a[x]=='\0' && b[x]=='\0')
{
printf("Incase sensitive %s are same %s",a,b);
}
else
{
printf("Not incase sensitive");
}
return 0;
}







