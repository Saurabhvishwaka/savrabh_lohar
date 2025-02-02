#include<stdio.h>
#include<string.h>
int main()
{

char name[21];
printf("Enter a Name: ");
fgets(name,21,stdin);
name[strlen(name)-1]='\0';
fflush(stdin);
printf(" Name:%s\n",name);
return 0;
}