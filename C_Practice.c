
// #include <stdio.h>  //초 입력 -> 분 변환

// int main(void)
// {
//     int input = 640;
//     int minute = input / 60;  
//     int second = input % 60;
//     printf("%d초는 %d 분 %d 초 입니다.", input, minute, second);
//     return 0;
// }

// #include <stdio.h>

// int main(void)
// {
//     int x, y;
//     x = -50;
//     y = 30;
    
//     printf("x의 절대값은 %d 입니다.\n", (x > 0) ? x : -x);
//     printf("x는 y 보다 큽니다. %s\n", (x > y) ? "yes" : "false");
//     return 0;
// }

// #include <stdio.h>
// #define blank 10

// int main()
// {
//     int x, y;
//     for(x = 0; x < 10; x++)
//     {
//         printf("\n");
//         for(y = 0; y < 10; y++)
//         {
//             printf("👍");
//         }
//     }
// }

#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main(void)
{
    while(1)
    {
        char o;
        int first, last;
    
        printf("수식을 입력하세요: ");
        scanf("%d %c %d", &first, &o, &last);
        
        if(o == '+')
        {
            printf("%d %c %d = %d\n", first, o, last, first + last);
        }
        
        else if(o == '-')
        {
            printf("%d %c %d = %d\n", first, o, last, first - last);
        }
        
        else if(o == '*')
        {
            printf("%d %c %d = %d\n", first, o, last, first * last);
        }
        
        else if(o == '/')
        {
            printf("%d %c %d = %d\n", first, o, last, first / last);
        }
        
        else if(o == '%')
        {
            printf("%d %c %d = %d\n", first, o, last, first % last);
        }
    
        else
        {
            printf("올바르지 않은 입력입니다.\n");
            continue;
        }
        getchar();

        printf("계속 진행하시겠습니까? (y/n)");
        scanf("%c", &o);
        if(o == 'n' || o == 'N')
        {
            printf("프로그램을 종료하겠습니다.");
            break;
        }
        else if(o == 'y' || o == 'Y')
        {
            continue;
        }

        else
        {
            printf("잘못된 입력입니다.\n");
        }
    
        return 0;
        }
}