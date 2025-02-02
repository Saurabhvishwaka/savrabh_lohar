#include<iostream>
using namespace std;
void sam(int x)
{
cout<<x<<endl;
}
void sam(char)=delete;
void sam(float)=delete;
void sam(double)=delete;
int main()
{
sam(10);//int
sam('A');//char
sam(10.45f);//float
sam(10.34);//double
return 0;
}