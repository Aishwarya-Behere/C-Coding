#include<stdio.h>
#include<conio.h>
void main()
{
	int x, i= 1, sum= 0;

	printf("Enter a number: ");
	scanf("%d", &x);
	while(i<=x)
	{
		printf("\nInitial i= %d and sum= %d", i, sum);
		sum= sum+i;
		printf("\t\t After i=%d and sum= %d \n", i, sum);
		i++;
	}
	getch();
}