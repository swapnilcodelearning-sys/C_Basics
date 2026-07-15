/*
- WAP to print numbers in range
- WAP to print numbers in range but reverse
- WAP to find sum.
- WAP to find even numvers in range
- WAP to find odd numbers in range
- WAP to find factors of a number.
- WAP to find factorial of a number
- WAP to reverse a number and check palindrome.
- WAP to find fibonacci
- WAP to print patterns
- WAP to print prime numbers
- WAP to find if the given number is armstrong number.
- WAP to find if number is perfect
- WAP to print triangles
- WAP to print pascal triangles
- WAP to print min, max in range.
*/

#include<stdio.h>
#include<stdint.h>
#include<math.h>
#include <stdbool.h>
void print_numbers_in_range(uint32_t range);
void print_reverse_range(uint32_t range);
void sum_numbers_range(uint32_t range);
void print_even_numbers(uint32_t range);
void print_odd_numbers(uint32_t range);
void factorial(uint32_t num);
void factors(uint32_t num);
void palindrome_check(uint32_t num);
void fibonnaci(uint32_t range);
void patterns(void);
void print_prime(uint32_t range);
void armstrong_number(uint32_t num);

int main(){
    print_numbers_in_range(10);
    print_reverse_range(10);
    sum_numbers_range(50);
    print_even_numbers(50);
    print_odd_numbers(50);
    factorial(5);
    factors(56);
    palindrome_check(343);
    fibonnaci(10);
    patterns();
    print_prime(100);
    armstrong_number(143);
}
void print_numbers_in_range(uint32_t range){
    printf("Numbers in range %hu: \n",range);
    for(uint32_t i = 1; i<=range; i++){
        printf("%u ",i);
    }
    printf("\n\n");
}
void print_reverse_range(uint32_t range){
    printf("Numbers in range reverse %hu: \n",range);
    for(uint32_t i = range; i>0; i--){
        printf("%u ", i);
    }
    printf("\n\n");
}
void sum_numbers_range(uint32_t range){
    uint32_t sum = 0;
    for(uint32_t i = 1; i <= range; i++){
        sum += i;
    }
    printf("Sum : %u\n\n",sum);
}
void print_even_numbers(uint32_t range){
    printf("\n\nEven numbers : \n");
    for(uint32_t i = 1; i <= range; i++){
        if(i % 2 == 0){
            printf("%u ",i);
        }
    }
    printf("\n");
}
void print_odd_numbers(uint32_t range){
    printf("\n\nOdd numbers : \n");
    for(uint32_t i = 1; i <= range; i++){
        if(i % 2 != 0){
            printf("%u ",i);
        }
    }
    printf("\n");
}
void factorial(uint32_t num){
    uint32_t factorial = 1 ;
    for(uint32_t i = 1; i <= num; i++){
        factorial *= i;
    }
    printf("\n\nFactorial of %u : %u",num,factorial);
}

void factors(uint32_t num){
    printf("Factors of %u : ", num);
    for(uint32_t i = 1; i <= num; i++){
        if(num % i== 0){
            printf("i ");
        }
        printf("\n");
    }
}
void palindrome_check(uint32_t num){
    uint32_t temp = num;
    uint64_t sum = 0; //Avoid overflow for large values of num
    uint32_t i = 0;
    while(temp != 0){
        sum = sum * 10 + temp % 10;
        //343
        //0*10 + 3 = 3
        //3*10 + 4 = 34
        //34*10 + 3 = 343
        temp = temp /10;
        i++;
    }
    num == sum ? printf("Palindrome Number") : printf("Not a palindrome!!");
}
void fibonnaci(uint32_t range){
    uint32_t num1 = 0, num2 = 1;
    printf("\n\nFibonacci Sequence :\n");
    printf("%u %u",num1,num2);

    for(uint32_t i = 1; i < range, i++){
        int temp = num2;
        num2 = num1 + num2;
        num1 = temp;
        printf("%u ",num2);
    }
    printf("\n");
}

void patterns(void){

    printf("\n\nPatterns :\n");
    //5x5
    for(uint32_t i = 0; i < 5; i++){
        for(uint32_t j = 0; j < 5; j++){
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");
    //5-4-3-2-1
    printf("\n\n");
    for(uint32_t i = 0; i < 5; i++){
        for(uint32_t j = 0; j < 5-i; j++){
            printf("* ");
        }
        printf("\n");
    }
    //1-2-3-4-5
    printf("\n\n");
    for(uint32_t i = 0; i < 5; i++){
        for(uint32_t j = 0; j < i+1; j++){
            printf("* ");
        }
        printf("\n");
    }
    printf("\n\n");
for(int i = 0 ; i < 5; i ++){
    for(int k = 0; k < i;k++)
    {
        printf("  ");
    }
    for(int j = 0; j <5-i; j++){
        printf("* ");
    }
    printf("\n");
}

printf("\n\n");
for(int i = 0 ; i < 5; i ++){
    for(int k = 0; k < 5-(i+1);k++)
    {
        printf("  ");
    }
    for(int j = 0; j <i+1; j++){
        printf("* ");
    }
    printf("\n");
}

printf("\n\n");
for(int i = 0 ; i < 5; i ++){
    for(int k = 0; k < 5-i;k++)
    {
        printf(" ");
    }
    for(int j = 0; j <i+1; j++){
        printf("* ");
    }
    printf("\n");
}

}
void print_prime(uint32_t range){
     printf("Prime numbers between 1 and %u:\n",range);

    // Loop through numbers 2 to 100 (1 is not a prime number)
    for (int i = 2; i <= 100; i++) {
        bool is_prime = true;

        // Check for factors up to the square root of i (j * j <= i)
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                is_prime = false; // Found a factor, so it's not prime
                break;            // No need to check further factors
            }
        }

        // If no factors were found, it's prime
        if (is_prime) {
            printf("%d ", i);
        }
    }
    printf("\n");
}
void armstrong_number(uint32_t num){
    uint32_t sum = 0;
    uint32_t temp = num;
    uint32_t number_of_digits = 0;
    while(temp != 0){
        number_of_digits++;
        temp = temp/10;
    }
    temp = num;
    while(temp != 0){
        uint32_t subtotal = 1;
        uint32_t var = temp%10;
        for(uint32_t j = 0; j < number_of_digits; j++){
            subtotal *= var;
        }
        sum += subtotal;
        temp = temp/10;
    }
    if(sum == num){
        printf("Armstrong Number!!");
    }
    else{
        printf("Not an Armstrong Number!");
    }
}