#include<iostream>
using namespace std;
class aaa
{
public:
aaa()
{
cout<<"default constructor"<<endl;
}
void * operator new(unsigned int size)=delete;//internally void * operator new(size_t)=delete;
};
int main()
{
aaa a;
aaa *k;
k=new aaa;
return 0;
}
