#include<stdio.h>
#include<stdint.h>

int main(){

    uint32_t num1 = 10;
    uint32_t num2 = 3;

    //Arithmetic Operators
    printf("===Arithmetic Operators===\n");
    printf("%u + %u = %u\n",num1, num2, num1+num2);
    printf("%u - %u = %u\n",num1, num2, num1-num2);
    printf("%u * %u = %u\n",num1, num2, num1*num2);
    printf("%u / %u = %u\n",num1, num2, num1/num2);
    printf("%u %% %u = %u\n",num1, num2, num1%num2);
    
    //Relational Operators
    printf("\n\n===Relational Operators===\n");
    printf("%u > %u = %u\n",num1, num2, num1 > num2);
    printf("%u >= %u = %u\n",num1, num2, num1 >= num2);
    printf("%u < %u = %u\n",num1, num2, num1 < num2);
    printf("%u <= %u = %u\n",num1, num2, num1 <= num2);
    printf("%u == %u = %u\n",num1, num2, num1 == num2);
    printf("%u != %u = %u\n",num1, num2, num1 != num2);
    
    //Logical Operators
    printf("\n\n===Logical Operators===\n");

    printf("\n&& - True only if both operands are true\n");
    printf("(%u > %u) && (%u > %u) = %u\n", 2, 3, 1, 3, (2>3) && (1 > 3));
    printf("(%u > %u) && (%u > %u) = %u\n", 10, 3, 1, 3, (10>3) && (1 > 3));
    printf("(%u > %u) && (%u > %u) = %u\n", 1, 3, 5, 3, (1>3) && (5 > 3));
    printf("(%u > %u) && (%u > %u) = %u\n", 10, 3, 5, 3, (10>3) && (5 > 3));

    printf("\n\n|| - True only if either operand is true\n");
    printf("(%u > %u) || (%u > %u) = %u\n", 2, 3, 1, 3, (2>3) || (1 > 3));
    printf("(%u > %u) || (%u > %u) = %u\n", 10, 3, 1, 3, (10>3) || (1 > 3));
    printf("(%u > %u) || (%u > %u) = %u\n", 1, 3, 5, 3, (1>3) || (5 > 3));
    printf("(%u > %u) || (%u > %u) = %u\n", 10, 3, 5, 3, (10>3) || (5 > 3));


    //Ternary Operators
    printf("\n\n===Ternary Operators===\n");
    uint32_t var1 = 10, var2 = 3;
    (var1 > var2) ? printf("%u greater than %u\n\n",var1,var2) : printf("%u greater than %u\n\n", var1,var2);
    
}