#include<stdio.h>
#include<conio.h>
void main()
{
	int s;
	int i=1;
	printf("Enter a number: ");
	scanf("%d", &s);
	while(i<=s)
	{
		printf("\n%d", i);
		i++;
	}
	getch();
}