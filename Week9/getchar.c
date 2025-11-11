// getchar.c
#include <stdio.h>
#include <conio.h>  // MS 표준 라이브러리

int main()
{
    char c = getchar(); 
    printf("입력한 문자 : %c\n", c);
    while((c = getchar()) != '\n' && c != EOF)
    {
        putchar(c);
    }
    printf("\n");
    return 0;
}