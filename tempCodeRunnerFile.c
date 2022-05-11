#include <stdio.h>

void bin_dec();
void bin_add();

int main()
{
    int num;
    printf("1.이진수 변환기 2.이진수 덧셈기 3.이진수 뺄셈기\n");
    printf("번호를 선택하세요.: ");
    scanf("%d", &num);
    if(num == 1)
        bin_dec();
    else if(num == 2)
        bin_add();
    else if(num == 3)
        ;
    return 0;
}

void bin_dec() // 2진수 -> 10진수 변환기
{   
    long long bincode;
    int i = 0, temp, deccode = 0;
    int bin1, bin2, bin3, bin4, bin5, bin6, bin7, bin8;

    printf("8비트 이진수를 입력하세요.: ");
    scanf("%lld", &bincode);
    if(bincode / 10000000 == 1) //부호비트가 음수인지 판별
    {
        bin1 = 0;
        bincode %= 10000000;
        if(bincode / 1000000 == 1)
            bin2 = 0;
        else
            bin2 = 1;
        bincode %= 1000000;
        if(bincode / 100000 == 1)
            bin3 = 0;
        else
            bin3 = 1;
        bincode %= 100000;
        if(bincode / 10000 == 1)
            bin4 = 0;
        else
            bin4 = 1;
        bincode %= 10000;
        if(bincode / 1000 == 1)
            bin5 = 0;
        else
            bin5 = 1;
        bincode %= 1000;
        if(bincode / 100 == 1)
            bin6 = 0;
        else
            bin6 = 1;
        bincode %= 100;
        if(bincode / 10 == 1)
            bin7 = 0;
        else
            bin7 = 1;
        if(bincode % 10 == 1)
            bin8 = 0;
        else
            bin8 = 1;

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
        bin1 *= 128;
        bin2 *= 64;
        bin3 *= 32;
        bin4 *= 16;
        bin5 *= 8;
        bin6 *= 4;
        bin7 *= 2;
        bin8 *= 1;
        deccode = bin1 + bin2 + bin3 + bin4 + bin5 + bin6 + bin7 + bin8;
        printf("십진수로 -%d 입니다.", deccode);
    }
    
    else //양수일 때
    {   
        while(i < 8)
        {
        temp = bincode % 10;
        bincode /= 10;
        for(int j = 0; j < i; j++)
                temp *= 2;
        deccode += temp;
        i++;
        }
        printf("십진수로 %d 입니다.", deccode);
    }
    return;
}


void bin_add() // 이진수 덧셈기
{
    long long bincode1, bincode2, bin_plus, temp_plus;
    int bin1 = 0, bin2 = 0, bin3 = 0, bin4 = 0, bin5 = 0, bin6 = 0, bin7 = 0, bin8 = 0;

    printf("첫 번째 8비트 이진수를 입력하세요.: ");
    scanf("%lld", &bincode1);
    printf("두 번재 8비트 이진수를 입력하세요.: ");
    scanf("%lld", &bincode2);

    bin_plus = bincode1 + bincode2;
    printf("%lld\n", bin_plus);
    temp_plus = bin_plus % 10;
    if(temp_plus % 10 == 2) ////// 8
    {
        bin8 = 0;
        bin7 += 1;
    }
    else if(temp_plus % 10 == 1)
        bin8 = 1;
    else
        bin8 = 0;
    
    temp_plus = bin_plus % 100;
    if(temp_plus / 10 == 2) ////// 7
    {
        bin7 += 2;
        if(bin7 == 3)
        {
            bin7 = 1;
            bin6 += 1;
        }
        else
            bin7 = 0;
            bin6 += 1;
    }
    else if(temp_plus / 10 == 1)
        bin7 += 1;
    else 
        bin7 += 0;
    temp_plus = bin_plus % 1000;
    if(temp_plus / 100 == 2) ////// 6
    {
        bin6 += 2;
        if(bin6 == 3)
        {
            bin6 = 1;
            bin5 += 1;
        }
        else
            bin6 = 0;
            bin5 += 1;
    }
    else if(temp_plus / 100 == 1)
        bin6 = 1;
    else 
        bin6 += 0;
    temp_plus = bin_plus % 10000;
    if(temp_plus / 1000 == 2) ////// 5
    {
        bin5 += 2;
        if(bin5 == 3)
        {
            bin5 = 1;
            bin4 += 1;
        }
        else
            bin5 = 0;
            bin4 += 1;
    }
    else if(bin_plus / 1000 == 1)
        bin5 += 1;
    else 
        bin5 += 0;
    temp_plus = bin_plus % 100000;
    if(temp_plus / 10000 == 2) ////// 4
    {
        bin4 += 2;
        if(bin4 == 3)
        {
            bin4 = 1;
            bin3 += 1;
        }
        else    
            bin4 = 0;
            bin3 += 1;
    }
    else if(temp_plus / 10000 == 1)
        bin4 = 1;
    else 
        bin4 = 0;
    temp_plus = bin_plus % 1000000;
    if(temp_plus / 100000 == 2) ////// 3
    {
        bin3 += 2;
        if(bin3 == 3)
        {
            bin3 = 1;
            bin2 += 1;
        }
        else   
            bin3 = 0;
            bin2 += 1;
    }
    else if(temp_plus / 100000 == 1)
        bin3 = 1;
    else 
        bin3 = 0;
    temp_plus = bin_plus % 10000000;
    if(temp_plus / 1000000 == 2) ////// 2
    {
        bin2 += 2;
        if(bin2 == 3)
        {
            bin2 = 1;
            bin1 += 1;
        }
        else
            bin2 = 0;
            bin1 += 1;
    }
    else if(temp_plus / 1000000 == 1)
        bin2 = 1;
    else 
        bin2 = 0;
    if(bin_plus / 10000000 == 2) ////// 1
    {
        bin1 += 2;
        if(bin1 == 3)
        {
            bin1 = 1;
        }
        else
            bin1 = 0;
    }
    else if(bin_plus / 10000000 == 1)
        bin1 = 1;
    else
        bin1 = 0;
    
    printf("%d%d%d%d%d%d%d%d", bin1, bin2, bin3, bin4, bin5, bin6, bin7, bin8);
}