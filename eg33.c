#include<stdio.h>
#include<string.h>
int main()
{
char a[15],b[15];
strcpy(a,"123");
strcpy(b,"9020");
strcat(a,b);
printf("%s",a);
return 0;
}