#include<stdio.h>
int main()
{
int e,f;
e=1;while(e<=3)
{
f=1;
while(f<=3)
{
printf("%d %d\n",e,f);
f++;
}
e++;
}
return 0;
}