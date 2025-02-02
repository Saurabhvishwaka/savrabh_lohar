#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
vector<int> v{10,20,30,30,30,50,70};
auto lb=lower_bound(v.begin(),v.end(),30); //not less than 30
auto ub=upper_bound(v.begin(),v.end(),30);// greater than 30
cout<<"Lower bound : "<<lb-v.begin()<<endl;
cout<<"Upper bound : "<<ub-v.begin()<<endl;
return 0;
}