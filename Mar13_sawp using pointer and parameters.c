#include<stdio.h>
#include<conio.h>
void Swap(int *p1, int *p2);
void main()
{
	int x, y;
	printf("Enter any 2 intergers: ");
	scanf("%d%d", &x, &y);

	printf("\nBefore swap x= %d and y= %d", x, y);
	Swap(&x, &y);

	printf("\nAfter swap x= %d and y= %d", x, y);
	getch();
}
void Swap(int *p1, int *p2)
{
	int temp;
	temp= *p1;
	*p1= *p2;
	*p2= temp;
}