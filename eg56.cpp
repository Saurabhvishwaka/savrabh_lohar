#include<iostream>
using namespace std;
int main()
{
int y;
int &x=y;
y=100;
cout<<x;
return 0;
}