#include<iostream>
#include<forward_list>
using namespase std;
template<class whatever>
void sam()
{
forward_list<whatever> g;
}
int main()
{
sam<int>();
sam<char>();
return 0;
}