#include<stdio.h>
void add(int x,int y)
{
printf("%d",x+y);
}
void add(int y,int x,int z)
{
printf("%d",x+y+z);
}
int main()
{
add(100,200);
add(1000,3000,200);
return 0;
}