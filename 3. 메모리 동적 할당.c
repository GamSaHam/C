// 메모리 동적 할당
#include <stdio.h>
#include <stdlib.h> //realloc

void main()
{
	// 동적 할당 종류 malloc,calloc,realloc
	// calloc은 malloc 과 같고 초기화0으로 해준다.
	// realloc 공간의 크기를 바꾼다.
	int* val = (int*)malloc(sizeof(int)); // 힙 메모리에 동적 할당

	*val = 10;

	printf("%d\n", *val);
	
	realloc(val, sizeof(float));

	printf("%f\n", *val);

	free(val);
}

//실행 결과
/*
10
0.000

*/

// 알수 있는점 realloc은 초기화가 된다.