#include<iostream>
#include<string.h>
using namespace std;
class SDCard
{
int capaCity;
public:
void setCapacity(int c)
{
capaCity=c;
}
int getCapacity()
{
return capaCity;
}
};
class MobilePhone
{
private:
char brandName[26];
SDCard sdCard;
int price;
public:
void setBrandName(const char *b)
{
strcpy(brandName,b);
}
char *getBrandName()
{
return brandName;
}
void setPrice(int p)
{
price=p;
}
int getPrice()
{
return price;
}
void setSdcard(SDCard s)
{
sdCard=s;
}
SDCard getSdcard()
{
return sdCard;
}
};
int main()
{
SDCard v;
v.setCapacity(101);
MobilePhone m;
m.setBrandName("Redmi");
m.setPrice(100000);
cout<<"CapaCity : "<<v.getCapacity() ;
cout<<"CapaCity : "<<v.getBrandName() ;
cout<<"CapaCity : "<<v.getPrice() ;
}