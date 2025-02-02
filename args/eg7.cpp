#include<iostream>
using namespace std;
class aaa
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
int main()
{
aaa::bbb b;
b.sam();
return 0;
}