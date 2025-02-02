#include<stdio.h>
int main()
{
int x;
char a[21],b[21];
printf("Enter a string: ");
scanf("%s",a);
fflush(stdin);
printf("Enter anothier string :");
scanf("%s",b);
fflush(stdin);
x=0;
while(a[x]!='\0' && b[x]!='\0')
{
x++;
}
if(a[x]=='\0' && b[x]=='\0')
{
printf("%s same as %s \n",a,b);
}
else
{
printf("%s not same string %s",a,b);
}
return 0;
} 