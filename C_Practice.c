// #include <stdio.h>
// #include <time.h>

// int main()
// {
//     int i, n = 300000000;
//     double a = 3.2, b = 200.3, c = 20.3;
//     clock_t start_clock, end_clock, diff_clock, ex_clock;  //time_t

//     start_clock = clock();
//     for(i = 0; i < n; i++)
//     {
//         a *= b * c;
//     }
//     end_clock = clock();

//     diff_clock = end_clock - start_clock;
//     ex_clock = diff_clock / CLOCKS_PER_SEC;
//     printf("clocks : %lu\n", diff_clock);
//     printf("sec : %lu\n", ex_clock);

// } clock 이용법

// #include <stdio.h>

// int factorial_r(int);
// int main()
// {
//     int n = 5;
//     printf("%3d", factorial_r(n));

// }

// int factorial_r(int n)
// {
//     if (n == 0)
//         return 1;
//     else
//     {
//         return (n * (factorial_r(n-1)));
//     }
// }

// #include <stdio.h>
// #include <time.h>

// int fibonacci_r(int);
// int fibonacci_for(int);
// long long count;
// int main()
// {
//     int n, f_result, i, tmp, fib = 1, fib_p = 0, for_result;
//     clock_t start_clock, end_clock, diff_clock;
//     printf("수를 입력하세요.: ");
//     scanf("%d", &n);
//     start_clock = clock();
//     f_result = fibonacci_r(n);
//     end_clock = clock();
//     diff_clock = end_clock - start_clock;
//     printf("%d번 째 값: %d\n", n, f_result);
//     printf("재귀함수 호출 수: %lld\n", count);
//     printf("피보나치 실행 시간(클록 수): %lu\n", diff_clock);

//     start_clock = clock();
//     for_result = fibonacci_for(n);
//     end_clock = clock();
//     diff_clock = end_clock - start_clock;
//     printf("반복문 사용 결과: %d\n", for_result);
//     printf("반복문 사용 시간: %lu\n", diff_clock);

// }

// int fibonacci_r(int n)
// {
//     count += 1;
//     if (n <= 1)
//     {
//         return n;
//     }
//     else
//     {
//         return (fibonacci_r(n-1) + fibonacci_r(n-2));
//     }
    
// } // 재귀함수로 피보나치 수열

// int fibonacci_for(int n)
// {
//     int f_result, i, tmp, fib = 1, fib_p = 0;
//     if (n <= 1)
//         return n;
//     for (i = 2; i <= n; i++)
//     {
//         tmp = fib;
//         fib += fib_p;
//         fib_p = tmp;
//     }
//     return fib_p;
// } // 반복문으로 피보나치 수열

// #include <stdio.h>

// unsigned long long power_of_2(int);

// int main()
// {
//     int n;
//     unsigned long long result;
//     scanf("%d", &n);

//     result = power_of_2(n);
//     printf("%llu", result);
//     return 0;
// }

// unsigned long long power_of_2(int n)
// {
//     if (n == 0)
//         return 1;
//     else
//         return (2 * power_of_2(n -1));
// }  // 2의 n승 구하는 함수


// #include <stdio.h>

// void re_bin_num(int);

// int main()
// {
//     int n;
//     printf("십진수를 입력하세요: ");
//     scanf("%d", &n);
//     re_bin_num(n);
// }

// void re_bin_num(int n)
// {
//     if (n < 2)
//         printf("%d", n);
//     else
//     {
//         re_bin_num(n / 2);
//         printf("%d", n % 2);
//     }
// }


