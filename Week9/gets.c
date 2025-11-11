// gets.c
#include <stdio.h>

#define MAX_CHAR 50

int main()
{   
    // 문자열을 마지막에 NULL 문자 0을 포함해야 하므로
    // 최대 MAX_CHAR - 1개의 문자까지 저장 
    char input_str[MAX_CHAR];

    printf("카카오뱅크 등록\n");
    printf("이름 입력 : ");

    fgets(input_str, MAX_CHAR, stdin);

    printf("%s님, 환영합니다!", input_str);


    return 0;
}