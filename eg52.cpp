#include<iostream>
namespace saurabh
{
namespace sale
{
int x=1000;
int numberoftransation=5000;
int getlastoftransationAmount()
{
return 100000;
}
};
namespace purchase
{
int y=2000;
int numberoftransation=8000;
int getlastoftransationAmount()
{
return 200000;
}
}
};
using namespace::saurabh::sale;
using namespace::saurabh::purchase;
int main()
{
int amount=saurabh::sale::getlastoftransationAmount();
printf("%d\n",x);
printf("%d",y);
return 0;
}