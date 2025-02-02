#include<iostream>
using namespace std;
void add(float x,float y)
{
cout<<"Total of: "<<(x+y)<<endl;
}
void add(double m,double n)
{
cout<<"Total is: "<<m+n<<endl;
}
int main()
{
add(10,80);
add(22.22,44.44);
return 0;
}