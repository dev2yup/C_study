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

#include <stdio.h>

int main(void){

    int hour, minute, makingtime, total;
    scanf("%d %d", &hour, &minute);
    scanf("%d", &makingtime);
    total = minute + makingtime;
    
    if(hour == 23 && minute + makingtime >= 60)
    {
        hour += total / 60;
        total = total - 60 * (total / 60);
        if(hour >= 24)
        {
            printf("%d %d", 0 + hour - 24, total);
        }
        else
        {
            printf("%d %d", hour, total);
        }
    }
    else if(total >= 60)
    {
        hour += total / 60;
        total = total - 60 * (total / 60);
        if(hour >= 24)
        {
            printf("%d %d", 0 + hour - 24, total);
        }
        else
        {
            printf("%d %d", hour, total);
        }
    }
    else
    {
        printf("%d %d", hour, total);
    }

    return 0;
}