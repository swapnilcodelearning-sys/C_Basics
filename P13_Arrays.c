/*
1. Write a C program to find sum of all array elements. 
2. C program to declare, initialize, input and print array elements
3. Write a C program to find maximum and minimum element in an array.
4. Write a C program to count total number of even and odd elements in an array

5. Write a C program to delete an element from an array at specified position.
6. Write a C program to count frequency of each element in an array.
7. Write a C program to merge two array to third array.
8. Write a C program to delete all duplicate elements from an array
9. Write a C program to sort array elements in ascending or descending order.

10. Print 2-D array in matrix form
11. Addition, Subtraction, Multiplication
12. check matrix are equal or not.
13. Sum of main diagonal element.
14. transpose
*/

#include<stdio.h>
#include<stdint.h>
#include <string.h>
void print_array(int arr[], int size);
void array_sum(int arr[],int size);
void min_max_array(int arr[], int size);
void count_odd_even(int arr[], int size);
void frequency_counter(int arr[], int size);
void delete_element(int arr[], int size, int index);
void add_element(int arr[], int size, int index, int value);
void sort_array(int arr[], int size);
void recursive_print(int arr[], int size);
void D2_Array(int arr[][], int brr[][]);
void D2_Multiplication(void);
int main(){
    int arr[] = {10,23,14,10,34,23,90, 90,105, 501, 1024, 14};
    frequency_counter(arr, sizeof(arr)/sizeof(arr[0]));
    return 0;
}

void print_array(int arr[], int size){
    for(int i = 0; i < 5;i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n\n");
}
void array_sum(int arr[], int size){
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum += arr[i];
    }
    printf("Sum of array = %d\n\n",sum);
}
void min_max_array(int arr[], int size){
    int max = arr[0], min = arr[0];

    for(int i = 1; i < size; i++){
        if(arr[i] > max){
            max  = arr[i];
        }
        if(arr[i] < min){
            min = arr[i];
        }
    }
    printf("Max : %d, Min : %d\n",max, min);
}
void count_odd_even(int arr[], int size){
    int odd = 0, even = 0;

    for(int i = 0; i < size; i++){
        if(arr[i]%2 == 0){
            even++;
        }
        else{
            odd++;
        }
    }
    printf("Number of Odd elements : %d, Even elements : %d\n", odd, even);
}
void frequency_counter(int arr[], int size){
    // Track visited indices using a variable-length array
    int visited[size];
    
    // Safely initialize the entire array to 0
    memset(visited, 0, sizeof(visited));

    printf("Element | Frequency\n");
    printf("-------------------\n");
    
    for (int i = 0; i < size; i++) {
        // If this element was already counted as a duplicate, skip it
        if (visited[i] == 1) {
            continue;
        }

        int count = 1;
        // Search forward in the array for duplicates
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
                visited[j] = 1; // Mark the duplicate index as visited
            }
        }
        
        printf("   %3d  |    %d\n", arr[i], count);
    }
}
void delete_element(int arr[], int size, int index){
    for(int i = index ; i < size ; i++){
        arr[i] = arr[i+1];
    }


}
void add_element(int arr[], int size, int index, int value){
    for(int i = size; i > index; i--){
        arr[i] = arr[i-1];
    }
    arr[index] = value;
    
    for(int i = 0; i < size; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
void sort_array(int arr[], int size){
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            if(arr[i] > arr[j]){
                arr[i] = arr[i] ^ arr[j];
                arr[j] = arr[i] ^ arr[j];
                arr[i] = arr[i] ^ arr[j];
            }
        }
    }

    for(int i = 0; i < size; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
void recursive_print(int arr[], int size){
    if(size <=0){
        return;
    }
    recursive_print(arr, size - 1);
    printf("%d", arr[size-1]);
}
void D2_Array(int arr[][3], int brr[][3]){
    //Basic Print
    for(int i = 0; i <3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    //Transpose
    printf("\n\n");
    for(int i = 0; i <3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }
    //Addition
    printf("\n\n");
    for(int i = 0; i <3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ", arr[i][j] + brr[i][j]);
        }
        printf("\n");
    }
}
void D2_Multiplication(void){

    int arr[3][2]={{19,40}, {45,21}, {76,54}};
    int brr[2][3]={{19,40,55}, { 45,21,90}};
    int crr[3][3]={0};

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            for(int k = 0; k < 2; k++){
                crr[i][j] += (arr[i][k]*brr[k][j]);
            }
        }
    }

    for(int i = 0; i <3 ; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ", crr[i][j]);
        }
        printf("\n");
    }
}