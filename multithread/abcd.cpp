#include<thread>
#include<iostream>
using namespace std;
void doSomething()
{
for(int i=0;i<=200;i++)
{
cout<<i<<" "<<;
}
}
int main()
{
thread t(doSomething);
for(int j=501;j<=800;j++) cout<<j<< " ";
t.join();
return 0;
}