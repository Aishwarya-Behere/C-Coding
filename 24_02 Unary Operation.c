#include<stdio.h>
#include<conio.h>
void main()
{
	int a=10, r;
	int m= 1;
	r=-10;
	printf("Negation of a is: %d \n", r);

	//first assign and the increment for post increment
	printf("\nValue of a normally is: %d", a);
	r=a++;
	printf("\nValue of r in post increment is: %d", r);
	printf("\nValue of a in post increment is: %d", a);

	//fist increment and then assign for pre increment
	printf("\n\nValue of a normally is: %d", a);
	r=++a;
	printf("\nValue of r in pre increment is: %d", r);
	printf("\nValue of a in pre increment is: %d", a);

	//first assign and then decrement for post decrement
	printf("\n\nValue of a normally is: %d", r);
	r=a--;
	printf("\nValue of r in post decrement is: %d", r);
	printf("\nValue of a in post decrement is: %d", a);

	//first decrement and then assign for pre decrement
	printf("\n\nValue pf a normally is: %f", a);
	r=--a;
	printf("\nValue of r in pre decrement is: %d", r);
	printf("\nValue of a in pre decremtn is: %d", a);

	printf("\n\nSize of a in bytes is: %d", sizeof(a));

	printf("\n\nNormal value of True is %d", m);
	printf("\nNot of True is: %d", !m);

	getch();
}

	