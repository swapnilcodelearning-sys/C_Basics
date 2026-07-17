#include<stdio.h>
#include<stdint.h>
#define pi 3.14f

void function_1(void);
void function_2(int num);
int function_3(void);
int function_4(int num1, int num2);
void area_circle(void);
void max_min_finder(int num1, int num2);
void cube_number(int num1);
void even_odd_check(int num1);

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
void area_circle()
{
    int radius, diameter;
    float circumference, area;
    printf("Enter radius of circle : ");
    scanf("%d", &radius);
    if(radius > 0){
        diameter = 2*radius;
        circumference = 2*pi*radius;
        area = pi*radius*radius;
        printf("Diameter : %d\nCircumference : %0.2f\nArea : %0.2f\n",diameter,circumference,area);
    }
}
void max_min_finder(int num1, int num2){
    if(num1 > num2){
        printf("Max : %d, Min: %d\n",num1, num2);
    }
    if(num1 < num2){
        printf("Max : %d, Min: %d\n",num2, num1);
    }
    else{
        printf("Numbers are equal!");
    }
}
void cube_number(int num1){
    printf("Cube of %d = %d\n",num1, num1*num1*num1);
}
void even_odd_check(int num1){
    if(num1%2 == 0){
        printf("Even");
    }
    else{
        printf("Odd");
    }
}