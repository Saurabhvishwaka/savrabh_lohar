#include<iostream>
using namespace std;
template<typename whateve>
void sam(whateve i)
{
cout<<i<<endl;
}
int main()
{
sam(10);
sam('A');
return 0;
}