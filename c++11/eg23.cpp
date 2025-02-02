#include<iostream>
#include<thread>
using namespace std;
void whateve(int sp,int ep)
{
for(int k=sp;k<=ep;k++) cout<<k<<" ";
}
int main()
{
thread t(whateve,100,200);
for(int k=500;k<=600;k++) cout<<k<<" ";
//cout<<k<<" ";
t.join();
return 0;
}