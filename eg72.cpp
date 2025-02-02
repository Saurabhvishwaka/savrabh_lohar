#include<iostream>
using namespace std;
class aaa 
{
public:
void sam()
{
cout<<"whastever"<<endl;
}
};
class bbb:public aaa
{
public:
void tom()
{
cout<<"Cool"<<endl;
}
};
class ccc:public aaa
{
public:
void joy()
{
cout<<"Great"<<endl;
}
};
class ddd:public bbb,public ccc
{
public:
void bobby()
{
cout<<"Fantastic"<<endl;
}
};
int main()
{
ddd d;
d.bbb::tom();
d.ccc::sam();
return 0;
}