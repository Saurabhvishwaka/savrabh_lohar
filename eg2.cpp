#include<iostream>
using namespace std;
class decimal
{
private:
double x;
public:
void setDecimal(double d)
{
this->x=d;
}
double getDecimal()
{
return this->x;
}
};
int main()
{
double x=35.566;
cout<<x<<endl;
return 0;
}