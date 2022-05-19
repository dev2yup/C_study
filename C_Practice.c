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

#include <stdio.h>

int factorial_r(int);
int main()
{
    int n = 5;
    printf("%3d", factorial_r(n));

}

int factorial_r(int n)
{
    if (n == 0)
        return 1;
    else
    {
        return (n * (factorial_r(n-1)));
    }
}
