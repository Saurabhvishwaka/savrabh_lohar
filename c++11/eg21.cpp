#include<iostream>
#include<thread>
using namespace std;
class aaa
{
public:
aaa()
{
cout<<"default constructor"<<endl;
}
aaa(const aaa &u)
{
cout<<"Copy constructor"<<endl;
}
void operator()()
{
for(int e=0;e<=1000;e++)
cout<<e<<" ";
}
};
int main()
{
aaa a;
thread t(a);
for(int e=2000;e<=3000;e++)
cout<<e<<" ";
t.join();
return 0;
}