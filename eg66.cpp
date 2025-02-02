#include<iostream>
#include<string.h>
using namespace std;
class Book
{
char ptr[36];
public:
void setBookName(const char *t)
{
if(strlen(t)>=35) ptr[0]='\0';
else strcpy(ptr,t);
}
char *getBookName()
{
return ptr;
}
};
/*int main()
{
Book k;
k.setBookName("Golang");
cout<<k.getBookName()<<endl;
return 0;
}*/
int main()
{
char *k;
Book b;
k=b.getBookName();
strcpy(k,"abcdeABCDEFGHJKLMNOPQRSTUVWXYZ");
cout<<"Title: "<<b.getBookName()<<endl;
return 0;
}