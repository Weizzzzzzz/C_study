#include <stdio.h>

int main()
{
    int a = 0;
    int b = 0;
    scanf("%d %d", &a,& b);
    //exp1?exp2:exp3
    //(exp1为真输出exp2，exp2为假输出exp3)
    int r=(a>b?a:b);
    printf("%d\n",r);

    return 0;
}
