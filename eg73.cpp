#include<iostream>
using namespace std;
class aaa
{
public:
void sam()
{
cout<<"Whataeve"<<endl;
}
};
class bbb:virtual public aaa
{
public:
void tom()
{
cout<<"Cool"<<endl;
}
};
class ddd: public bbb,public aaa
{
public: 
void bobby()
{
cout<<"fantastic"<<endl;
}
};

int main()
{
ddd d;
d.sam();

return 0;
}