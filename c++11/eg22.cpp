#include<iostream>
using namespace std;
class aaa
{
public:
aaa()
{
cout<<"default constructor"<<endl;
}
aaa(const aaa &copy)
{
cout<<"copy constructor"<<endl;
}
void operator()()
{
cout<<"Operator got called"<<endl;
}
};
class bbb
{
public:
template<class kkk>
bbb(kkk j)
{
j();
}
};
int main()
{
aaa a;
bbb b(a);
return 0;
}