// #include <stdio.h>

// int main(void){
    
//     int a, b = 0, c = 0;
//     a = ++b + ++c;
//     printf("%d %d %d\n", a, b, c);
//     a = b++ + c++;
//     printf("%d %d %d\n", a, b, c);
//     a = ++b + c++;
//     printf("%d %d %d\n", a, b, c);
//     a = b-- + --c;
//     printf("%d %d %d\n", a, b, c);
    
    
//     return 0;
// }


// #include <stdio.h>

// #include <limits.h>

// int main(void)

// {

// printf("ULLONG_MAX : %llu\n", ULLONG_MAX);

// printf("LLONG_MAX : %lld\n", LLONG_MAX);

// return 0;

// } 자료형 최대 최 측정

// #include <stdio.h>

// #include <float.h>

// int main(void)

// {

// printf("LDBL_MIN : %Le\n", LDBL_MIN);

// printf("LDBL_MAX : %Le\n", LDBL_MAX);

// printf("LDBL_DIG : %d\n", LDBL_DIG); //정확도 측정

// return 0;

// }

// #include <stdio.h>

// int main(void){

// float C;

// printf("섭씨온도를 입력하세요 : ");

// scanf("%f", &C);

// printf("%.2f C = %.2f F\n", C, (float)9 / 5 * C + 32); 캐스트 연산자 사용해 형 변환

// return 0;

// }

// #include <stdio.h>

// int main(void) {

// long long big;

// big = (long long)700000000 * 700000000LL;

// printf("%lld", big);

// return 0;

// }

// #include <stdio.h>
// int main(void)
// {
//     int y = 2;
//     double z = 3;
//     printf("%f\n", y<z?y:z);
//     printf("%lu", sizeof(y<z));

//     return 0; 
// }


// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// int main()
// {
//     int a = 1;
//     char yn;
    
//     srand(time(NULL));
//     while(1)
//     {
//         printf("추천 로또 번호는: ");
//         for(int i = 0; i < 6; i++)
//         {
//             printf("%d", (rand()%(45-1)+1)+1);
//             printf(" ");
//         }
//         printf("\n다시 생성할까요?: ");
//         getchar();
//         scanf("%c", &yn);
//         printf("\n");
//         if(yn == 'n')
//             break;
//     }
//     return 0;
// }

#include <stdio.h>

float my_cal(float, char, float);
int main(){
    float a, b;
    float rt;
    char c;

    printf("수식을 입력하세요.: ");
    scanf("%f %c %f", &a, &c, &b);

    rt = my_cal(a, c, b);
    printf("결과값은 %.2f 입니다.", rt);
    return 0;
}

float my_cal(float a, char c, float b){
    if(c == '+')
        return a + b;
    if(c == '-')
        return a - b;
    if(c == '*')
        return a * b;
    if(c == '/')
        return a / b;
    return 0;
}