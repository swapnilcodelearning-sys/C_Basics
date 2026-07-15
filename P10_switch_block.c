/*
- WAP to print day of the week
- WAP to print number of days in a particular month.
- WAP to check if the given char is vowel or not.
- WAP to check which number is greater without using if or ternary operator
*/

#include<stdio.h>
#include<stdint.h>
void day_week(int day);
void vowel_checker(char ch);
void max_number_check(int num1, int num2);
int main(){

    return 0;
}

void day_week(int day){
    switch(day){
        case 1:
            printf("Monday!\n");
            break;
        
        case 2:
            printf("Tuesday!\n");
            break;

        case 3:
            printf("Wednesday!\n");
            break;
            
        case 4:
            printf("Thursday!\n");
            break;

        case 5:
            printf("Friday!\n");
            break;
        
        case 6:
            printf("Saturday!\n");
            break;

        case 7:
            printf("Sunday!\n");
            break;

        default:
            printf("Invalid input!!\n");
            break;
    }
}
void vowel_checker(char ch){
    switch(ch){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'O':
        case 'U':
        case 'I':
            printf("Vowel!!\n");
            break;
        default:
            printf("Either a consonant or Invalid Character!!\n");
            break;
    }
}
void max_number_check(int num1, int num2){
    if (num1 == num2) {
        printf("%d == %d\n", num1, num2);
        return;
    }
    int condition = num1 > num2;
    switch(condition){
        case 1:
            printf("%d > %d\n", num1, num2);
            break;
        case 0:
            printf("%d > %d\n", num2, num1);
            break;
        
    }
}