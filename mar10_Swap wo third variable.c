#include<stdio.h>
#include<conio.h>
void main()
{
	int x, y;

	printf("Enter 2 nos: ");
	scanf("%d%d", &x, &y);

	printf("\nBefore swap x=%d and y=%d", x, y);
	 
	x= x+y;
	y= x-y;
	x=x-y;

	printf("\nAfter swap x=%d and y=%d", x, y);

	getch();
}