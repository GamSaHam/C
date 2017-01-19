// 파일 분할과 헤더 디자인

//main.c

#include <stdio.h>
#include "student.h"

void main()
{
	STUDENT student;
	student.age = 10;

	printStudentData(student);

}


// student.h

#pragma once

typedef struct STUDENT
{
	int age;

}STUDENT;

void printStudentData(STUDENT _student);

// student.c

#include <stdio.h>
#include "student.h"

void printStudentData(STUDENT _student)
{
	printf("%d\n", _student.age);
}


