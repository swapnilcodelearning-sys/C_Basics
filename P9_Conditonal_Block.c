#include<stdio.h>
#include<stdint.h>
void max_finder(uint32_t num1,uint32_t num2);
void min_finder(uint32_t num1,uint32_t num2);
void vowel_check(char ch);
void char_classify(char ch);

int main(){

    printf("\n");
    max_finder(10,3);
    printf("\n");
    min_finder(10,3);
    printf("\n");
    vowel_check('A');
    printf("\n");
    char_classify('0');
    return 0;
}

void max_finder(uint32_t num1,uint32_t num2){
    if(num1 > num2){
        printf("Maximum : %u\n", num1);
    }
    else if(num2 > num1){
        printf("Maximum : %u\n",num2);
    }
    else{
        printf("Both numbers are equal!\n");
    }
}

void min_finder(uint32_t num1,uint32_t num2){
    if(num1 > num2){
        printf("Minimum : %u\n", num2);
    }
    else if(num2 > num1){
        printf("Minimum : %u\n",num1);
    }
    else{
        printf("Both numbers are equal!\n");
    }
}

void vowel_check(char ch){
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
        printf("Vowel!!\n");
    }
    else{
        printf("Consonant!!\n");
    }
}

void char_classify(char ch){
    if(ch >='a' && ch >= 'z'){
        printf("Lower case!!\n");
    }

    else if(ch >='A' && ch >= 'Z'){
        printf("Upper case!!\n");
    }

    else if(ch >= '0' && ch <='9'){
        printf("Digits!!\n");
    }
    else{
        printf("Other characters!!\n");
    }
}