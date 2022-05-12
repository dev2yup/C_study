#include <stdio.h>

void bin_dec();
void bin_add();
void bin_sub();

int main()
{
    int dec_plusber;
    printf("1.이진수 변환기 2.이진수 덧셈기 3.이진수 뺄셈기\n");
    printf("번호를 선택하세요.: ");
    scanf("%d", &dec_plusber);
    if(dec_plusber == 1)
        bin_dec();
    else if(dec_plusber == 2)
        bin_add();
    else if(dec_plusber == 3)
        bin_sub();
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
    {                           // 음수일 때
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
    long long bincode1, bincode2, temp1, temp2, deccode1 = 0, deccode2 = 0;
    int i = 0, dec_plus, tmp, bin1, bin2, bin3, bin4, bin5, bin6, bin7, bin8;
    printf("첫 번째 8비트 이진수를 입력하세요.: ");
    scanf("%lld", &bincode1);
    printf("두 번재 8비트 이진수를 입력하세요.: ");
    scanf("%lld", &bincode2);

    while(i < 8) //bincode1 십진수로 변환
        {
        temp1 = bincode1 % 10;
        bincode1 /= 10;
        for(int j = 0; j < i; j++)
                temp1 *= 2;
        deccode1 += temp1;
        i++;
        }
    i = 0;

    while(i < 8) //bincode2 십진수로 변환
        {
        temp2 = bincode2 % 10;
        bincode2 /= 10;
        for(int j = 0; j < i; j++)
                temp2 *= 2;
        deccode2 += temp2;
        i++;
        }
    dec_plus = deccode1 + deccode2; //두 십진수 더하기
    
        tmp = dec_plus;  // 더한 십진수 이진수로 변환
        bin8 = dec_plus % 2;
        dec_plus /= 2;
        bin7 = dec_plus % 2;
        dec_plus /= 2;
        bin6 = dec_plus % 2;
        dec_plus /= 2;
        bin5 = dec_plus % 2;
        dec_plus /= 2;
        bin4 = dec_plus % 2;
        dec_plus /= 2;
        bin3 = dec_plus % 2;
        dec_plus /= 2;
        bin2 = dec_plus % 2;
        dec_plus /= 2;
        bin1 = dec_plus % 2;
        dec_plus /= 2;
        printf("두 이진수의 합은 %d%d%d%d%d%d%d%d 이고, 십진수로 %d 입니다.\n",bin1, bin2, bin3, bin4, bin5, bin6, bin7, bin8, tmp);
}

void bin_sub() // 이진수 뺄셈기
{
    long long bincode1, bincode2, temp1, temp2, deccode1 = 0, deccode2 = 0;
    int i = 0, tmp, dec_minus, bin1, bin2, bin3, bin4, bin5, bin6, bin7, bin8;
    printf("첫 번째 8비트 이진수를 입력하세요.: ");
    scanf("%lld", &bincode1);
    printf("두 번재 8비트 이진수를 입력하세요.: ");
    scanf("%lld", &bincode2);
    
    while(i < 8)  
        {
        temp1 = bincode1 % 10;
        bincode1 /= 10;
        for(int j = 0; j < i; j++)
                temp1 *= 2;
        deccode1 += temp1;
        i++;
        }
    i = 0;

    while(i < 8)
        {
        temp2 = bincode2 % 10;
        bincode2 /= 10;
        for(int j = 0; j < i; j++)
                temp2 *= 2;
        deccode2 += temp2;
        i++;
        }
    
    dec_minus = deccode1 - deccode2; // 빼기
    
    tmp = dec_minus; // 뺀 십진수값을 이진수로 변환
        bin8 = dec_minus % 2;
        dec_minus /= 2;
        bin7 = dec_minus % 2;
        dec_minus /= 2;
        bin6 = dec_minus % 2;
        dec_minus /= 2;
        bin5 = dec_minus % 2;
        dec_minus /= 2;
        bin4 = dec_minus % 2;
        dec_minus /= 2;
        bin3 = dec_minus % 2;
        dec_minus /= 2;
        bin2 = dec_minus % 2;
        dec_minus /= 2;
        bin1 = dec_minus % 2;
        dec_minus /= 2;
        printf("두 이진수의 차는 %d%d%d%d%d%d%d%d 이고, 십진수로 %d 입니다.\n",bin1, bin2, bin3, bin4, bin5, bin6, bin7, bin8, tmp);
}