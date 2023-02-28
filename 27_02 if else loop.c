#include<stdio.h>
#include<conio.h>
void main()
{
	int a, b;
	printf("Enter 2 nos: ");
	scanf("%d%d", &a, &b);
	if(a>b)
		printf("a is greater than b");
	else
		printf("b is greater than a");
	getch();
}