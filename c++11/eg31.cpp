#include<iostream>
using namespace std;
class aaa
{
public:
int x,y;
aaa():x(10),y(20)
{
cout<<"Default construtor"<<endl;
cout<<x<<endl;
cout<<y<<endl;
}
aaa(int e,int f):x(e),y(f)
{
cout<<"parameterized constructor"<<endl;
cout<<e<<endl;
cout<<f<<endl;
}
};
int main()
{
aaa a;
aaa b(100,200);
return 0;
}