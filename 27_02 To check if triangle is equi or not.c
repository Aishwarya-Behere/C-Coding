#include<stdio.h>
#include<conio.h>
void main()
{
	int a, b, c;
	printf("Enter 3 angles of a triangle: ");
	scanf("%d%d%d", &a, &b, &c);
	if(a==60 && b==60, c==60)
		printf("Equilateral triangle is formed");
	else
		printf("Equi is not formed");
	getch();
}