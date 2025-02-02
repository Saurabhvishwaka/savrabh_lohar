#include<stdio.h>
int main()
{
int py,ch,math,hindi,en;
int total,pr;
printf("Enter marks of Physics(0 + 100): ");
scanf("%d",&py);
if(py<0 || py>100)
{
printf("invalid marks");
return 0;
}
printf("Enter marks of chemistry(0 + 100): ");
scanf("%d",&ch);
if(ch<0 || ch>100)
{
printf("invalid marks");
return 0;
}
printf("Enter marks of Math(0 + 100): ");
scanf("%d",&math);
if(math<0 || math>100)
{
printf("invalid marks");
return 0;
}
printf("Enter marks of Hindi(0 + 100): ");
scanf("%d",&hindi);
if(hindi<0 || hindi>100)
{
printf("invalid marks");
return 0;
}
printf("Enter marks of English(0 + 100): ");
scanf("%d",&en);
if(en<0 || en>100)
{
printf("invalid marks");
return 0;
}
total=py+ch+math+en+hindi;
printf("Total is marks %d \n",total);
if(py>33 && ch>33 && math>33 && en>33 && hindi>33)
{
printf("Results Pass\n");
pr=total/5;
printf("total is percentage %d",pr);
}
else
{
if(py<33 && ch>33 && math>33 && en>33 && hindi>33)
{
printf("Result Supplymentary : Physics \n");
}
else
{
if(py<33 && ch<33 && math>33 && en>33 && hindi>33)
{
printf("Result Supplymentary : chemistry \n");
}
else
{
if(py<33 && ch>33 && math<33 && en>33 && hindi>33)
{
printf("Result Supplymentary : Math \n");
}
else
{
if(py<33 && ch>33 && math>33 && en>33 && hindi<33)
{
printf("Result Supplymentary : Hindi \n");
}
else
{
if(py<33 && ch>33 && math>33 && en<33 && hindi>33)
{
printf("Result Supplementary : Eglish \nn");
}
else
{
printf("Result Fails");
}
}
}
}
}
}
return 0;
} 