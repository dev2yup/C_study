// #include <stdio.h>

// int main()

// {
//     int year;
//     scanf("%d", &year);
//     if(year % 400 == 0)
//     {
//         printf("1");
//     }
//     else if(year % 100 == 0)
//     {
//         printf("0");
//     }
//     else if(year % 4 == 0)
//         printf("1");
//     else
//         printf("0");
//     return 0;
// } //윤년 판별

// #include <stdio.h>

// int main()
// {
//     int hour, minute;
//     scanf("%d %d", &hour, &minute);
//     if(hour == 0 && minute < 45)
//         printf("%d %d", hour + 23, minute + 15);
//     else if(hour == 0 && minute >= 45)
//         printf("%d %d", hour = 0, minute -45);
//     else if(minute < 45)
//      {   
//         minute = minute + 15;
//         printf("%d %d", --hour, minute);
//      }
//     else
//     {
//        printf("%d %d", hour, minute - 45);
//     }

//     return 0;
// } //시계 45분 빠르게(24시간제)

// #include <stdio.h>

// int main(void){

//     int hour, minute, makingtime, total;
//     scanf("%d %d", &hour, &minute);
//     scanf("%d", &makingtime);
//     total = minute + makingtime;
    
//     if(hour == 23 && minute + makingtime >= 60)
//     {
//         hour += total / 60;
//         total = total - 60 * (total / 60);
//         if(hour >= 24)
//         {
//             printf("%d %d", 0 + hour - 24, total);
//         }
//         else
//         {
//             printf("%d %d", hour, total);
//         }
//     }
//     else if(total >= 60)
//     {
//         hour += total / 60;
//         total = total - 60 * (total / 60);
//         if(hour >= 24)
//         {
//             printf("%d %d", 0 + hour - 24, total);
//         }
//         else
//         {
//             printf("%d %d", hour, total);
//         }
//     }
//     else
//     {
//         printf("%d %d", hour, total);
//     }

//     return 0;
// }   // 요리 완성 시간


/* 백준 #4673 셀프넘버 문제 생성자가 없는 숫자를 셀프 넘버라고 한다. 100보다 작은 셀프 넘버는 총 13개가 있다. 
1, 3, 5, 7, 9, 20, 31, 42, 53, 64, 75, 86, 97
10000보다 작거나 같은 셀프 넘버를 한 줄에 하나씩 출력하는 프로그램을 작성하시오. */
// #include <stdio.h>

// int fun1(int);

// int main(void){
//     int a, b;
//     int arr[10001] = {0, };
//     for (int i = 1; i <= 10001; i++)
//     {
//         a = fun1(i);
//         if (a < 10001)
//             arr[a] = 1;   // 셀프넘버가 아닐 경우 1
//     }
//     for (int j = 1; j <= 10000; j++)
//     { 
//         if (arr[j] == 0)
//             printf("%d\n", j); // 배열의 요소가 0일때(셀프넘버일 때) 출력
//     }
//      return 0;
// }

// int fun1(int i)
// {
//     int sum = i;
//     while (i > 0)
//     {
//         sum += i % 10;
//         i /= 10;      // 각 자리 수 합 구하기
//     }
//     return sum;
// }

/* #1065 어떤 양의 정수 X의 각 자리가 등차수열을 이룬다면, 그 수를 한수라고 한다. 등차수열은 연속된 두 개의 수의 차이가 일정한 수열을 말한다. 
N이 주어졌을 때, 1보다 크거나 같고, N보다 작거나 같은 한수의 개수를 출력하는 프로그램을 작성하시오. */

// #include <stdio.h>

// int hansu(int);
// int main(void){
//     int input, i, result, count = 0;

//     scanf("%d", &input);
//     for (i = 1; i <= input; i++)
//     {
//         result = hansu(i);
//         result == 1 ? count++ : 0;
//     }
//     printf("%d", count);
//     return 0;
// }

// int hansu(int i)
// {
//     int a, b, c;
//     if (i < 100)
//         return 1;
//     else{
//         a = i / 100; // 100의 자리
//         i %= 100;
//         b = i / 10; // 10의 자리
//         i %= 10; // 1의 자리
//         c = i;
//         if ((c - b) == (b - a)) // 각 수가 등차수열을 이룰 때
//             return 1;
//         else
//             return 0;
//     }
// }

#include <stdio.h>

int main(void){
    int subject;
    double tmp, top_score, sum = 0, average;
    scanf("%d", &subject);
    double sub_arr[subject];
    for (int i = 0; i < subject; i++)
    {
        scanf("%lf", &sub_arr[i]);
    }
   
   for (int i = 0; i < subject; i++)
    {
        for (int j = i + 1; j < subject; j++)
        {
            if (sub_arr[i] < sub_arr[j])
            {
                tmp = sub_arr[i];
                sub_arr[i] = sub_arr[j];
                sub_arr [j] = tmp;
            }
        }
    }
   for (int i = 0; i < subject; i++)
        printf("%f\n", sub_arr[i]);

    top_score = sub_arr[0];
    for (int j = 0; j < subject; j++)
    {
        sub_arr[j] = sub_arr[j] / top_score * 100;
        sum += sub_arr[j];
    }
    printf("%lf", sum / subject);
    return 0;
}