#include<stdio.h>
#include<string.h>
int main()
{
int x,wc;
char a[85];
printf("enter a sentence: ");
fgets(a,85,stdin);
fflush(stdin);
a[strlen(a)-1]='\0';
wc=0;
x=0;
while(a[x]==' ')
{
x++;
}
while(a[x]!='\0')
{
if(a[x]==' ')
{
wc++;
while(a[x]== ' ')
{
x++;
}
}
else
{
x++;

}
}
if(x>0 && a[x-1]==' ')
{
wc--;
}

wc++;
printf("number of word %d\n",wc);
return 0;
}














