#include <stdio.h>
#include <string.h>
#include <windows.h>

int main()
{
    char input[] = {0};
    system("shutdown -s -t 60");

    while(1)
    {
        printf("你的电脑将在一分钟后关机，输入：“我是猪”，取消关机\n");
        scanf("%s", &input);
        if(strcmp(input, "我是猪") == 0)
        {
            system("shutdown -a");
            break;
        }
        if(strcmp(input,"woshizhu") == 0)
        {
            system("shutdown -a");
            break;
        }
    }

    return 0;
}