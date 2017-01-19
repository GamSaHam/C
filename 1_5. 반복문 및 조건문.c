// 반복문 및 조건문


#include <stdio.h> // 임포트 개념

void main() // 함수의 앤트리
{
    while(1) // while문 ()조건문이 0이 아니면 이면 {}이하 무한 반복.
    {
        if(1) // if문 ()조건문이 0이 아니면 {}이하 실행 
        {
            break; //상위 반복문을 빠져 나간다.
        }

        if(0) 
        {
            
        }else // else 문 if문의 ()조건문이 0이 아니면 else{}아래 실행
        {
            continue; // 아래 명령어를 실행 하지않고 상위 조건문으로 실행 한다.
        }
    }

    int i;
    for(i=0;i<5;i++) // ( 초기값 ; 조건값 (조건값이 0이 아니면 아래 실행); 증감값 )
    {
      //이하 break,continue 동작이 같음


    }



    int case = 10;

    switch(case) // switch문 조건문에 변수가 들어가고 해당하는것만 실행 if문의 간결화가 목적
    {
        case 10: printf("case is 10");
        break;

        case 20: printf("case is 20");
        break;

        default: printf("result is default");

    }



}
