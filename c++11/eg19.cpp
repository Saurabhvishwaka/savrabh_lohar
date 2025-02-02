#include<iostream>
#include<thread>
using namespace std;
void whatever()
{
int x;
for(x=0;x<=200;x++) cout<<x<<" ";
}
int main()
{
thread s(whatever);
for(int y=300;y<500;y++)
cout<<y<<" ";
s.join();
return 0;
}
