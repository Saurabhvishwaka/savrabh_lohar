#include<stdio.h>
int main()
{
int x,y;
char a[21],b[21];
printf("Enter first string: ");
scanf("%s",a);
printf("Enter socend string: ");
scanf("%s",b);
x=0;
while(a[x]!='\0')
{
x++;
}
y=0;
while(b[y]!='\0')
{
a[x]=b[y];
x++;
y++;
}
a[x]='\0';
printf("%s",a);
return 0;
}

