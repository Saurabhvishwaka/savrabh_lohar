#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
char a[15],b[15];
int x,y,z;
strcpy(a,"123");
strcpy(b,"9020");
x=0;
y=0;
while(a[x]!='\0' && b[y]!='\0')
{
z=atoi(a)+atoi(b);
x++;
y++;
}
printf("Total is:%d\n",z);
return 0;
}