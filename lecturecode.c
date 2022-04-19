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

// int main(void){
//     int a=2;
//     float b=6123.1; 
//     printf("1234567890\n"); 
//     printf("안녕%1.2f\n", b); 
//     printf("   ");
    
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

// printf("LDBL_MIN : %lld\n", LDBL_MIN);

// printf("LDBL_MAX : %lld\n", LDBL_MAX);

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

// int main(void){

//     int pencil;
//     printf("연필 개수를 입력하세요.: ");
//     scanf("%d", &pencil);
//     printf("연필 %d자루는 %d 다스, %d자루 입니다.", pencil, pencil / 12, pencil % 12);
//     return 0;
// }
#include <stdio.h>
int main(void)
{
    int y = 2;
    double z = 3;
    printf("%f\n", y<z?y:z);
    printf("%lu", sizeof(y<z));

    return 0; 
}