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

// 增强程序可维护
typedef PeoInfo SeqListDataType;

typedef struct SeqList
{
    SeqListDataType *data;
    int size;     // 数据个数
    int capacity; // 容量
} SL;

//加载文件的信息到数据库
void SeqListLoadContact(SL *ps);

// 初始化通讯录
void SeqListInit(SL *ps);
// 扩容
void SeqListCheckCapcity(SL *ps);
// 打印通讯录
void SeqListPrint(SL *ps);
// 尾部添加数据
void SeqListPushBack(SL *ps);
// 头部添加数据
void SeqListPushFront(SL *ps);
//在指定位置添加数据
void SeqListInsert(SL *ps, int pos);

// 尾部删除数据
void SeqListPopBack(SL *ps);
//头部删除数据
void SeqListPopFront(SL *ps);
//在指定位置删除数据
void SeqListErase(SL *ps, int pos);

//查找数据
void SeqListSearchContact(SL *ps);

//修改数据
void SeqListModifyContact(SL *ps);

// 保存通讯录的信息到文件
void SeqListSaveContact(const SL *ps);

// 销毁通讯录
void SeqListDestroyContact(SL*ps);