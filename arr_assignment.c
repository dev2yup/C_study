#include <stdio.h>
#include <string.h>

int main()
{
    int num, temp_num, temp_score;
    char temp_str[10];
    char input_name[10];
    char name[][10] = {"Sophia", "Olivia", "Riley", "Emma", "Ava", "Isabella", "Aria",
    "Amelia", "Mia", "Liam", "Noah", "Jackson", "Aiden", "Elijah", "Grayson", "Lucas", 
    "Oliver", "Caden", "Mateo", "David"};
    int stu_num[] = {20220001, 20220010, 20220002, 20220015, 20220009, 20220014, 20220020, 20220005, 20220016, 20220008,
    20220012, 20220004, 20220018, 20220017, 20220003, 20220013, 20220007, 20220019, 20220011, 20220006};
    int stu_score[] = {98, 96, 88, 77, 82, 93, 84, 79, 90, 80, 89, 99, 78, 83, 92, 71, 72, 68, 96, 76};
  

    printf("1. 이름 오름차순 출력   2. 학번 오름차순 출력\n3. 점수 내림차순 출력   4.이름 검색\n5. 종료\n");
    printf("번호를 선택하세요.: ");
    scanf("%d", &num);

    if (num == 1){            /**********     1. 이름 오름차순 출력     **********/  

        for (int i = 0; i < 20; i++) // 오름차순 정렬
        {
            for (int j = 0; j < 19; j++)
            {
                if (strcmp(name[j], name[j + 1]) > 0)
                {
                    strcpy(temp_str, name[j]); // 이름 교체
                    strcpy(name[j], name[j + 1]);
                    strcpy(name[j + 1], temp_str);
                    temp_num = stu_num[j]; // 학번 교체
                    stu_num[j] = stu_num[j + 1];
                    stu_num[j + 1] = temp_num;
                    temp_score = stu_score[j]; // 점수 교체
                    stu_score[j] = stu_score[j + 1];
                    stu_score[j + 1] = temp_score;
                }
            }
        }
        printf("이름       학번       점수\n");
        for (int m = 0; m < 20; m++)
        {
            printf("%-9s  %8d  %3d\n", name[m], stu_num[m], stu_score[m]);
        }
    }
    else if (num == 2){        /**********     2. 학번 오름차순 출력     **********/
        for (int i = 0; i < 20; i++)
        {
            for (int j = 0; j < 19; j++)
            {
                if (stu_num[j] > stu_num[j + 1])
                {
                    strcpy(temp_str, name[j]); // 이름 교체
                    strcpy(name[j], name[j + 1]);
                    strcpy(name[j + 1], temp_str);
                    temp_num = stu_num[j]; // 학번 교체
                    stu_num[j] = stu_num[j + 1];
                    stu_num[j + 1] = temp_num;
                    temp_score = stu_score[j]; // 점수 교체
                    stu_score[j] = stu_score[j + 1];
                    stu_score[j + 1] = temp_score;
                }
            }
        }
        printf("이름       학번       점수\n");
        for (int m = 0; m < 20; m++)
        {
            printf("%-9s  %8d  %3d\n", name[m], stu_num[m], stu_score[m]);
        }

    }
    else if (num == 3){          /**********    3. 점수 내림차순 출력     **********/
        for (int i = 0; i < 20; i++)
        {
            for (int j = 0; j < 19; j++)
            {
                if (stu_score[j] < stu_score[j + 1])
                {
                    strcpy(temp_str, name[j]); // 이름 교체
                    strcpy(name[j], name[j + 1]);
                    strcpy(name[j + 1], temp_str);
                    temp_num = stu_num[j]; // 학번 교체
                    stu_num[j] = stu_num[j + 1];
                    stu_num[j + 1] = temp_num;
                    temp_score = stu_score[j]; // 점수 교체
                    stu_score[j] = stu_score[j + 1];
                    stu_score[j + 1] = temp_score;
                }
            }
        }
        printf("이름       학번       점수\n");
        for (int m = 0; m < 20; m++)
        {
            printf("%-9s  %8d  %3d\n", name[m], stu_num[m], stu_score[m]);
        }
    }
    else if (num == 4){          /**********     4. 이름 검색     **********/
        printf("이름을 입력하세요.");
        scanf("%s", input_name);
        for (int i = 0; i < 20; i++)
        {
            if (strcmp(input_name, name[i]) == 0)
            {
                printf("이름       학번       점수\n");
                printf("%-9s  %8d  %3d\n", name[i], stu_num[i], stu_score[i]);
            }
        }
    }
    else if (num == 5){           /**********     5. 종료     **********/
        printf("----------프로그램을 종료합니다.----------");
    }
    else
        printf("잘못된 입력입니다.");
}

