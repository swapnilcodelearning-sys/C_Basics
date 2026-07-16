#include<stdio.h>
#include<stdint.h>

void function_1(void);
void function_2(int num);
int function_3(void);
int function_4(int num1, int num2);

int main(){
    function_1();
    function_2(5);
    int value = function_3();
    value = function_4(10,5);
    return 0;
}
void function_1(void){
    printf("Function without any return type or arguments\n");
}
void function_2(int num){
    printf("Function with no return type but with argument. Argument passed : %d\n",num);
}
int function_3(void){
    printf("Function with return type but no arguments. Return value of num1+num2 passed.\n");
    int sum = 0;
    int num1 = 3, num2 = 7;
    return num1+num2;
}
int function_4(int num1, int num2){
    printf("Function with return type and arguments. Returning sum of arguments.\n");
    return num1 + num2;
}

/*
1. Input the Radius of the circle from the user and find
the diameter, circumference, and area.

2. Write a C program to find the maximum and
minimum between two numbers using functions. (With
Arg, no return value)

3. Write a C program to check whether a number is even or odd
using functions

4. Write a C program to find cube of any number using function.
5. Write a Program to print the All Even Number in a given range.
6. Write a C program to find all prime numbers between given interval using functions.
7. Write a C program to print all Armstrong numbers between given interval using
functions
*/