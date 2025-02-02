#include<iostream>
using namespace std;
template<class cartoon>
class aaa
{
cartoon x;
public:
aaa(cartoon x)
{
this->x=x;
cout<<"parameterized constructor"<< " "<<this->x<<endl;
}
};
int main()
{
aaa<int> a(10);
aaa<char> b('a');
return 0;
}
