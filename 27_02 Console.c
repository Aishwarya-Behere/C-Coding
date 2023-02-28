#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	printf("Enter a character: ");
	//ch= getchar(); //takes i/p as a single character. Disaplayed after pressing enter key

	//ch= getch(); //Takes i/p but doesn't display i/p, displays o/p directly. Doesn't require to press enter key

	ch= getche(); //Takes i.p and displays (echoes) it, doesn't have the requirement to press enter key

	printf("---	", ch);
	getch();
}