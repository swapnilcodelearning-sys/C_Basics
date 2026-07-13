#include<stdio.h>
#include<stdint.h>

int main(){

    uint32_t num1 = 10;
    uint32_t num2 = 3;

    printf("===Bitwise Operators==\n");

    // Bitwise AND 10 & 3 = 1010 & 0011 = 0010 = 2
    printf("%u & %u = %u\n",num1, num2, num1 & num2);

    //Bitwise OR 10 | 3 = 1010 | 0011 = 1011 = 11
    printf("%u | %u = %u\n",num1, num2, num1 | num2);

    //Bitwise XOR 10 ^ 3 = 1010 ^ 0011 = 1001 = 9
    printf("%u ^ %u = %u\n",num1, num2, num1 ^ num2);

    //Bitwise Left and Right Shift
    //Right Shift : 10 >> 2 = 1010 >> 2 = 0010 = 2 or 10 / 2^2 = 2
    //Left Shift : 10 << 2 = 1010 << 2 = 0010 1000 = 32 + 8 = 40 or 10 * 2^2 = 40
    printf("%u >> 2 = %u\n",10, 10 >> 2);
    printf("%u << 2 = %u\n",10, 10 << 2);

    //Set bit
    //10 | (1<<2) = 1010 | 0100 = 1110 = 14
    printf("Set bit %u on %u = %u\n", 2, 10, 10 | (1<<2));

    //Clear bit
    //10 & ~(1<<1) = 1010 & ~(1<<1) = 1010 & ~(0010) = 1010 & 1101 = 1000  = 8 
    printf("Clear bit %u on %u = %u\n", 1, 10, 10 & ~(1<<1));

    //Toggle bit
    //10 ^ (1 << 2) = 1010 ^ 0100 = 1110 = 14 
    printf("Toggle bit %u on %u = %u\n", 2, 10, 10 ^ (1<<2));
    
    //Check nth bit 
    // (10>>1) & 1 = (1010>1) & 1 = 0101 & 1 = 1. Bit is set.
    printf("Check bit %u on %u = %u\n", 1 , 10, (10>>1) & 1);

    //MSB
    //(10>>31) & 1 = 0 & 1 = 0. MSB
    printf("Check MSB for %u : %u\n", 10, (10>>31) & 1);

    //LSB
    //10 & 1= 1010 & 1 = 0. LSB
    printf("Check LSB for %u : %u\n", 10, 10 & 1);

}