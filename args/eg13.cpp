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
class kkk
{
public:
static int bbb;
};
int kkk::bbb=10;
template<class whatever>
void sam()
{
typename whatever::bbb=39; //data type batana padenga ya data type declared krna padenga
}
int main()
{
sam<aaa>();
//sam<kkk>();
cout<<kkk::bbb<<endl;
return 0;
}