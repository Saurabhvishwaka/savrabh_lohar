#include<iostream>
using namespace std;
int main()
{
int x;
int *p;
p=&x;
*p=60;
cout<<x<<endl;
x=100;
cout<<*p;

return 0;
}