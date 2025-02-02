#include<iostream>
#include<vector>
using namespace std;
int main()
{
using intvector=vector<int>; 
intvector g;
g.push_back(10);
g.push_back(20);
g.push_back(30);
for(int r:g) cout<<r<<endl;
return 0;

}