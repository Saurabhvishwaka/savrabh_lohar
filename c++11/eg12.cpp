#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
using intvector=vector<int>;
int main()
{
intvector v;
char more {};
int x {};
while(true)
{
cout<<"Enter a number: ";
cin>> x;
v.push_back(x);
cout<<"add more data(Y/N): ";
cin>>more;
if(more!='y' && more!='Y') break;
}
reverse(v.begin(),v.end());
cout<<"reversed output"<<endl;
for(int e:v) cout<<e<<endl;
return 0;
}
