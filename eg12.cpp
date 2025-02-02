#include<iostream>
using namespace std;
class Bulb
{
int w;
public:
void setWattage(int e)
{
w=e;
}
int getWattage()
{
return w;
}
};
int main()
{
Bulb b;
b.setWattage(320);
cout<<b.getWattage()<<endl;
return 0;
}