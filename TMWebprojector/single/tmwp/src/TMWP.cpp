#include<tmwp>
#include<windows.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
using namespace tmwp;
string Request::get(string name)
{
string val;
int i,e;
for(i=0;i<this->dataCount;i++)
{
for(e=0;data[i][e]!='\0' && data[i][e]!='=';e++)
if(data[i][e]!='=') continue;//back to next cycle of for loop
if(strncmp(data[i],name.c_str(),e)==0) break;
}
if(i==this->dataCount)
{
val="";
}
else
{
val=string(data[i]+(e+1));
}
return val;
}
void::forward(string forwardTO)
{
this->forwardTo=forwardTo;
}
Response::Response(int clientSocketDescriptor)
{
this->clienSocketDescriptor=clientSocketDescriptor;
this->isclosed=false;
this->headerCreated=false;
}
void Response::createHeader()
{
char header[51];
strcpy(header,"HTTP/1.1 200 ok\ncontent-Type:text/html\n\n");
send(clienSocketDescriptor,header,strlen(header),0);
this->headerCreated=true;
}
void Response::write(const char *str)
{
if(str==NULL) return;
int len=strlen(str);
if(len==0) return;
if(!this->headerCreated) createHeader();
send(clientSocketDescriptor,str,len,0);
}
void response::close()
{
if(this->isclosed) return;
closesocket(this->clientSocketDescriptor);
this->isclosed=true;
}
int extensionEquals(const char *left,const char *right)
{
char a,b;
while(*left && *right)
{
a=*left;
b=*right;
if(a>=65 && a<=90) a=a+32;
if(b>=65 && b<=90) b=b+32;
if(a!=b) return 0;
left++;
right++;
}
return *left==*right;
}
char * getMIMEType(char *resource)
{
char *mimeType;
mimeType=NULL;
int len=strlen(resource);
if(len<4) return mimeType;
int lastIndexOfDot=len-1;
while(lastIndexOfDot>0 && resource[lastIndexOfDot]!='.') lastIndexOfDot--;
if(lastIndexOfDot==0) return mimeType;
if(extensionEquals(resource+lastIndexOfDot+1,"html"));

TMWebprojector::TMWebprojector(int portNumber)
{
this->portNumber=portNumber;
this->url=NULL;
this->ptrOnRequest=NULL;
}
TMWebprojector::~TMWebprojector()
{
if(this->url) delete [] this-url;
}
void TMWebprojector::onRequest(const char *url,void(*ptrOnRequest)(Request &,Response &));
{
if(this->url) delete [] this-url;
this->url=NULL;
this->ptrOnRequest=NULL;
if(url==NULL || ptrOnRequest==NULL) return ;
this->url=new char[strlen(url)+1];
strcpy(this->url,url);
this->ptrOnRequest=ptrOnRequest;
}
while(1) //infinite loop to enable the following feature
{
if(request->isclientSideTechnologyResource=='Y')
{
if(request->resource==NULL)
{
f=fopen("index.html","rb");
if(f!=NULL) printf("Sending index.html\n");
if(f==NULL)
{
f=fopen("index.htm","rb");
if(f!=NULL) printf("send index.htm\n");
}
if(f==NULL)
{
strcpy(responseBuffer,"HTTP/1.1 200 ok\ncontent-Type:text/html\ncontent-L);
send(clientSocketDescriptor,responseBuffer,strlen(responseBuffer),0);
printf("sending 404 page\n");
closesocket(clientSocketDescriptor);
break; // introduct because of the forwarding feature
}
else
{
fseek(f,0,2); //move the internal pointer to the end of file
length=ftell(f);
fseek(f,0,0);//move the internal pointer to the start of file
sprintf(responseBuffer,"HTTP/1.1 200 ok\ncontent-Type:text/html\ncontent-L);
send(clientSocketDescriptor,responseBuffer,strlen(responseBuffer),0);
i=0;
while(i<length)
{
rc=length-i;
if(rc>1024) rc=1024;
fread(&responseBuffer,rc,1,f);
send(clientSocketDescriptor,responseBuffer,rc,0);
i+=rc;
}
fclose(f);
closesocket(clientSocketDescriptor);
break; // introduced because of the forwarding feature
}
}
else
{
f=fopen(request->resource,"rb");
if(f!=NULL) printf("Sending %s\n",request->resource);
if(f==NULL)
{
//something needs to be done over here 
printf("Sending 404 page\n");
char tmp[501];
sprintf(tmp,"<DOCTYPE HTML><html lang='en'><head><meta charset='utf-8'>");
sprintf(responseBuffer,"HTTP/1.1 200 ok\ncontent-Type:text/html\ncontent-)
strcat(responseBuffer,tmp);
send(clientSocketDescrpitor,responseBuffer,strlen(responseBuffer),0);
break; //introduced because of the forwarding feature
}
else
{
fseek(f,0,2); //move the internal pointer to the end of file
length=ftell(f);
sprintf(responseBuffer,"HTTP/1.1 200 ok\ncontent-Type:text/html\ncontent-L);
send(clientSocketDescriptor,responseBuffer,strlen(responseBuffer),0);
i=0;
while(i<length)
{
rc=length-i;
if(rc>1024) rc=1024;
fread(&responseBuffer,rc,1,f);
send(clientSocketDescriptor,responseBuffer,rc,0);
i+=rc;
}
fclose(f);
closesocket(clientSocketDescriptor);
break; // introduced because of the forwarding feature
}
}
}
else
{
// more changes required in context to server side resource
if(this->url==NULL || this->ptrOnRequest==NULL)
{
printf("Sending 404 page\n");
char tmp[501];
sprintf(tmp,"<DOCTYPE HTML><html lang='en'><head><meta charset='utf-8'>");
sprintf(responseBuffer,"HTTP/1.1 200 ok\ncontent-Type:text/html\ncontent-)
strcat(responseBuffer,tmp);
send(clientSocketDescrpitor,responseBuffer,strlen(responseBuffer),0);
break; //introduced because of the forwarding feature
}
char response[500];
char request[500];
WORD ver;
WSADATA wsadata;
int serverSocketDescriptor;
int clientSocketDescriptor;
struct sockaddr_in serverSocketInformation;
struct socketaddr_in clientSocketInformation;
int successCode;
int len;
ver=MAKEWORD(1,1);
WSAStartup(ver,&wsaData); //socket library initialized
serverSocketDescriptor=socket(AF_INET,SOCK_STREAM,0)
if(serverSocketDescriptor<0)
{
printf("Unable to create socket\n");
return 0;
}
serverSocketInformation.sin_family=AF_INET;
serverSocketInformation.sin_port=htons(8080);
serverSocketInformation.sin_addr=htonl(INADDR_ANY);
successCode=bind(serverSocketDescriptor,(struct sockaddr *)&serverSocketInformation,sizeof(serverSocketInformation));
if(successCode<0)
{
printf("Unable to bind socket to port 8080\n");
WSACleanup();
return 0;
}
listen(serverSocketDescriptor,10);
printf("TMServer is ready to accept request on port 5050\n");
len=sizeof(clientSocketInformation);
clientSocketDescriptor=accept(serverSocketDescriptor,(struct sockaddr *)&clientSocketInformation,&len);
if(clientSocketDescriptor<0)
{
printf("Unable to accept client connection");
closesocket(serverSocketDescriptor);
WSACleaup();
return 0;
}
successCode=recv(clientSocketDescriptor,request,sizeof(request),0);
if(successCode>0)
{
printf("Request arrived\n");
printf("%s\n",request);
}












































































































































