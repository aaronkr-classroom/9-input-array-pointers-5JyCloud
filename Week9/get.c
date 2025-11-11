// get.c
#include <stdio.h>

int main()
{
    // 입력 문자가 있으면 계속 읽고 출력하는 프로그램
    char ch;

    printf("Enter chars to read (@ to stop) >>> ");

    // while((ch = getc(filename)) != 'EOF');
    while((ch = getc(stdin)) != '@')
    {
        putchar(ch);
    }

    printf("\nEnd of input.\n");

    return 0;
}