#include<stdio.h>
int main()
{
int e,f;
e=0;
while(e<=4)
{
f=e+1;
while(f<=4)
{
printf("%d,%d\n",e,f);
f++;
}
e++;
}
return 0;
}