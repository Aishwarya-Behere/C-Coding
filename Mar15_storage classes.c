#include<stdio.h>
#include<conio.h>

int z= 30;
void f1();
void f1()
{
	int x= 10;
	printf("\nx= %d", x);		//b;ocl scope- local variable

	//printf("\ny= %d", y);		error

	printf("\nz= %d", z);
}
void main()
{
	int y=20;

	//printf("\nx= %d", x);		errror
	printf("\ny= %d", y);		//b;ocl scope- local variable
	printf("\nz= %d", z);		// global variable
	getch();
}