#include<tmwp>
#include<iostream>
#include<ctime>
using namespace std;
using namespace tmwp;
void dispatchTime(Request &request,Response &response)
{
time_t t=time(0);
char *now=ctime(&t);
response.write("<!DOCTYPE html>");
response.write("<html lang='en'>");
response.write("<head>");
response.write("<meta charset='utf-8'>");
response.write("<title>The clock</title>");
response.write("</head>");
response.write("<body>");
response.write("<h1>");
response.write("<now>");
response.write("<h1>");
response.write("<a href='now'>Refresh</a><br>");
response.write("<a href='now'>Now</a><br>");
response.write("</body>");
response.write("</html>");
response.close();
}
void getcityview(Request &request,Response &response)
{
string citycodestring=request.get("city");
int citycode=atoi(citycodestring.c_str());
if(citycode==1)request.forward("ujjain.html")
else if(citycode==1)request.forward("katni.html")
else if(citycode==1)request.forward("pune.html")
else request.forward("index.html");
}
int main()
{
TMWebprojector server(8080);
server.onRequest("/now",dispatchTime);
server.onRequest("/getcity",getcityview);
server.start();
return 0;
}
