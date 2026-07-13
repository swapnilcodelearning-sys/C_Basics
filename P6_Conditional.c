#include<stdio.h>
#include<stdint.h>

int main(){

    uint32_t num1 = 10;
    uint32_t num2 = 3;
    if(num1 > num2){
        printf("%u greater than %u\n", num1, num2);
    }
    else if (num2 > num1){
        printf("%u greater than %u\n", num2, num1);
    }
    else{
        printf("Both numbers are equal!\n");
    }
    
    return 0;
}