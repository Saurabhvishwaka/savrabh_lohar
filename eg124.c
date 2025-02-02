#include<stdio.h>
int  main()
{
int e,f;
char a[21];
printf("Enter a string: ");
scanf("%s",a);
f=0;
while(a[f]!='\0')
{
f++;
}
f--;
e=0;
while(e<f && a[e]== a[f])
{
e++;
f--;
}
if(e<f)
{
printf("is not pallindrom\n");
}
else
{
printf("%s is a pallindrom\n",a);
}
return 0;
}