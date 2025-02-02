#include<stdio.h>
int main()
{
int x=printf("Hello\n");
char a='\t';
char b='\n';
char c='\r';

printf("%d \n",x);
printf("%d \n",a);
printf("%d \n",b);
printf("%d \n",c);

printf("%d",a);
return 0;
}