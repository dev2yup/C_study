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

# include <stdio.h>
int main(void)
{
int grade=150; 
if(0<=grade&&grade<=100)
    {
    if(grade<60)
        printf(" 불합격입니다.\n");
    }
else
    printf("잘못된 점수입니다.\n");
return 0; 
}
