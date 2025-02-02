#include<iostream>
using namespace std;
class Bulb 
{
int w;
public:
int setWattage(int e)
{
if(e>=0 && e<=240)
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
Bulb m,g;
g.setWattage(70);

cout<<g.getWattage()<<endl;
m.setWattage(-20);
cout<<m.getWattage()<<endl;
return 0;
}