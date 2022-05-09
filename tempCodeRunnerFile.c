//플밍 과제
#include <stdio.h>

int main()
{
    int num, tmp, ngnum, bin1, bin2, bin3, bin4, bin5, bin6, bin7, bin8;
    printf("-128부터 127까지의 십진수 정수 하나를 입력하세요: ");
    scanf("%d", &num);
    while(num < -128 || num > 127) //범위 내 정수 입력
    {
        printf("잘못된 입력입니다.\n");
        printf("-128부터 127까지의 십진수 정수 하나를 입력하세요: ");
        scanf("%d", &num);
    }

    if(num >= 0) // 입력값이 양수일 때
    {
        tmp = num;
        bin8 = num % 2;
        num /= 2;
        bin7 = num % 2;
        num /= 2;
        bin6 = num % 2;
        num /= 2;
        bin5 = num % 2;
        num /= 2;
        bin4 = num % 2;
        num /= 2;
        bin3 = num % 2;
        num /= 2;
        bin2 = num % 2;
        num /= 2;
        bin1 = num % 2;
        num /= 2;
        printf("%d의 이진수는 %d%d%d%d %d%d%d%d 입니다.\n", tmp, bin1, bin2, bin3, bin4, bin5, bin6, bin7, bin8);
    }
    else if(num < 0) // 입력값이 음수일 때
    {
        ngnum = -num; //절댓값
        bin8 = ngnum % 2; //1의 보수 구하는 과정
        ngnum /= 2;
        if(bin8 == 0)
            bin8 = 1;
        else
            bin8 = 0;
        bin7 = ngnum % 2;
        ngnum /= 2;
        if(bin7 == 0)
            bin7 = 1;
        else
            bin7 = 0;
        bin6 = ngnum % 2;
        ngnum /= 2;
        if(bin6 == 0)
            bin6 = 1;
        else
            bin6 = 0;
        bin5 = ngnum % 2;
        ngnum /= 2;
        if(bin5 == 0)
            bin5 = 1;
        else
            bin5 = 0;
        bin4 = ngnum % 2;
        ngnum /= 2;
        if(bin4 == 0)
            bin4 = 1;
        else
            bin4 = 0;
        bin3 = ngnum % 2;
        ngnum /= 2;
        if(bin3 == 0)
            bin3 = 1;
        else
            bin3 = 0;
        bin2 = ngnum % 2;
        ngnum /= 2;
        if(bin2 == 0)
            bin2 = 1;
        else
            bin2 = 0;
        bin1 = ngnum % 2;
        ngnum /= 2;
        if(bin1 == 0)
            bin1 = 1;
        else
            bin1 = 0;
      
        
        bin8 += 1; //2의 보수를 구하기 위해 +1
        if(bin8 == 2)
        {
            bin8 = 0;
            bin7 += 1;
            if(bin7 == 2)
            {
                bin7 = 0;
                bin6 += 1;
                if(bin6 == 2)
                {
                    bin6 = 0;
                    bin5 += 1;
                    if(bin5 == 2)
                    {
                        bin5 = 0;
                        bin4 += 1;
                        if(bin4 == 2)
                        {
                            bin4 = 0;
                            bin3 += 1;
                            if(bin3 == 2)
                            {
                                bin3 = 0;
                                bin2 += 1;
                                if(bin2 == 2)
                                {
                                    bin2 = 0;
                                    bin1 += 1;
                                    if(bin1 == 2)
                                        bin1 = 0;
                                }
                            }
                        }
                    } 
                }
            }

        }
        printf("%d의 이진수는 %d%d%d%d %d%d%d%d 입니다.", num, bin1, bin2, bin3, bin4, bin5, bin6, bin7, bin8);
        
    }

    return 0;
}


// #include <stdio.h>
// int main() 
// { 
//     int input = 0; int mask; 
//     while (1) 
//     { 
//         printf("Input Number(Decimal: if you input zero then exit): "); scanf("%d", &input); 
//         if (input == 0)
//         {
//              break; 
//         }
//         for (int i = 31; i >= 0; i--) 
//         { 
//              mask = 1 << i; 
//              printf("%d", input & mask ? 1 : 0); 
//              if (i % 8 == 0) 
//              printf(" "); 
//         } 
//              printf("\n");
//              } 
//              return 0; 
//              }
