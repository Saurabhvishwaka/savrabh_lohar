#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
vector<int> v {10,20,30,40,50,40,50,40,70,30};
auto k=find(v.begin(),v.end(),70); //later no change 30to 55
if(k==v.end()) cout<<"Not found"<<endl;
else cout<<"Found : "<<*k<<" "<<"at index : "<<" "<<k-v.begin()<<endl;
return 0;
}