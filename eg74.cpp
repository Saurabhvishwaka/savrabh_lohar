#include<iostream>
using namespace std;
class Bulb
{
private:
int w;
public:
void setWattage(int e)
{
if(e>0 && e<240)
{
w=e;
}
else
{
w=0;
}
}
int getWattage()
{
return w;
}
};
int main()
{
Bulb g;
g.setWattage(101);
cout<<"Wattage: "<<g.getWattage()<<endl;
return 0;
}