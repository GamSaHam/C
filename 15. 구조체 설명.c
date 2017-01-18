// struct 구조체 이해

#include <stdio.h> // 임포트 개념

struct STUDENT // 자료 선언
{
	char grade;
	int age;
};

void main() // 함수의 앤트리
{
	struct STUDENT student_data; // 변수 선언
	
	//사용법
	student_data.age = 16; 
	student_data.grade = 'A';
}