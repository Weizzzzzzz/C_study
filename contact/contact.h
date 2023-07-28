#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TELE 12
#define MAX_ADDR 30

typedef struct PeoInfo
{
    char name[MAX_NAME];
    int age;
    char sex[MAX_SEX];
    char tele[MAX_TELE];
    char addr[MAX_ADDR];
} PeoInfo;

// ��ǿ�����ά��
typedef PeoInfo SeqListDataType;

typedef struct SeqList
{
    SeqListDataType *data;
    int size;     // ���ݸ���
    int capacity; // ����
} SL;

//�����ļ�����Ϣ�����ݿ�
void SeqListLoadContact(SL *ps);

// ��ʼ��ͨѶ¼
void SeqListInit(SL *ps);
// ����
void SeqListCheckCapcity(SL *ps);
// ��ӡͨѶ¼
void SeqListPrint(SL *ps);
// β���������
void SeqListPushBack(SL *ps);
// ͷ���������
void SeqListPushFront(SL *ps);
//��ָ��λ���������
void SeqListInsert(SL *ps, int pos);

// β��ɾ������
void SeqListPopBack(SL *ps);
//ͷ��ɾ������
void SeqListPopFront(SL *ps);
//��ָ��λ��ɾ������
void SeqListErase(SL *ps, int pos);

//��������
void SeqListSearchContact(SL *ps);

//�޸�����
void SeqListModifyContact(SL *ps);

// ����ͨѶ¼����Ϣ���ļ�
void SeqListSaveContact(const SL *ps);

// ����ͨѶ¼
void SeqListDestroyContact(SL*ps);