#include "contact.h"

// ����
void SeqListCheckCapcity(SL *ps)
{
    assert(ps);

    // ���˾�����
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

// �����ļ�����Ϣ�����ݿ�
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

// ��ʼ��ͨѶ¼
void SeqListInit(SL *ps)
{
    assert(ps);

    ps->data = NULL;
    ps->size = 0;
    ps->capacity = 0;
}

// ��ӡͨѶ¼
void SeqListPrint(SL *ps)
{
    assert(ps);

    printf("\t %-20s\t%-5s\t%-5s\t%-12s\t%-30s\n", "����", "����", "�Ա�", "�绰", "��ַ");
    int i = 0;
    for (i = 0; i < ps->size; i++)
    {
        printf("%4d:%-20s\t%-5d\t%-5s\t%-12s\t%-30s\n", i + 1, ps->data[i].name, ps->data[i].age, ps->data[i].sex, ps->data[i].tele, ps->data[i].addr);
    }
}

// β���������
void SeqListPushBack(SL *ps)
{
    // assert(ps);
    // SeqListCheckCapcity(ps);

    // printf("����������:>\n");
    // scanf("%s", ps->data[ps->size].name);
    // printf("����������:>\n");
    // scanf("%d", &(ps->data[ps->size].age));
    // printf("�������Ա�:>\n");
    // scanf("%s", ps->data[ps->size].sex);
    // printf("������绰:>\n");
    // scanf("%s", ps->data[ps->size].tele);
    // printf("�������ַ:>\n");
    // scanf("%s", ps->data[ps->size].addr);
    // ps->size++;
    SeqListInsert(ps, ps->size);
}

// ͷ���������
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
    // printf("����������:>\n");
    // scanf("%s", ps->data[ps->size].name);
    // printf("����������:>\n");
    // scanf("%d", &(ps->data[ps->size].age));
    // printf("�������Ա�:>\n");
    // scanf("%s", ps->data[ps->size].sex);
    // printf("������绰:>\n");
    // scanf("%s", ps->data[ps->size].tele);
    // printf("�������ַ:>\n");
    // scanf("%s", ps->data[ps->size].addr);
    // ps->size++;

    SeqListInsert(ps, 0);
}

// ��ָ��λ���������
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
    printf("����������:>\n");
    scanf("%s", ps->data[pos].name);
    printf("����������:>\n");
    scanf("%d", &(ps->data[pos].age));
    printf("�������Ա�:>\n");
    scanf("%s", ps->data[pos].sex);
    printf("������绰:>\n");
    scanf("%s", ps->data[pos].tele);
    printf("�������ַ:>\n");
    scanf("%s", ps->data[pos].addr);
    ps->size++;
}

// β��ɾ������
void SeqListPopBack(SL *ps)
{
    // assert(ps);
    // assert(ps->size > 0);

    // ps->size--;
    SeqListErase(ps, ps->size);
}

// ͷ��ɾ������
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

// ��ָ��λ��ɾ������
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

// ��������
//�����ֲ���
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
    printf("������Ҫ�����˵�����:>\n");
    scanf("%s", name);
    // ����
    int pos = FindBName(ps, name);
    if(-1==pos)
    {
        printf("Ҫ���ҵ��˲�����\n");
        return;
    }
    printf("%-20s\t%-5s\t%-5s\t%-12s\t%-30s\n", "����", "����", "�Ա�", "�绰", "��ַ");
    printf("%-20s\t%-5d\t%-5s\t%-12s\t%-30s\n", ps->data[pos].name, ps->data[pos].age, ps->data[pos].sex, ps->data[pos].tele, ps->data[pos].addr);
}

// �޸�����
void SeqListModifyContact(SL *ps)
{
    assert(ps);

    char name[MAX_NAME] = {0};
    printf("������Ҫ�����˵�����:>\n");
    scanf("%s", name);
    //����
    int pos = FindBName(ps, name);
    if (-1 == pos)
    {
        printf("Ҫ�޸ĵ��˲�����\n");
        return;
    }
    //�޸�
    printf("���濪ʼ�޸�\n");

    printf("����������:>\n");
    scanf("%s", ps->data[pos].name);
    printf("����������:>\n");
    scanf("%d", &(ps->data[pos].age));
    printf("�������Ա�:>\n");
    scanf("%s", ps->data[pos].sex);
    printf("������绰:>\n");
    scanf("%s", ps->data[pos].tele);
    printf("�������ַ:>\n");
    scanf("%s", ps->data[pos].addr);

    printf("�޸ĳɹ�\n");
}

// ����ͨѶ¼����Ϣ���ļ�
void SeqListSaveContact(const SL *ps)
{
    assert(ps);
    FILE *pfWrite = fopen("contact.txt", "wb");
    if (pfWrite == NULL)
    {
        perror("SaveContact");
        return;
    }
    // д�ļ�-�����Ƶ���ʽ
    int i = 0;
    for (i = 0; i < ps->size; i++)
    {
        fwrite(ps->data + i, sizeof(PeoInfo), 1, pfWrite);
    }

    fclose(pfWrite);
    pfWrite = NULL;
}

// ����ͨѶ¼
void SeqListDestroyContact(SL *ps)
{
    assert(ps);
    free(ps->data);
    ps->data = NULL;
}