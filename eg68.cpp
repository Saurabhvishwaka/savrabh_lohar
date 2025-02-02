#include<iostream>
#include<string.h>
using namespace std;
class SDCard
{
private:
int capacity;
public:
void setCapacity(int e)
{
capacity=e;
}
int getCapacity()
{
return capacity;
}
};
class MobilePhone
{
private:
char brandName[45];
int price;
SDCard sdcard;
public:
void setBrandName(const char *b)
{
strcpy(brandName,b);
}
void getBrandName(char *b)
{
strcpy(b,brandName);
}
void setPrice(int p)
{
price=p;
}
int getPrice()
{
return price;
}
SDCard setSDCard(SDCard sd)
{
sdcard=sd;
}
SDCard getSDCard()
{
return sdcard;
}
};
int main()
{
MobilePhone m;
m.setPrice(12590);
m.setBrandName("Redmi");
SDCard ss;
ss.setCapacity(10);
//ss.setSDCard(ss);
char br[36];
m.getBrandName(br);
int pr;
pr=m.getPrice();
SDCard kk=m.getSDCard();
cout<<"mobile details"<<endl;
cout<<"BrandName: "<<br<<endl;
cout<<"Price: "<<pr<<endl;
cout<<"Capacity of sdcard in mobile: "<<kk.getCapacity()<<endl;
return 0;
}