#include<stdio.h>
#include<conio.h>
void main()
{
	int x, y, temp;

	
	printf("enter 2 nos: ");
	scanf("%d%d", &x, &y);
	
	printf("\nBefore swapping x=%d and y=%d", x, y);

	temp=x;
	x=y;
	y=temp;

	printf("\nAfter swapping x=%d anf y=%d", x, y);
	getch();
}