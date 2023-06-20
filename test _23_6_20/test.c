#include <stdio.h>

int main() {
    char i = 0;
    scanf("%c",&i);
    printf("  %c  \n",i);
    printf(" %c%c%c \n",i,i,i);
    printf("%c%c%c%c%c\n",i,i,i,i,i);
    printf(" %c%c%c \n",i,i,i);
    printf("  %c  \n",i);

    return 0;
}