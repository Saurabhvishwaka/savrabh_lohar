#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;
using intvector=vector<int>;
int main()
{
intvector v;
int x{};
char more{};
while(true)
{
cout<<"Enter a number: ";
cin>>x;
v.push_back(x);
cout<<"add more data (Y/N) : ";
cin>>more;
if(more!='y' && more!='Y')
break;
}
int sum=accumulate(v.begin(),v.end(),0);
cout<<"Total is: "<<sum<<endl;
return 0;
}