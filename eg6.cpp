#include<iostream>
using namespace std;
class aaa
{
public:
void  sum()
{
cout<<"object first"<<endl;
}
};
class bbb:public aaa
{
public:
void cur()
{
cout<<"object second"<<	endl;
sum();
}
};
int main()
{
aaa a;
a.sum();
bbb b;
b.cur();
return 0;
}