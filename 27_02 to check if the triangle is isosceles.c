#include<stdio.h>
#include<conio.h>
void main()
{
	int a, b, c;
	printf("Enter 3 anles of a triangle: ");
	scanf("%d%d%d", &a, &b, &c);
	if(a==b || b==c || c==a)
		printf("Isosceles triangle is formed");
	else
		printf("Not formed");
	getch();
}