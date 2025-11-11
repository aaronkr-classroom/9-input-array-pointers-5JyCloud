// calculator.c
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_CH 100
#define NUM_CH MAX_CH/2

int numCheck(char ch)
{
    return (int)ch >= '0' && ch <= '9';
}

int checkOp(char op)
{
    return op == '+' || op == '-' || op == '*' || op == '/';
}

int main()
{
    char input[MAX_CH], numStr1[NUM_CH], numStr2[NUM_CH], opreator = '\0';
    int i = 0, j = 0;

    printf("Enter a simple math formula (12+34) : \n");
    fgets(input, sizeof(input), stdin);
    
    // #1
    while(input[i] != '\0' && numCheck(input[i]))
    {
        numStr1[j++] = input[i++];
    }
    numStr1[j] = '\0';

    // #2
    if(checkOp(input[i]))
    {
        opreator = input[i++];
    }
    else
    {
        printf("Error : invalid operator!\n");
        return 1;  
    }

    // #3 두번째 숫자를 추출하기
    j = 0;
    while(input[i] != '\0' && numCheck(input[i]))
    {
        numStr2[j++] = input[i++];
    }
    numStr2[j] = '\0';


    int num1 = atoi(numStr1);
    int num2 = atoi(numStr2);
    int result = 0;

    switch(opreator)
    {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if(num2 > 0) result = num1 / num2;
            else
            {
                printf("Error");
                return 1;
            }
            break;
        default:
            printf("Error : Invalid operator. Use +, -, *, /.\n");
            return 1;
    }

    printf("Result : %d %c %d = %d\n", num1, opreator, num2, result);

    return 0;
}