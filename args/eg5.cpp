#include<iostream>
#include<forward_list>
using namespace std;
template<class whateve>
void sam(whateve k)
{
forward_list<whateve> g;
cout<<k<<endl;
}
int main()
{
sam(10);
sam('A');
}