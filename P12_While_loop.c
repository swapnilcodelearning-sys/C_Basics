#include<stdio.h>
#include<stdint.h>
#include<stdbool.h>
void letter_print(void);
void table_of_five(void);
void check_prime(int num);
void menu_driven(void);
int main()
{

    return 0;
}
void letter_print(){
    char ch = 'a';
    while(ch >= 'a' && ch <= 'z'){
        printf("%c ",ch);
        ch++;
    }
}
void table_of_five(){
    int multiplier = 1;
    while(multiplier <= 10){
        printf("%d ", 5*multiplier);
        multiplier++;
    }
    printf("\n");
}
void check_prime(int num){
    int i = 2;
    bool isPrime = true;
    while(i < num){
        isPrime = true;
        if(num %i == 0){
            i++;
            isPrime = false;
            break;
        }
        i++;
    }
    if(isPrime){
        printf("Prime number");
    }
    else{
        printf("Not a prime number");
    }
}
void menu_driven(void){
    // Write C code here
    int num1, num2, choice;
    do{
        printf("Select from the following options: \n1)Addition\n2)Subtraction\n3)Multiplication\n4)Division\n5)Modulus\n-1 to Quit\n\nChoice : ");
        scanf("%d",&choice);
        
        if(choice == -1){
            break;
        }
        
        switch(choice){
            case 1:
                printf("\nAddition Operation\n");
                printf("\nEnter first variable :");
                scanf("%d",&num1);
                printf("\nEnter second variable :");
                scanf("%d",&num2);
                
                printf("%d + %d = %d\n", num1, num2, num1 + num2);
                break;
                
            case 2:
                printf("\nSubtraction Operation\n");
                printf("\nEnter first variable :");
                scanf("%d",&num1);
                printf("\nEnter second variable :");
                scanf("%d",&num2);
                
                printf("%d - %d = %d\n", num1, num2, num1 - num2);
                break;
                
            case 3:
                printf("\nMultiplication Operation\n");
                printf("\nEnter first variable :");
                scanf("%d",&num1);
                printf("\nEnter second variable :");
                scanf("%d",&num2);
                
                printf("%d * %d = %d\n", num1, num2, num1 * num2);
                break;
                
            case 4:
                printf("\nDivision Operation\n");
                printf("\nEnter first variable :");
                scanf("%d",&num1);
                printf("\nEnter second variable :");
                scanf("%d",&num2);
                
                printf("%d / %d = %d\n", num1, num2, num1 / num2);
                break;
            case 5:
                printf("\nModulo Operation\n");
                printf("\nEnter first variable :");
                scanf("%d",&num1);
                printf("\nEnter second variable :");
                scanf("%d",&num2);
                
                printf("%d %% %d = %d\n", num1, num2, num1 % num2);
                break;
            default:
                printf("Invalid selection\n");
                break;
        }
        printf("\n\n");
        
    }while(choice!= -1);
    printf("Goodbye!!\n");
}