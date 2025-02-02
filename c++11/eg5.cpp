#include<iostream>
#include<vector>
using namespace std;
int main()
{
vector<int> k;
k.push_back(50);
k.push_back(110);
k.push_back(500);
for(int e:k)// correct logic using modern c++11 sort code and error less and
{
cout<<e<<endl;
}
return 0;
}