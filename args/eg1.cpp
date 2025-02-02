#include<iostream>
using namespace std;
template<typename ...whateve>
auto getSum(whateve ...x)
{
return (x+...);
}
int main()
{
cout<<"Sum : "<<getSum(10,20,30)<<endl;
cout<<"Sum : "<<getSum(20,30,40,58,65);
return 0;
}