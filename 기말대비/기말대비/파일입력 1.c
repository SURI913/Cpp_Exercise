// file5.cpp
// �Ϲ����� �̸�, �й�, ���� �Է��ϴ� c ���α׷�
// ���Ͽ��� �ҷ��� �� ȭ�鿡 ����ϴ� �ڵ�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char name[20];
    char hak[10];
    int math;
    FILE* fp;       // �߰� - ���������� ����
    fp = fopen("data2.txt", "r"); // �߰� - ���� ���� - ������
    if (fp == NULL)    // �߰� - Ȥ�� �� ����ó��
    {
        printf("File open�� ���� �߻�");
        exit(1);
    }

    fscanf(fp, "%s %s %d", name, hak, &math);
    // ���Ͽ��� �о��

    printf("======================== \n");
    printf("%s %s %d \n", name, hak, math);   //ȭ�����

    printf("\n");

    fclose(fp);   //  �߰�-  ���ϴݱ�

    return 0;
}