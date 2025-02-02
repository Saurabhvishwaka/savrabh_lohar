#include<iostream>
using namespace std;
class Rectangle
{
int breadth;
int lenght;
public:
void setLenght(int l)
{
lenght=l;
}
int getLenght()
{
return lenght;
}
void setBreadth(int b)
{
breadth=b;
}
int getBreadth()
{
return breadth;
}
};
class Box:protected Rectangle
{
private:
int height;
public:
void setHeight(int h)
{
height=h;
}
int getHeight()
{
return height;
}
};
int main()
{
Box x;
/*x.lenght=10;
x.breadth=20;
x.height=90;*/
x.setLenght(10);
x.setBreadth(20);
x.setHeight(30);
cout<<"Lenght: "<<x.getLenght()<<endl;
cout<<"Breadth: "<<x.getBreadth()<<endl;
cout<<"Height: "<<x.getHeight()<<endl;    
return 0;
}