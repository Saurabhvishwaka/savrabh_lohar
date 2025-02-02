#include<iostream>
//callable object
using namespace std;
class aaa
{
public:
aaa()
{
cout<<"constructor"<<endl;
}
void operator()()
{
cout<<"Great"<<endl;
}
};
int main()
{
aaa a;
a();
return 0;
}