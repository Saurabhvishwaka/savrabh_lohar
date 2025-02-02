#include<stdio.h>
#include<string.h>
int getstringLength(char *);
int main()
{
int x;
char a[21];
printf("enter a string: ");
fgets(a,21,stdin);
fflush(stdin);
a[getstringLength(a)-1]='\0';
x=getstringLength(a);
printf("Length of string %s is %d",a,x);
return 0;
}
int getstringLength(char *p)
{
int k;
k=0;
while(*p!='\0')
{
k++;
p++;
}
return k;
}