// Function Pointer
#include <stdio.h> // 임포트 개념

void foo()
{
	printf("call function foo");
}

void goo()
{
	printf("call function goo");
}

typedef void(*funcFoo)();

void main() // 함수의 앤트리
{
	funcFoo funcFoo;
	
	funcFoo = foo;
	funcFoo();

	funcFoo = goo;
	funcFoo();
}

// result 
/*
   call function foo
   call function goo

*/