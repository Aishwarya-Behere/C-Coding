#include<stdio.h>
#include<conio.h>
float AoCir(int r);
void main()
{
	int r;
	float ans;
	printf("Enter Radius: ");
	scanf("%d", &r);
	ans= AoCir(r);		//actual parameter
	printf("Area of the circle is %f", ans);
	getch();
}
float AoCir(int r)
{
	return(3.14*r*r);
}