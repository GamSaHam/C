// Call-by-value

#include <stdio.h> // 임포트 개념


// Call-by-value
void foo(int a)// 값이 복사  
{


}

// Call-by-value
void goo(int *p) // 주소값을 통해 변환
{



}

void main() // 함수의 앤트리
{
    int val = 10;

    foo(val); //값을 전달
    foo(&val); //주소값 전달


}