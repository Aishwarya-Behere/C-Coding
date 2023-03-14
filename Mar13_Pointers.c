#include<stdio.h>
#include<conio.h>
void main()
{
	int a=10;
	int *p;			//Declaration of pointer value
	p= &a;			//assigning address of a to pointer p

	printf("Value of a is %d", a);
	printf("\nAddress of a is %d", &a);				//'&' denotes address
	printf("\n");
	printf("\nValue of pointer p is %d", p);
	printf("\nAddress of pointer p is %d", &p);
	printf("\nValue of a by using pointer is %d", *p); //* is known as a derefering operator. it gives us the value that is stored at the address of other variable 'a'
	getch();
}