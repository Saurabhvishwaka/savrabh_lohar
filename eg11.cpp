#include<iostream>
using namespace std;
int main()
{
int x;
int *p;
x=247;
p=&x;
*p=90;
cout<<p<<endl;
cout<<x<<endl;
cout<<p<<endl;
return 0;
}