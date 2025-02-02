#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
vector<int> v{10,20,30,40,5,50,78,99,77,100};
auto found=binary_search(v.begin(),v.end(),99);
cout<<found<<endl;
return 0;
}