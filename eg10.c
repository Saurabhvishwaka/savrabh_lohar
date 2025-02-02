#include<stdio.h>
int main()
{
char a[21];
int x;
printf("Enter a string: ");
scanf("%s",a);
x=0;
while(a[x]!='\0')
{
printf("%d\n",x);
printf("**************************\n");
x++;
}
printf("string a lenght: %d and string: %s",x,a);
return 0;
} 