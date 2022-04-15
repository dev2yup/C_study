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