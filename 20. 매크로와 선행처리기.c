// 메크로와 조건부 컴파일
#include <stdio.h>

//상수형으로 쓰이는 메크로
#define MAX_USER_COUNT 34 // 장점: 메모리 할당하지 않는다. 단점: 컴파일 에러를 잡지 못한다 , 파읽 용량이 커진다.

//전처리기를 위한 메크로
#define _SHOW_THE_LOG

//전처리기
#ifdef _SHOW_THE_LOG

void Log()
{
	printf("log1\n");
}

#else

void Log()
{
	printf("log2\n");
}
#endif

void main()
{
	printf("%d\n",MAX_USER_COUNT);
	Log();
}

//실행 결과
/*
34
log1

*/