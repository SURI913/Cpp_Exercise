// file5.cpp
// 일반적인 이름, 학번, 점수 입력하는 c 프로그램
// 파일에서 불러온 뒤 화면에 출력하는 코드
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char name[20];
    char hak[10];
    int math;
    FILE* fp;       // 추가 - 파일포인터 생성
    fp = fopen("data2.txt", "r"); // 추가 - 파일 열기 - 쓰기모드
    if (fp == NULL)    // 추가 - 혹시 모를 오류처리
    {
        printf("File open에 오류 발생");
        exit(1);
    }

    fscanf(fp, "%s %s %d", name, hak, &math);
    // 파일에서 읽어옴

    printf("======================== \n");
    printf("%s %s %d \n", name, hak, math);   //화면출력

    printf("\n");

    fclose(fp);   //  추가-  파일닫기

    return 0;
}