/*  This program showcases the use of pointers and addresses
    to change values for arrays and normal variables without returning
    anthing. It will also go over normal passing where the variable/array
    values will not change.
    
    This is valuable to know when you want to pass a variable
    and edit it wtihout needing to return it.
    
    If you are coding in C++, pass by reference is better because it
    is much easier to remember and understand. C doesn't have pass by
    reference and can only be emulated through pointers.
*/
#include <stdio.h>

void passingFunc(int num);
void passByAddress(int *num);
void passingArray(int* array);
void passingPointerArray(int** array);

int main()
{
    //Initialize num
    int num;
    num = 5;
    printf("Starting num: %d\n", num);
    
    //Pass the function, no change
    passingFunc(num);
    printf("Num after passing: %d\n", num);

    //Pass by address. changes
    passByAddress(&num);
    printf("Num after passing its address: %d\n", num);
    
    //Array initializing
    int* array;
    array[0] = 95;
    printf("Array first value: %d\n", array[0]);
    
    //Array Passing, no change
    passingArray(array);
    printf("Array after passing: %d\n", array[0]);
    
    //Array Passing by pointer, changes
    passingPointerArray(&array);
    printf("Array after passing by pointer: %d\n", array[0]);

    return 0;
}

//Pass the function, no change
void passingFunc(int num){
    num = 6;
}

//Pass by Address
void passByAddress(int *num){
    *num = 7;
}

//Passing array normally, no change
void passingArray(int* array){
    array = NULL;   
}

//Passing array by pointer, changes
void passingPointerArray(int** array){
    *array[0] = 96;
}
