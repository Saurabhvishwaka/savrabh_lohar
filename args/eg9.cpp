#include<iostream>
using namespace std;
class aaa //ye code compile nhi hoga
{
public:
class bbb//inner class
{
public:
void sam()
{
cout<<"cool"<<endl;
}
};
};
template<class whatever>
void sam()
{
typename whatever::bbb k;
}
int main()
{
sam<aaa>();
return 0;
}