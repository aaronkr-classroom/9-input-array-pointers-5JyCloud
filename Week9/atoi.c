// atoi.c
// my_atoi.c
#include <stdio.h>
#include <stdlib.h>

#define STR_MAX 16

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

    first_num = atoi(first_str);
    second_num = atoi(second_str);

    printf("%d + %d = %d\n", first_num, second_num, first_num + second_num);

    return 0;
}