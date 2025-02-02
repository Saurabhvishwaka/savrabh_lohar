#include<iostream>
using namespace std;
class kkk//ye code compile nhi hoga
{
public:
static int x;
};
int kkk::x=10;
int main()
{
cout<<kkk::x<<endl;
return 0;
}