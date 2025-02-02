#include<iostream>
using namespace std;
class Bulb
{
int w;
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
Bulb gsetWattage(10);;

cout<<g.getWattage()<<endl;
return 0;
}