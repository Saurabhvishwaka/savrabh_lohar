#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
char a[21],b[21],c[42];
int x,y,z;
int d=6422208;
strcpy(a,"123");
strcpy(b,"9020");
x=0;
y=0;
z=0;
while(a[x]!='\0')
{
x++;
}
while(a[y]!='\0')
{
c[z]=atoi(a)+ atoi(b);
x++;
y++;
}
printf("%s\n",c);
//printf("%s\n",d);
//printf("%c",d);
return 0;
}