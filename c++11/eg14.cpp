#include<iostream>
#include<algorithm>
#include<numeric>
#include<vector>
using namespace std;
using intvector=vector<int>;
int main()
{
intvector v;
int x {};
char more{};
while(true)
{
cout<<"Enter a number: ";
cin>>x;
v.push_back(x);
cout<<"add more data (Y/N) : " ;
cin>>more;
if(more=!'y' && more!='Y') break;
}
cout<<"Max : "<<*(max_element(v.begin(),v.end()))<<endl;
cout<<"Min : "<<*(min_element(v.begin(),v.end()))<<endl;
return 0;
}

