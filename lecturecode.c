
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

// int main(void) {

// long long big;

// big = (long long)700000000 * 700000000LL;

// printf("%lld", big);

// return 0;

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



// #include <stdio.h>

// int main(void)

// {
//     extern int a, b, c;
//     printf("%3d%3d%3d\n", a, b, c);

//     return 0;

// }
// int a = 1, b = 2, c = 3;  // 외부변수

// #include <stdio.h>
// #define N 5
// #define M 4

// int main()
// {
//     int grade[N][M], student[N];

//     for (int i = 0; i < N; i++)
//     {
//         for (int j = 0; j < M; j++)
//         {
//             printf("학생 %1d 과목 %1d 성적: ", i, j);
//             scanf("%d", &grade[i][j]);
//         }
//     }
    
//     for (int i = 0; i < N; i++)
//     {
//         student[i] = 0;
//         for (int j = 0; j < M; j++)
//         {
//             student[i] += grade[i][j];
//         }
//         printf("학생 %1d 평균: %4.2f\n", i, (float)student[i] / M);
//     }
// }

// #include <stdio.h>
// void diff_array(int [], int, int, int);

// int main(void)

// {
//     int size = 10, first = 1, diff = 7;
//     int arr[size];
    
    

//     diff_array(arr, first, diff, size);

//     return 0;

// }

// void diff_array(int arr[], int first, int diff, int size)
// {
//     arr[0] = first;
//     for (int i = 1; i < size; i++)
//     {
//         arr[i] = arr[i-1] + diff;
//     }
//     for (int j = 0; j < size; j++)
//     {    
//         printf("%d\n", arr[j]);
//     }
// }

// #include <stdio.h>

// int main()
// {
//     int score[5];
//     int sum = 0, temp = 0;
     
//     for (int i = 0; i < 5; i++)
//     {
//         printf("성적을 입력하세요: ");
//         scanf("%d", &score[i]);
//     }
//     for (int j = 0; j < 5; j++)
//     {
//         sum += score[j];
//     }
//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 0; j < 4; j++)
//         {
//             if (score[j] < score[j + 1])
//             {
//                 temp = score[j];
//                 score[j] = score[j + 1];
//                 score[j + 1] = temp;
//             }
//         }
//     }
//     for (int i = 1; i <= 5; i++)
//     {
//         printf("%d등 %d점\n", i, score[i - 1]);
//     }
//     printf("전체 평균 %.1f점", (float)sum / 5);
// }


// #include <stdio.h>

// void grade_array(int[], char[], int);
// int main()
// {
//     int size = 10;
//     int score[size], grade[size];
//     for (int i = 0; i < size; i++)
//     {
//         printf("성적을 입력하세요: ");
//         scanf("%d", &score[i]);
//     }
//     grade_array(score, grade, size);

//     return 0;
// }
// void grade_array(int score[], char grade[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         switch (score[i] / 10)
//         {
//         case 10:
            
//         case 9:
//             grade[i] = 'A';
//             break;
//         case 8:
//             grade[i] = 'B';
//             break;
//         case 7:
//             grade[i] = 'C';
//             break;
//         case 6:
//             grade[i] = 'D';
//             break;
        
//         default:
//             grade[i] = 'F';
//             break;
//         }
//     }
//     for (int j = 0; j < size; j++)
//     {
//         printf("%d번 째의 등급은 %c\n", j, grade[j]);
//     }    
// }
