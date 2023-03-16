#include<stdio.h>
#include<conio.h>
int sum(int n);
int sum(int n)
{
	int s= 0;

	if(n==0)
		return 1;
	else
		s= n+sum(n-1);


	return s;
}
void main()
{
	int n=11, ans;
	ans= sum(n);
	printf("Sum is %d", ans);
	getch();
}
		
