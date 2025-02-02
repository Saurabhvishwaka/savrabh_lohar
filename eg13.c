#include<stdio.h>
#include<string.h>
int main()
{
char a[15],b[15],c[30];
int x,y,z=0;
strcpy(a,"123");
strcpy(b,"9020");
x=0;
y=0;
while(a[x]!='\0' && b[y]!='\0')
{
a[x]=b[y];
x++;
y++;
//z++;
}
c[z]='\0';
printf("%s\n",a);
return 0;
}

