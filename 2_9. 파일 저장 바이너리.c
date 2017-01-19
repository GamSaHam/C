// 파일 바이너리 입출력
#include <stdio.h>

typedef struct STUDENT_DATA
{
	int age;
	char c_grade;

}STUDENT_DATA;

void printStudentData(STUDENT_DATA _student_data)
{
	printf("age %d\n",_student_data.age);
	printf("grade %c\n",_student_data.c_grade);
}

int main()
{
	// 변수 1
	STUDENT_DATA student_data;
	
	student_data.age = 16;
	student_data.c_grade = 'B';

	// 쓰기
	FILE *p_file;

	fopen_s(&p_file, "a.txt", "wb"); // w 쓰기 모드로 오픈
	fwrite(&student_data,sizeof(student_data),1,p_file);

	fclose(p_file); // 메모리 해제


	// 변수 2
	STUDENT_DATA student_data_jack;


	//읽기
	FILE *p_file_read = NULL;

	fopen_s(&p_file_read, "a.txt", "rb"); // r 읽기 모드로 오픈 

	fread(&student_data_jack, sizeof(student_data_jack), 1, p_file_read);
	

	fclose(p_file_read);

	//출력
	printStudentData(student_data);
	printStudentData(student_data_jack);

}