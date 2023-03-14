#include<stdio.h>
#include<conio.h>
void SqCube(int n1, int n2, int *s, int *c);
void main()
{
	int n1, n2, sq, cube;
	printf("Enter any 2 integers: ");
	scanf("%d%d", &n1, &n2);
	SqCube(n1, n2, &sq, &cube);
	printf("\nSquare of n1 is %d", sq);
	printf("\nCube of n2 is %d", cube);
	getch();
}
void SqCube(int n1, int n2, int *s, int *c)
{
	int square, cube;
	square= n1*n1;
	cube= n2*n2*n2;
	*s= square;
	*c= cube;
}
