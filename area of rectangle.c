#include<stdio.h>
#include<conio.h>
void main()
{
	float l, b, area;
	printf("Enter length of rectangle: ");
	scanf("%f", &l);
	printf("Enter breadth of rectangle: ");
	scanf("%f", &b);

	area= l*b;
	printf("Area of rectangle= %f", area);
	getch();
}