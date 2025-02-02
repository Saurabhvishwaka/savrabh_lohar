#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
char a[15],b[15],e,f;
int x,y;
strcpy(a,"123");
strcpy(b,"9020");
x=0;
while(a[x]!='\0' && b[x]!='\0')
{
e=a[x];
f=b[x];
if(e>48 && e<57)
if(f>48 && f<57)
if(a[x]=='\0' && b[x]=='\0')
y=a[x]+b[x];
x++;
}
printf("Total is:%d\n",y);
return 0;
}
