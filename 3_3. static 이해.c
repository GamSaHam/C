//static 이해

#include <stdio.h>


void foo()
{
	static int val = 1;

	printf("val value is %d\n", val);

	val++;
}

void main()
{
	foo();
	foo();

}
