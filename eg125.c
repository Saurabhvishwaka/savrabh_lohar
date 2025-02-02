#include<stdio.h>
int main()
{
int e,f;
char a[21];
printf("enter your string: ");
scanf("%s",a);
printf("before left trim(%s)\n",a);
f=0;
while(a[f]==' ')
{
f++;
}

if(f>0)
{
e=0;
while(a[f]!='\0')
{
a[e]=a[f];
e++;
f++;
}
a[e]='\0';
}
printf("(%s) after trim",a);
return 0;
}
