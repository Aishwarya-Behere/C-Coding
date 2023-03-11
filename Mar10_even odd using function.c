#include<stdio.h>
#include<conio.h>
int checkEO(int a);
void main()
{
	int x, res;
	printf("Enter a no: ");
	scanf("%d", &x);

	res= checkEO(x);
	if(res==1)
		printf("No is even");
	else
		("No is odd");
	getch();
}
int checkEO(int a)
{
	if(a%2==0)
		return 1;
	else 
		return 0;
}