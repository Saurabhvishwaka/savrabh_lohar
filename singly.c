#include<stdio.h>
#include<stdlib.h>
struct Node
{
int num;
struct Node *next;
};
struct Node *start;
void addAtEnd(int num)
{
struct Node *t,*j;
t=(struct Node *)malloc(sizeof(struct Node));
t->num=num;
t->next=NULL;
if(start==NULL)
{
start=t;
}
else
{
j=start;
while(j->next!=NULL)
{
j=j->next;
}
j->next=t;
}
}
void insertAtTop(int num)
{
struct Node *t;
t=(struct Node *)malloc(sizeof(struct Node));
t->num=num;
t->next=start;
start=t;
}
void insertAt(int num,int pos)
{
struct Node *t,*p1,*p2;
int x;
if(pos<0)
{
printf("Invalid Position\n");
return;
}
x=0;
p1=start;
while(p1!=NULL && x<pos)
{
p2=p1;
p1=p1->next;
x++;
}
if(p1==NULL && x<pos)
{
printf("invalid \n");
return;
}
t=(struct Node *)malloc(sizeof(struct Node));
t->num=num;
t->next=NULL;
if(start==NULL)
{
start=t;
return;
}
if(p1==start)
{
t->next=start;
start=t;
return;
}
if(p1==NULL)
{
p2->next=t;
return;
}
t->next=p1;
p2->next=t;
}
void removeAt(int pos)
{
struct Node *p1,*p2;
int x;
if(pos<0)
{
printf("Invalid \n");
return;
}
p1=start;
x=0;
while(p1!=NULL && x<pos)
{
p2=p1;
p1=p1->next;
x++;
}
if(p1==NULL)
{
printf("invalid position \n");
return;
}
if(p1==start)
{
start=start->next;
free(p1);
}
else
{
p2->next=p1->next;
free(p1);
}
}
void traverseTopToBottom()
{
struct Node *t;
for(t=start;t!=NULL;t=t->next)
{
printf("%d \n",t->num);
}
}
void traverseBottomToTop()
{
struct Node *t;
for(t=t->next;t!=NULL;t=start)
{
printf("%d \n",t->num);
}
}
int main()
{
int ch,num,pos;
start=NULL;
while(1)
{
printf("Singly Linked list\n");
printf("1. Add node at end\n");
printf("2. Insert at top\n");
printf("3. Insert node at position\n");
printf("4. Remove node from a position\n");
printf("5.Traverse the singly linked list(top to bottom)\n");
printf("6. Traverse the singly linked list(bottom to top)\n");
printf("7. Exit \n");
printf("Enter your choice(1-7): ");
scanf("%d",&ch);
fflush(stdin);
if(ch==1)
{
printf("Enter a number to add at end: ");
scanf("%d",&num);
fflush(stdin);
addAtEnd(num);
printf("%d added at end\n",num);
} 
else if(ch==2)
{
printf("Entea a number to insert at top: ");
scanf("%d",&num);
fflush(stdin);
insertAtTop(num);
printf("%d insert at top\n",num);
}
else if(ch==3)
{
printf("Entea a number to insert: ");
scanf("%d",&num);
fflush(stdin);
printf("Entea position to insert at: ");
scanf("%d",&pos);
fflush(stdin);
/*if(insertAt(num,pos)) 
{
printf("%d inserted at position %d\n",num,pos);
}
else
{
printf("invalid position %d \n",pos);
}*/
}
else if(ch==4)
{
printf("Enter position of the element remove: ");
scanf("%d",&pos);
fflush(stdin);
/*if(removeAt(pos))
{
printf("%d Element remove at position %d\n",pos);
}
else
{
printf("invalid position %d \n",pos);
}*/
}
else if(ch==5)
{
 traverseTopToBottom();
}
else if(ch==6)
{ 
traverseBottomToTop();
}
else if(ch==7)
{
 break;
}
}
return 0; 
}