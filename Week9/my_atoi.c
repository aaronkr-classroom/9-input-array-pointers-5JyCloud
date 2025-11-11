// my_atoi.c
#include <stdio.h>

#define STR_MAX 16

// 문자열을 정수로 바꾸는 함수
int my_atoi(char string[])
{
    int count = 0, num = 0;

    while(string[count] != 0)
    {
        if(string[count] == '\n') break;    // 줄바꿈이면 중단
        // 반복할 때마다 이전 값에 10을 곱해서 자릿수를 증가시킴
        num = num * 10 + string[count] - '0';
        count++;
    }
    return num;
}

int main()
{
    int first_num, second_num;
    char first_str[STR_MAX], second_str[STR_MAX];

    printf("1st num : ");
    gets(first_str);
    printf("2nd num : ");
    gets(second_str);
    
    // printf("문자 합 : \n");
    // printf("%s + %s = %s", first_str, second_str, first_str + second_str);

    first_num = my_atoi(first_str);
    second_num = my_atoi(second_str);

    printf("%d + %d = %d\n", first_num, second_num, first_num + second_num);

    return 0;
}