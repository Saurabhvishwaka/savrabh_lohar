#include<stdio.h>
int  main()
{
int m,y,z;
printf("Address print (%u)\n",&m);
printf("Address print (%u)\n",&y);
printf(" (%u)\n",&z);

int x[5];
printf("%u\n",&x);
printf("%u\n",&x[0]);
printf("%u\n",&x[1]);
printf("%u\n",&x[2]);
printf("%u\n",&x[3]);
printf("%u\n",&x[4]);
return 0;
}