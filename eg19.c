#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
char a[15],b[15],c[30];
int x;
strcpy(a,"123");
strcpy(b,"9020");
x=atoi(a)+atoi(b);
printf("%d\n",x);
//printf("%d\n",c);
return 0;
}