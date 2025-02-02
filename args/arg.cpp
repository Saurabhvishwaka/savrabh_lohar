#include<iostream>
#include<vector>
using namespace std;
int getSum(vector<int>collection)
{
int total;
vector<int>::iterator i=collection.begin();
while(i!=collection.end())
{
total+=(*i);
++i;
}
return total;
}
int main()
{
int x[4]={10,30,40,70};
int y[6]={20,500,600,40,67,50};
vector<int> v1(x,x+4);
vector<int> v2(y,y+6);
cout<<"Sum : "<<getSum(v1)<<endl;
cout<<"Sum : "<<getSum(v2)<<endl;
return 0;
}