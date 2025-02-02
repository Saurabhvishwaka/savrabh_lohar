#include<stdio.h>
#include<string.h>
int main()
{
int x,wc;
char a[82];
printf("Enter a string: ");
fgets(a,82,stdin);
fflush(stdin);
a[strlen(a)-1]='\0';
x=0;
wc=0;
while(a[x]!='\0')
{
if(a[x]==' ')
{
wc++;
}
x++;
}
wc++;
printf("number of words %d\n",wc);
return 0;

}
