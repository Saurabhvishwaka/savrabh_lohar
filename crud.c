//Application CRUD Operation
#include<stdio.h>
#include<string.h>
void addStudent();
void deleteStudent();
void editStudent();
void searchStudent();
void displayStudent();
int numberOfStudentsAdded;
int rollNumber[100];
char name[100][21];
int main()
{
int ch;
numberOfStudentsAdded=0;
while(1)
{
printf("1. Add student \n");
printf("2. Edit student \n");
printf("3. Delete student \n");
printf("4. Search student \n");
printf("5. Display student \n");
printf("6. Exit \n");
printf("Enter your choice (1-6):");
scanf("%d",&ch);
fflush(stdin);
if(ch<1 || ch>6)
{
printf("Invalid choice,select(1-6)\n");
continue;
}
if(ch==1 && numberOfStudentsAdded==100)
{
printf("you can not add more than 100 students\n");
continue;
}
if(ch>=2 && ch<=5 && numberOfStudentsAdded==0)
{
printf("you have not added a single student \n");
continue; 
}
if(ch==1) addStudent();
if(ch==2) editStudent();
if(ch==3) deleteStudent();
if(ch==4) searchStudent();
if(ch==5) displayStudent();
if(ch==6) break;
} 
return 0;
}
void addStudent()
{
int vRollnumber;
char vName[22];
char m,e;
printf("Student(Add Module) \n");
printf("Enter roll number: ");
scanf("%d",&vRollnumber);
fflush(stdin);
if(vRollnumber<=0)
{
printf("Invalid roll number \n");
return;
}
e=0;
while(e<numberOfStudentsAdded)
{
if(vRollnumber==rollNumber[e])
{
printf("that roll number alloted to %s\n",name[e]);
return ;
}
e++;
}
printf("Enter Name: ");
fgets(vName,22,stdin);
fflush(stdin);
vName[strlen(vName)-1]='\0';
printf("Save(Y/N): ");
m=getchar();
fflush(stdin);
if(m!='y' && m!='Y')
{
printf("Student not add \n");
return;
}
rollNumber[numberOfStudentsAdded]=vRollnumber;
strcpy(name[numberOfStudentsAdded],vName);
numberOfStudentsAdded++;
printf("Student added ,press enter to continue... \n");
getchar();
fflush(stdin);
}
void editStudent()
{
int e,vRollNumber,found;
char m;
char vname[22];
printf("Student (Search module)\n");
printf("Enter rollnubmer of the Student to search: ");
scanf("%d",&vRollNumber);
fflush(stdin);
if(vRollNumber<=0)
{
printf("Invalid rollnumber\n");
return;
}
e=0;
found=0;
while(e<numberOfStudentsAdded)
{
if(vRollNumber==rollNumber[e])
{
found=1;
break;
}
e++;
}
if(found==0)
{
printf("Invalid roll Nuber \n");
return;
}
printf("Name: %s\n",name[e]);
printf("Edit(Y/N):");
m=getchar();
fflush(stdin);
if(m!='y' && m!='Y')
{
printf("Student not edit");
return;
}
printf("Enter new Name: ");
fgets(vname,22,stdin);
vname[strlen(vname)-1]='\0';
fflush(stdin);
printf("Save(Y/N): ");
m=getchar();
fflush(stdin);
if(m!='y' && m!='Y')
{
printf("Student not update");
return;
}
strcpy(name[e],vname);
printf("student update,press enter continue..\n");
getchar();
fflush(stdin);
}
void deleteStudent()
{
int e,vRollNumber,found,ep;
char m;
printf("Student (Search module)\n");
printf("Enter rollnubmer of the Student to delete: ");
scanf("%d",&vRollNumber);
fflush(stdin);
if(vRollNumber<=0)
{
printf("Invalid rollnumber\n");
return;
}
e=0;
found=0;
while(e<numberOfStudentsAdded)
{
if(vRollNumber==rollNumber[e])
{
found=1;
break;
}
e++;
}
if(found==0)
{
printf("Invalid roll Nuber \n");
return;
}
printf("Name: %s\n",name[e]);
printf("Delete(Y/N):");
m=getchar();
fflush(stdin);
if(m!='y' && m!='Y')
{
printf("Student not delete");
return;
}
ep=numberOfStudentsAdded-2;
while(e<=ep)
{
rollNumber[e]=rollNumber[e+1];
strcpy(name[e],name[e+1]);
e++;
}
numberOfStudentsAdded--;
printf("Student deleted, press enter to continue.. \n");
getchar();
fflush(stdin);
}
void searchStudent()
{
int e,vRollNumber,found;
printf("Student (Search module)\n");
printf("Enter rollnubmer of the Student to search: ");
scanf("%d",&vRollNumber);
fflush(stdin);
if(vRollNumber<=0)
{
printf("Invalid rollnumber\n");
return;
}
e=0;
found=0;
while(e<numberOfStudentsAdded)
{
if(vRollNumber==rollNumber[e])
{
found=1;
break;
}
e++;
}
if(found==0)
{
printf("Invalid roll Nuber \n");
return;
}
printf("Name: %s\n",name[e]);
printf("press enter to continue.. \n");
getchar();
fflush(stdin);
}
void displayStudent()
{
int f;
printf("Student (List module)\n");
f=0;
while(f<numberOfStudentsAdded)
{
printf("Roll number: %d Name: %s\n",rollNumber[f],name[f]);
f++;
}
printf("press enter to continue.. \n");
getchar();
fflush(stdin);
}