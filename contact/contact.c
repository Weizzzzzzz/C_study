#include "contact.h"

void SeqListInit(SL *ps)
{
    assert(ps);
    ps->data = NULL;
    ps->size = 0;
    ps->capacity = 0;
}

void SeqListCheckCapcity(SL *ps)
{
    assert(ps);
    // 满了就扩容
    if (ps->size == ps->capacity)
    {
        int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
        SeqListDataType *tmp = (SeqListDataType *)realloc(ps->data, (size_t)newcapacity * sizeof(SeqListDataType));
        if (tmp == NULL)
        {
            perror("SeqListCheckCapcity");
            exit(-1);
        }
        else
        {
            ps->data = tmp;
            ps->capacity = newcapacity;
        }
    }
}

void SeqListPrint(SL *ps)
{
    assert(ps);
    printf("%-20s\t%-5s\t%-5s\t%-12s\t%-30s\n", "名字", "年龄", "性别", "电话", "地址");
    int i = 0;
    for (i = 0; i < ps->size; i++)
    {
        printf("%-20s\t%-5d\t%-5s\t%-12s\t%-30s\n", ps->data[i].name, ps->data[i].age, ps->data[i].sex, ps->data[i].tele, ps->data[i].addr);
    }
}

void SeqListPushBack(SL *ps)
{
    assert(ps);
    SeqListCheckCapcity(ps);
    printf("请输入名字:>\n");
    scanf("%s", ps->data[ps->size].name);
    printf("请输入年龄:>\n");
    scanf("%d", &(ps->data[ps->size].age));
    printf("请输入性别:>\n");
    scanf("%s", ps->data[ps->size].sex);
    printf("请输入电话:>\n");
    printf("%s", ps->data[ps->size].tele);
    printf("请输入地址:>\n");
    printf("%s", ps->data[ps->size].addr);
    ps->size++;
}

void SeqListPushFront(SL *ps)
{
    assert(ps);
    SeqListCheckCapcity(ps);
    int end = ps->size - 1;
    while (end >= 0)
    {
        ps->data[end + 1] = ps->data[end];
        end--;
    }
    printf("请输入名字:>\n");
    scanf("%s", ps->data[ps->size].name);
    printf("请输入年龄:>\n");
    scanf("%d", &(ps->data[ps->size].age));
    printf("请输入性别:>\n");
    scanf("%s", ps->data[ps->size].sex);
    printf("请输入电话:>\n");
    printf("%s", ps->data[ps->size].tele);
    printf("请输入地址:>\n");
    printf("%s", ps->data[ps->size].addr);
    ps->size++;
}
