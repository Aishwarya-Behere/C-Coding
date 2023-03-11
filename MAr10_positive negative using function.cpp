#include<stdio.h>
#include<conio.h>
int check(int a);
void main()
{
	int x, res;
	printf("Enter a value: ");
	scanf("%d", &x);
	res= check(x);		//Function call
	if(res==1)
		printf("No is positive");
	else
		printf("no is negative");
	getch();
}
int check(int a)
{
	if(a>0)
		return 1;
	else
		return 0;
}