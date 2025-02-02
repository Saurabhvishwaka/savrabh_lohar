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
}
};
};
template<class whatever>
void sam()
{
whatever::bbb k;
}
int main()
{
sam<aaa>();
return 0;
}