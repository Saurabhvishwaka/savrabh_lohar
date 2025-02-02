#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
char more {};
int x {};
using intvector=vector<int>;
intvector v;
while(true)
{
cout<<"Enter a number: ";
cin>>x;
v.push_back(x);
cout<<"add more data (Y/N): ";
cin>>more;
if(more!='y' && more!='Y') break;
}
sort(v.begin(),v.end());
cout<<"Sorted output "<<endl;
for(int e:v) cout<<e<<endl;
return 0;
}





