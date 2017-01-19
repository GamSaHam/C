// 포인터의 const 의 의미


#include <stdio.h> // 임포트 개념

void main() // 함수의 앤트리
{
    int val = 10;

    const int *p1 = &val; 
    int * const  p2 = &val;

    int val2 = 20;

     *p1 = 10; // 컴파일 에러
     p2 = &val2; // 컴파일 에러



}