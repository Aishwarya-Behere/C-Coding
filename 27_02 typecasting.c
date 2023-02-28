#include<stdio.h>
#include<conio.h>
void main()
{
	int a=5, b=2;
	float r;
	r=a/b;
	printf("Implicit typecast result: %f", r);

	r=(float)a/b;
	printf("\nExplicit typrcast result: %f", r);
	getch();
}