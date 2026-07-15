#include<stdio.h>
#include<stdint.h>

void swap_temp(uint32_t num1, uint32_t num2);
void swap_arithmetic(uint32_t num1, uint32_t num2);
void swap_xor(uint32_t num1, uint32_t num2);

int main(){
    swap_temp(10,3);
    swap_arithmetic(10,3);
    swap_xor(10,3);
}

void swap_temp(uint32_t num1, uint32_t num2){
    printf("Initial Values Variable 1 : %u, Variable 2 : %u\n",num1, num2);
    uint32_t temp = num1;
    num1 = num2;
    num2 = temp;
    printf("Swapped Values Variable 1 : %u, Variable 2 : %u\n",num1, num2);
}
void swap_arithmetic(uint32_t num1, uint32_t num2){
    printf("\n\nInitial Values Variable 1 : %u, Variable 2 : %u\n",num1, num2);
    num1 = num1 + num2;//num1 = 13; num2 = 3
    num2 = num1 - num2;//num2 = 10; num1 = 13
    num1 = num1 - num2;//num1 = 3; num2 =10
    printf("Swapped Values Variable 1 : %u, Variable 2 : %u\n",num1, num2);
}
void swap_xor(uint32_t num1, uint32_t num2){
    printf("\n\nInitial Values Variable 1 : %u, Variable 2 : %u\n",num1, num2);
    num1 = num1 ^ num2; //10^3 = 1010 ^ 0011 = 1001 = 9
    num2 = num1 ^ num2; // 1001 ^ 0011 = 1010 = 10
    num1 = num1 ^ num2; // 1001 ^ 1010 = 0011 = 3
    printf("Swapped Values Variable 1 : %u, Variable 2 : %u\n",num1, num2);
}