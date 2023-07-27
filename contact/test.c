#include "contact.h"

void menu()
{
    printf("******************************\n");
    printf("******************************\n");
    printf("******************************\n");
    printf("******************************\n");
    printf("******************************\n");
}

int main()
{
    SL s;
    SeqListInit(&s);
    int option = 0;
    do
    {
        menu();
        scanf("%d", &option);
        printf("请选择:>");
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
        case 5:
            break;
        case 6:
            break;
        default:
            printf("输入错误\n");
            break;
        }
    } while (option);

    return 0;
}