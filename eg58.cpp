#include<iostream>
using namespace std;
void abcd(int &p)
{
p=200;
}
int main()
{
int x;
x=100;
abcd(x);
cout<<x<<endl;
return 0;
}