#include<stdio.h>
#include<string.h>
int main()
{
char a[20],b[20],e,f;
int y;
strcpy(a,"123");
strcpy(b,"9020");
int x=0;
while(a[x]!='\0')
{
e=a[x];
f=b[x];
if(e>48 && e<57)
if(f>48 && f<57)
y=a[x]+b[x];
x++;
}
printf("third %d \n",y);
return 0;
}