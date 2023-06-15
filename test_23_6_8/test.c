#include <stdio.h>

int main()
{
    int age = 1;
    scanf("%d", &age);
    if(age<18)
        printf("未成年\n");
    else if(age<28)
        printf("青年\n");
    else if(age<38)
        printf("壮年\n");
    else if(age<58)
        printf("中老年\n");
    else
        printf("老年\n");

    return 0;
}