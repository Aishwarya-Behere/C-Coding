#include<stdio.h>
#include<conio.h>
void AreaCircum(int r, float *ar, float *cr);
void main()
{
	int r;
	float a, c;
	printf("Enter radius of circle: ");
	scanf("%d", &r);
	AreaCircum(r, &a, &c);

	printf("Area of the circle is: %f", a);
	printf("\nCircumference of the circle is: %f", c);
	getch();
}
void AreaCircum(int r, float *ar, float *cr)
{
	float area, circum;
	area= 3.14*r*r;
	circum= 2*3.14*r;
	*ar= area;
	*cr= circum;
}


