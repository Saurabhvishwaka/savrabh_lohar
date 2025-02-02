#include<iostream>
using namespace std;
class Bulb
{
int w;
private:
public:
int setWattage(int e)
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
Bulb g;
g.setWattage(60);
cout<<g.getWattage()<<endl;
return 0;
}