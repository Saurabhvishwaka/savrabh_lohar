#include<iostream>
#include<string.h>
using namespace std;
class Book
{
char title[50];
public:
void setTitle(const char *t)
{
if(strlen(t)>=49) title[0]='\0';
else strcpy(title,t);
}
void getTitle(char *a)
{
strcpy(a,title);
}
};
int main()
{
Book b,m;
b.setTitle("python");
m.setTitle("Cool");
char ttt[50],mmn[50];
b.getTitle(ttt);
m.getTitle(mmn);
cout<<"Title: "<<ttt<<endl;
cout<<"Title: "<<mmn<<endl;
return 0;
}