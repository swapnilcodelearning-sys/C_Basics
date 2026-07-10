#include<stdio.h>
#include<stdint.h>

int main(){

    char fname[20], lname[20];
    int age;
    float weight;

    printf("Enter your first and last name : ");
    scanf("%s%s",fname, lname);

    printf("\nEnter your age : ");
    scanf("%d", &age);

    printf("\nEnter your weight : ");
    scanf("%f",&weight);

    printf("\n\nHello %s %s, Age : %d, Weight : %f\n",fname, lname, age, weight);
    
    return 0;
}