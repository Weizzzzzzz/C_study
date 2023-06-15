#include <stdio.h>

int main()
{
    int i = 0;
    // for (i = 0; i < 10; i++)
    //     printf("%d ", i);
    // 
    // while(i<10)
    // {    
    //     printf("%d ", i);
    //     i++;
    // }
    // 
    do
    {
        printf("%d ", i);
        i++;
    } while (i < 10);
    
    return 0;
}