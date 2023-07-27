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

// 增强程序可维护性
typedef PeoInfo SeqListDataType;

typedef struct SeqList
{
    SeqListDataType *data;
    int size;     // 数据个数
    int capacity; // 容量
} SL;

// 初始化通讯录
void SeqListInit(SL *ps);
//扩容
void SeqListCheckCapcity(SL *ps);
//打印通讯录
void SeqListPrint(SL *ps);
// 尾部插入数据
void SeqListPushBack(SL *ps);
// 头部插入数据
void SeqListPushFront(SL *ps);
