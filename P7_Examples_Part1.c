#include<stdio.h>

void volume_calculator(void);
void denominator_calculator(int dollar_amount);
int main(){
    volume_calculator();
    denominator_calculator(93);
    return 0;
}

/*
Write a program that computes the volume of a sphere with a 10-meter radius, using the formula v = 4/3πr^3. 
Write the fraction 4/3 as 4.0f/3.0f. (Try writing it as 4/3. What happens?) 
*/
void volume_calculator(){
    float radius, volume;
    float multiplier = (4.0f/3.0f) * 3.14159f;

    printf("Enter value for radius of the sphere : ");
    scanf("%f", &radius);

    volume = multiplier * radius * radius *radius;
    printf("\nVolume : %f\n", volume);
}

/*
Write a program that asks the user to enter a U.S. dollar amount and then shows how to pay
that amount using the smallest number of $20, $10, $5, and $1 bills:
Enter a dollar amount: 93
$20 bills: 4
$10 bills: 1
 $5 bills: 0
 $1 bills: 3
*/
void denominator_calculator(int dollar_amount){
    if (dollar_amount < 0) {
        printf("\nInvalid Amount!!\n");
        return;
    }

    int temp = dollar_amount;
    
    int dollar_20 = temp / 20; 
    temp %= 20;
    
    int dollar_10 = temp / 10; 
    temp %= 10;
    
    int dollar_5  = temp / 5;  
    temp %= 5;
    
    int dollar_1  = temp;

    printf("\nDenomination for %d : \n",dollar_amount);
    printf("$20 : %d, $10 : %d, $5 : %d, $1 : %d\n\n",dollar_20,dollar_10,dollar_5, dollar_1);

}