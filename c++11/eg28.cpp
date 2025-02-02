//Example wrong 
#include<iostream>
#include<stdlib.h>
using namespace std;
template<class cartoon>
class aaa
{
cartoon x;
public:
aaa()
{
cout<<"Default Constructor"<<endl;
}
};
int main()
{
aaa<int> a;
aaa<char> b;
return 0;
}
