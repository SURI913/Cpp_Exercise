#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// file1.c
// �Ϲ����� �̸�, �й�, ���� �Է�, ����ϴ� ���α׷�

int main(void)
{
    char name[20];
    char hak[10];
    int math;
    FILE* fp;           // �߰� -���������� ����
    fp = fopen("data2.txt", "w"); // ���� ���� - ���Ͽ� ����
    if (fp == NULL)           // �߰� - Ȥ�� �� ����ó��
    {
        printf("File open�� ���� �߻�");
        exit(1);    //�������� ���α׷�����
    }

    printf("�̸��Է�>> ");
    scanf_s("%s", name,10);

    printf("�й��Է�>> ");
    scanf_s("%s", hak,10);

    printf("�����Է�>> ");
    scanf_s("%d", &math);

    printf("=================== \n");
    printf("%s %s %d \n", name, hak, math);

    fprintf(fp, "%s %s %d \n", name, hak, math); //�߰�-�������
    
    printf("\n");

    fclose(fp);   //  �߰�-  ���ϴݱ�

    return 0;
}