#include<iostream>
using namespace std;
class Rectangle
{
private:
int length;
int breadth;
public:
void setLength(int l)
{
length=l;
}
int getLength()
{
return length;
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
class Box: public Rectangle
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
x.setLength(5);
x.setBreadth(2);
x.setHeight(3);
cout<<x.getLength()<<endl;
cout<<x.getBreadth()<<endl;
cout<<x.getHeight()<<endl;
return 0;
}