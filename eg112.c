#include<stdio.h>
int main()
{
int ch,queqe[10],rear,front,j,num,lb,ub;
lb=0;
ub=9;
j=0;
front=lb;
rear=lb;
while(j==0)
{
printf("add to queqe\n");
printf("Remove from queqe\n");
printf("Exit\n");
printf("Enter your choice: ");
scanf("%d",&ch);
if(ch==1)
{
if(rear==ub+1)
{
printf("no add to queqe is full\n");
}
else
{
printf("Enter the number: ");
scanf("%d",&num);
queqe[rear]=num;
rear++;
}
}
if(ch==2)
{
if(rear==lb)
{
printf("Enter is empty ,hence cannot remove anything\n");
}
else
{
queqe[front]=num;
front++;
printf("Remove from queqe \n",num);
if(front==rear)
{
front=lb;
rear=lb;
}
}
}
if(ch==3)
{
break;
}
}
return 0;
}