// void 포인터

#include <stdio.h> // 임포트 개념

void main() // 함수의 앤트리
{
	void* pVoid; // void 포인터 자료형과 상관없이 주소를 넣을 수 있다.

	int val = 100;

	pVoid = &val;
	printf("value is %d\n",(*(int*)pVoid));

	float f_val = 100.0;
	pVoid = &f_val;

	printf("value is %f\n", (*(float*)pVoid));
}