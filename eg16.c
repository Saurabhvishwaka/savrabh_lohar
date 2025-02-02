#include<stdio.h>
#include<string.h>
int main()
{
char x[15],y[15],z[30];
int a=0,b=0,c=0;
strcpy(x,"123");
strcpy(y,"9020");
while(x[a]!='\0')
{
printf("%s \n",x);
z[c]=x[a]%10;
b++;
a++;
c++;
}
printf("sum comput output 9143 should be consider :%s\n",z);
while(y[b]!='\0')
{
printf("%s \n",y);
}
z[c]=x[a]+y[b];
c++;
while(z[c]!='\0')
{
c++;
}
return 0;
}