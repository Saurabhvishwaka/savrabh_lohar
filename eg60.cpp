#include<iostream>
using namespace std;
void add(int x,int y)
{
printf("%d\n",x+y);
}
void add(int x,int y,int z)
{
printf("%d",x+y+z);
}
int main()
{
add(100,200);
add(100,200,300);
return 0;
}