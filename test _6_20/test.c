// #include <stdio.h>

// int main() {
//     char i = 0;
//     scanf("%c",&i);
//     printf("  %c  \n",i);
//     printf(" %c%c%c \n",i,i,i);
//     printf("%c%c%c%c%c\n",i,i,i,i,i);
//     printf(" %c%c%c \n",i,i,i);
//     printf("  %c  \n",i);

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     char i = 0;
//     scanf("%c",&i);
//     printf("%d\n",i);

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     float i = 0;
//     scanf("%f", &i);
//     printf("%0.0f", i);
//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int x = 0;
//     int y = 0;
//     int z = 0;
//     scanf("%d %d %d", &x, &y, &z);
//     printf("score1=%d,score2=%d,score3=%d", x, y, z);
//     return 0;
// }

#include <stdio.h>

int main()
{
    int id = 0;
    float c = 0;
    float math = 0;
    float english = 0;
    scanf("%d;%f,%f,%f", &id, &c, &math, &english);
    printf("The each subject score of No. %d is %.2f, %.2f, %.2f.", id, c, math, english);
    return 0;
}