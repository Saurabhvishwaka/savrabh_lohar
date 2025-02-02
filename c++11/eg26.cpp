#include<iostream>
#include<stdlib.h>
using namespace std;
class aaa
{
public:
aaa()
{
cout<<"Default Constructor"<<endl;
}
};
int main()
{
aaa a;
aaa *p;
p=new aaa;
aaa *k;
k=(aaa *)malloc(sizeof(aaa));
return 0;
}