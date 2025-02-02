#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
vector<int> v{10,20,30,40,50,40,50,40,70,30};
cout<<count(v.begin(),v.end(),54)<<endl;
return 0;
}