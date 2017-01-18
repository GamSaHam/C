// 파일 입출력
#include <stdio.h>

int main()
{
	// 쓰기
	FILE *p_file;

	fopen_s(&p_file,"a.txt", "w"); // w 쓰기 모드로 오픈
	fprintf(p_file, "Hello World");

	fclose(p_file); // 메모리 해제
	

	//읽기
	FILE *p_file_read = NULL;

	fopen_s(&p_file_read,"a.txt", "r"); // r 읽기 모드로 오픈 

	if (p_file_read != NULL)
	{
		char strTemp[255];
		char *pStr;

		while (!feof(p_file_read))
		{
			pStr = fgets(strTemp, sizeof(strTemp), p_file_read);
			printf("%s", strTemp);
			printf("%s", pStr);
		}

		fclose(p_file_read); // 메모리상 해제
	}



}

