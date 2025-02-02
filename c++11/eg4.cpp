#include<iostream>
#include<vector>
using namespace std;
int main()
{
vector<int> k;
k.push_back(10);
k.push_back(20);
k.push_back(30);
vector<int>::iterator i=k.begin();
while(i!=k.end())
{
//D referencing overload operator krta hai
cout<<*i<<endl;
++i;
}
return 0;
}