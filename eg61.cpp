#include<iostream>
using namespace std;
void add(int x,int y)
{
cout<<"total of"<<x+y<<endl;
}
void add(float j,int k)
{
cout<<"total of"<<j+k<<endl;
}
int main()
{
add(100,200.0f);
add(300,100);
return 0;
}