#include<stdio.h>
#include<conio.h>
void main()
{
	int amt;
	printf("Enter amount required: ");
	scanf("%d", &amt);
	if(amt>1000)
		printf("Sufficient balance available");
	else
		printf("Insufficient balance");
	getch();
}