#include "contact.h"

// �˵�
void menu1()
{
    printf("****************************************\n");
    printf("**********  1.����    2.ɾ��  **********\n");
    printf("**********  3.����    4.�޸�  **********\n");
    printf("**********  5.��ӡ    0.�˳�  **********\n");
    printf("****************************************\n");
}

// �����Ӳ˵�
void menu2()
{
    printf("********************************************\n");
    printf("******  1.ͷ������       2.β������  *******\n");
    printf("******  3.ָ��λ�ò���   0.����      *******\n");
    printf("********************************************\n");
}

// ɾ���Ӳ˵�
void menu3()
{
    printf("********************************************\n");
    printf("******  1.ͷ��ɾ��       2.β��ɾ��  *******\n");
    printf("******  3.ָ��λ��ɾ��   0.����      *******\n");
    printf("********************************************\n");
}

// �����Ӳ˵�
void menu4()
{
    printf("****************************************\n");
    printf("**********  1.����    2.ɾ��  **********\n");
    printf("**********  3.����    4.�޸�  **********\n");
    printf("**********  5.��ӡ    0.�˳�  **********\n");
    printf("****************************************\n");
}

int main()
{
    SL s;
    SeqListInit(&s);
    int option = 0;
    do
    {
    start:
        menu1();
        printf("��ѡ��:>\n");
        scanf("%d", &option);
        switch (option)
        {
            // ����
        case 1:
            do
            {
                menu2();
                printf("��ѡ��:>\n");
                scanf("%d", &option);
                switch (option)
                {
                case 1:
                    SeqListPushFront(&s);
                    break;
                case 2:
                    SeqListPushBack(&s);
                    break;
                case 3:
                    printf("������Ҫ�����λ��:>\n");
                    scanf("%d", &option);
                    SeqListInsert(&s, option);
                    break;
                case 0:
                    goto start;
                    break;
                default:
                    printf("�������\n");
                    break;
                }
            } while (option);
            break;
        case 2:
            do
            {
                menu3();
                printf("��ѡ��:>\n");
                scanf("%d", &option);
                switch (option)
                {
                case 1:
                    SeqListPopFront(&s);
                    break;
                case 2:
                    SeqListPopBack(&s);
                    break;
                case 3:
                    printf("������Ҫɾ����λ��:>\n");
                    scanf("%d", &option);
                    SeqListInsert(&s, option);
                    break;
                case 0:
                    goto start;
                    break;
                default:
                    printf("�������\n");
                    break;
                }
            } while (option);
            break;
        case 3:
            do
            {
                menu4();
                scanf("%d", &option);
                printf("��ѡ��:>\n");
                switch (option)
                {
                case 1:
                    break;
                case 2:
                    break;
                case 3:
                    break;
                case 4:
                    break;
                default:
                    printf("�������\n");
                    break;
                }
            } while (option);
            break;
        case 4:
            SeqListModifyContact(&s);
            break;
        case 5:
            SeqListPrint(&s);
            break;
        case 0:
            SeqListSaveContact(&s);
            SeqListDestroyContact(&s);
            printf("�˳�ͨѶ¼\n");
            break;
        default:
            printf("�������\n");
            break;
        }
    } while (option);

    return 0;
}