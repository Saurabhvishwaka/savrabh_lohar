#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
int rollnumber;
char name[21];
char str[32];
char gender;
char header[11];
int i;
int z;
strcpy(name,"Saurabh");
gender='m';
rollnumber=0122217;
sprintf(str,"RollNumber %d Name %s Gender %c \n",rollnumber,name,gender);
printf("(%s) \n",str);
int len;
len=strlen(str);
printf("Length of string to be send to server %d \n",len);
sprintf(header,"%10d \n",len);
sprintf(header,"%-10d \n",len);
printf("(%s)\n",header);
z=0;
for(i=0;header[i]!='\0' && header[i]!=' ';i++)
{
z=z*10+(header[i]-48);
}
printf("%d\n",z);
//any other way
for(i=0;header[i]!='\0' && header[i]!=' ';i++)
header[i]='\0';
z=atoi(header);
printf("%d\n",z);














return 0;
}