#include<iostream>
using namespace std;
class aaa
{
public:
void operator()()
{
for(int e=0;e<=100;e++)
cout<<e<<" ";
} 
};
int main()
{
aaa a;
a();
return 0;
}