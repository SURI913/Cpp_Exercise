#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// file1.c
// 일반적인 이름, 학번, 점수 입력, 출력하는 프로그램

int main(void)
{
    char name[20];
    char hak[10];
    int math;
    FILE* fp;           // 추가 -파일포인터 생성
    fp = fopen("data2.txt", "w"); // 파일 열기 - 파일에 쓰기
    if (fp == NULL)           // 추가 - 혹시 모를 오류처리
    {
        printf("File open에 오류 발생");
        exit(1);    //리턴전에 프로그램종료
    }

    printf("이름입력>> ");
    scanf_s("%s", name,10);

    printf("학번입력>> ");
    scanf_s("%s", hak,10);

    printf("점수입력>> ");
    scanf_s("%d", &math);

    printf("=================== \n");
    printf("%s %s %d \n", name, hak, math);

    fprintf(fp, "%s %s %d \n", name, hak, math); //추가-파일출력
    
    printf("\n");

    fclose(fp);   //  추가-  파일닫기

    return 0;
}