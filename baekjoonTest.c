
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
//     int input, i, result, cycle = 0;

//     scanf("%d", &input);
//     for (i = 1; i <= input; i++)
//     {
//         result = hansu(i);
//         result == 1 ? cycle++ : 0;
//     }
//     printf("%d", cycle);
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

// #include <stdio.h>

// int oxCheck(char[]);
// int main(void)
// {
//     int freq, sum;
//     char oxChar[80] = {0,};
//     scanf("%d", &freq);
//     int score[freq];
//     for (int i = 0; i < freq; i++)
//     {
//         scanf("%s", oxChar);
//         score[i] = oxCheck(oxChar);
//         for (int k = 0; k < 80; k++)
//         {
//             oxChar[k] = 0;
//         }
//     }
//     for (int j = 0; j < freq; j++)
//     {
//         printf("%d\n", score[j]);
//     }
//     return 0;
// }

// int oxCheck(char chr[])
// {
//     int cycle = 0, sum = 0;
//     for (int i = 0; i < 80; i++)
//     {
//         if (chr[i] == 'O')
//         {
//             cycle++;
//             sum += cycle;
//         }
//         else if (chr[i] == 'X')
//         {
//             cycle = 0;
//         }
//     }
//     return sum;
// }

/* #4344 첫째 줄에는 테스트 케이스의 개수 C가 주어진다.
둘째 줄부터 각 테스트 케이스마다 학생의 수 N(1 ≤ N ≤ 1000, N은 정수)이 첫 수로 주어지고, 이어서 N명의 점수가 주어진다. 
점수는 0보다 크거나 같고, 100보다 작거나 같은 정수이다. */
// #include <stdio.h>

// int main(void){
//     int testNum, stuNum;
//     double sum = 0, aver, overaver = 0;
    
//     scanf("%d", &testNum);
//     int stuScore[testNum][1000];

//     for (int i = 0; i < testNum; i++)
//     {
//         scanf("%d", &stuNum);
//         for (int j = 0; j < stuNum; j++)
//         {
//             scanf("%d", &stuScore[i][j]);
//             sum += stuScore[i][j];
//         }
//         aver = sum / (double)stuNum;
//         for (int k = 0; k < stuNum; k++)
//         {
//             if (stuScore[i][k] > aver)
//             {
//                 overaver++;
//             }
//         }
//         printf("%0.3lf%%\n", overaver / (double)stuNum * 100);
//         sum = 0; 
//         overaver = 0
//     }
//     return 0;
// }

// #include <stdio.h>  //strchr()을 활용한 프로그램
// #include <string.h>

// int main(void){
//     char arr[] = "This is sample string.";
//     char c = 's';
//     char *pch;
//     pch = strchr(arr, c);
//     printf("Looking %c in arr\n", c);
//     while (pch != NULL){
//         printf("position: %d\n", pch - arr + 1);
//         pch = strchr(pch + 1, c);
//     }
//     return 0;
// }

#include <stdio.h>
#include <string.h>

int main(void){
    int count;
    char arr[50][51];
    char result[51] = {0};

    scanf("%d", &count);
    for (int i = 0; i < count; i++){
        scanf("%s", arr[i]);
    }

    if (count == 1) printf("%s", arr[0]);
    
    for (int i = 1; i < count; i++){
        for (int j = 0; j < strlen(arr[0]); j++){
            if (arr[0][j] != arr[i][j]){
                result[j] = '?';
            }
            else if (result[j] == 0) result[j] = arr[0][j];
        }
    }
    printf("%s", result);

    return 0;
}