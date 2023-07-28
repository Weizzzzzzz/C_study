#include "contact.h"

// 扩容
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
            printf("CheckCapcity Fail\n");
            exit(-1);
        }
        else
        {
            ps->data = tmp;
            ps->capacity = newcapacity;
        }
    }
}

// 加载文件的信息到数据库
void SeqListLoadContact(SL *ps)
{
    FILE *pfRead = fopen("contact.txt", "rb");
    if(pfRead==NULL)
    {
        printf("LoadContact Fail\n");
        exit(-1);
    }
    SeqListDataType tmp = {0};
    while (fread(&tmp, sizeof(PeoInfo), 1, pfRead) == 1)
    {
        SeqListCheckCapcity(ps);

        ps->data[ps->size] = tmp;
        ps->size++;
    }

    fclose(pfRead);
    pfRead = NULL;
}

// 初始化通讯录
void SeqListInit(SL *ps)
{
    assert(ps);

    ps->data = NULL;
    ps->size = 0;
    ps->capacity = 0;
}

// 打印通讯录
void SeqListPrint(SL *ps)
{
    assert(ps);

    printf("\t %-20s\t%-5s\t%-5s\t%-12s\t%-30s\n", "姓名", "年龄", "性别", "电话", "地址");
    int i = 0;
    for (i = 0; i < ps->size; i++)
    {
        printf("%4d:%-20s\t%-5d\t%-5s\t%-12s\t%-30s\n", i + 1, ps->data[i].name, ps->data[i].age, ps->data[i].sex, ps->data[i].tele, ps->data[i].addr);
    }
}

// 尾部添加数据
void SeqListPushBack(SL *ps)
{
    // assert(ps);
    // SeqListCheckCapcity(ps);

    // printf("请输入姓名:>\n");
    // scanf("%s", ps->data[ps->size].name);
    // printf("请输入年龄:>\n");
    // scanf("%d", &(ps->data[ps->size].age));
    // printf("请输入性别:>\n");
    // scanf("%s", ps->data[ps->size].sex);
    // printf("请输入电话:>\n");
    // scanf("%s", ps->data[ps->size].tele);
    // printf("请输入地址:>\n");
    // scanf("%s", ps->data[ps->size].addr);
    // ps->size++;
    SeqListInsert(ps, ps->size);
}

// 头部添加数据
void SeqListPushFront(SL *ps)
{
    // assert(ps);
    // SeqListCheckCapcity(ps);

    // int end = ps->size - 1;
    // while (end >= 0)
    // {
    //     ps->data[end + 1] = ps->data[end];
    //     end--;
    // }
    // printf("请输入姓名:>\n");
    // scanf("%s", ps->data[ps->size].name);
    // printf("请输入年龄:>\n");
    // scanf("%d", &(ps->data[ps->size].age));
    // printf("请输入性别:>\n");
    // scanf("%s", ps->data[ps->size].sex);
    // printf("请输入电话:>\n");
    // scanf("%s", ps->data[ps->size].tele);
    // printf("请输入地址:>\n");
    // scanf("%s", ps->data[ps->size].addr);
    // ps->size++;

    SeqListInsert(ps, 0);
}

// 在指定位置添加数据
void SeqListInsert(SL *ps, int pos)
{
    assert(ps);
    assert(pos <= ps->size);
    SeqListCheckCapcity(ps);

    int end = ps->size - 1;
    while (end >= pos)
    {
        ps->data[end + 1] = ps->data[end];
        end--;
    }
    printf("请输入姓名:>\n");
    scanf("%s", ps->data[pos].name);
    printf("请输入年龄:>\n");
    scanf("%d", &(ps->data[pos].age));
    printf("请输入性别:>\n");
    scanf("%s", ps->data[pos].sex);
    printf("请输入电话:>\n");
    scanf("%s", ps->data[pos].tele);
    printf("请输入地址:>\n");
    scanf("%s", ps->data[pos].addr);
    ps->size++;
}

// 尾部删除数据
void SeqListPopBack(SL *ps)
{
    // assert(ps);
    // assert(ps->size > 0);

    // ps->size--;
    SeqListErase(ps, ps->size);
}

// 头部删除数据
void SeqListPopFront(SL *ps)
{
    // assert(ps);
    // assert(ps->size > 0);

    // int start = 1;
    // while (start < ps->size)
    // {
    //     ps->data[start - 1] = ps->data[start];
    //     start++;
    // }
    // ps->size--;
    SeqListErase(ps, 0);
}

// 在指定位置删除数据
void SeqListErase(SL *ps, int pos)
{
    assert(ps);
    assert(ps->size > 0);

    int start = pos;
    while (start < ps->size)
    {
        ps->data[start] = ps->data[start];
        start++;
    }
    ps->size--;
}

// 查找数据
//按名字查找
static int FindBName(SL *ps, char name[])
{
    int i = 0;
    for (i = 0; i < ps->size;i++)
    {
        if(0==strcmp(ps->data[i].name,name))
        {
            return i;
        }
    }
    return -1;
}

void SeqListSearchContact(SL *ps)
{
    assert(ps);

    char name[MAX_NAME] = {0};
    printf("请输入要查找人的姓名:>\n");
    scanf("%s", name);
    // 查找
    int pos = FindBName(ps, name);
    if(-1==pos)
    {
        printf("要查找的人不存在\n");
        return;
    }
    printf("%-20s\t%-5s\t%-5s\t%-12s\t%-30s\n", "姓名", "年龄", "性别", "电话", "地址");
    printf("%-20s\t%-5d\t%-5s\t%-12s\t%-30s\n", ps->data[pos].name, ps->data[pos].age, ps->data[pos].sex, ps->data[pos].tele, ps->data[pos].addr);
}

// 修改数据
void SeqListModifyContact(SL *ps)
{
    assert(ps);

    char name[MAX_NAME] = {0};
    printf("请输入要查找人的姓名:>\n");
    scanf("%s", name);
    //查找
    int pos = FindBName(ps, name);
    if (-1 == pos)
    {
        printf("要修改的人不存在\n");
        return;
    }
    //修改
    printf("下面开始修改\n");

    printf("请输入姓名:>\n");
    scanf("%s", ps->data[pos].name);
    printf("请输入年龄:>\n");
    scanf("%d", &(ps->data[pos].age));
    printf("请输入性别:>\n");
    scanf("%s", ps->data[pos].sex);
    printf("请输入电话:>\n");
    scanf("%s", ps->data[pos].tele);
    printf("请输入地址:>\n");
    scanf("%s", ps->data[pos].addr);

    printf("修改成功\n");
}

// 保存通讯录的信息到文件
void SeqListSaveContact(const SL *ps)
{
    assert(ps);
    FILE *pfWrite = fopen("contact.txt", "wb");
    if (pfWrite == NULL)
    {
        perror("SaveContact");
        return;
    }
    // 写文件-二进制的形式
    int i = 0;
    for (i = 0; i < ps->size; i++)
    {
        fwrite(ps->data + i, sizeof(PeoInfo), 1, pfWrite);
    }

    fclose(pfWrite);
    pfWrite = NULL;
}

// 销毁通讯录
void SeqListDestroyContact(SL *ps)
{
    assert(ps);
    free(ps->data);
    ps->data = NULL;
}