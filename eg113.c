#include<stdio.h>
void lmn(int,int);
int main()
{
int x,y;
x=10;
y=30;
lmn(x,y);
return 0;
}
//prototype declared krna padenga 
void lmn(int p,int q)
{
int r=p+q;
printf("%d\n",r);
}