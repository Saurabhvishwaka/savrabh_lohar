#include<iostream>
using namespace std;
class aaa
{
int x;
int y;
public:
aaa(int e,int f):x(e),y(f)
{
cout<<"Great : "<<x<<endl;
cout<<"Cool : "<<y<<endl;
}
};
int main()
{
aaa a(500,600);
return 0;
}