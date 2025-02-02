#include<iostream>
#include<string.h>
using namespace std;
class Book
{
int code;
char title[36];
public:
void setTitle(const char *t)
{
if(strlen(t)>35) title[0]='\0';
else strcpy(title,t);
}
char *getTitle()
{
return title;
} 
void setCode(int c)
{
code=c;
}
int getCode()
{
return code;
}
};
int main()
{
Book b;
cin>>b.setCode(
);
cout<<"BookCode : "<<b.getCode()<<endl;
b.setTitle("Akash");
cout<<"BookName : "<<b.getTitle()<<endl;
return 0;
}