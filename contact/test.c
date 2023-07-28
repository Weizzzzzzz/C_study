#include "contact.h"

// 菜单
void menu1()
{
    printf("****************************************\n");
    printf("**********  1.插入    2.删除  **********\n");
    printf("**********  3.查找    4.修改  **********\n");
    printf("**********  5.打印    0.退出  **********\n");
    printf("****************************************\n");
}

// 插入子菜单
void menu2()
{
    printf("********************************************\n");
    printf("******  1.头部插入       2.尾部插入  *******\n");
    printf("******  3.指定位置插入   0.返回      *******\n");
    printf("********************************************\n");
}

// 删除子菜单
void menu3()
{
    printf("********************************************\n");
    printf("******  1.头部删除       2.尾部删除  *******\n");
    printf("******  3.指定位置删除   0.返回      *******\n");
    printf("********************************************\n");
}

// 查找子菜单
void menu4()
{
    printf("****************************************\n");
    printf("**********  1.插入    2.删除  **********\n");
    printf("**********  3.查找    4.修改  **********\n");
    printf("**********  5.打印    0.退出  **********\n");
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
        printf("请选择:>\n");
        scanf("%d", &option);
        switch (option)
        {
            // 插入
        case 1:
            do
            {
                menu2();
                printf("请选择:>\n");
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
                    printf("请输入要插入的位置:>\n");
                    scanf("%d", &option);
                    SeqListInsert(&s, option);
                    break;
                case 0:
                    goto start;
                    break;
                default:
                    printf("输入错误\n");
                    break;
                }
            } while (option);
            break;
        case 2:
            do
            {
                menu3();
                printf("请选择:>\n");
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
                    printf("请输入要删除的位置:>\n");
                    scanf("%d", &option);
                    SeqListInsert(&s, option);
                    break;
                case 0:
                    goto start;
                    break;
                default:
                    printf("输入错误\n");
                    break;
                }
            } while (option);
            break;
        case 3:
            do
            {
                menu4();
                scanf("%d", &option);
                printf("请选择:>\n");
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
                    printf("输入错误\n");
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
            printf("退出通讯录\n");
            break;
        default:
            printf("输入错误\n");
            break;
        }
    } while (option);

    return 0;
}