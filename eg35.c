
#include<stdio.h>
#include<string.h>
int main()
{
char a[15],b[15];
strcpy(a,"123");
strcpy(b,"9020");
int x=0,y;
while(a[x]!='\0' && b[x]!='\0')
{
y=a[x]+b[x];
x++;
}
printf("%d",y);
return 0;
}