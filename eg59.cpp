#include<iostream>
using namespace std;
int abcd(int *p)
{
*p=300;
}
int main()
{
int x;
x=100;
abcd(&x);
cout<<x<<endl;
return 0;
}