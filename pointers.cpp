/*  This program showcases the use of pointers, references, and addresses
    to change values for arrays and normal variables without returning anthing.
    It will also go over normal passing where the variable/array
    values will not change.
    
    This is valuable to know when you want to pass a variable
    and edit it wtihout needing to return it.
    
    I recommend passing by reference because it is much easier to
    remember and understand.
*/

#include <iostream>
#include <string>

using std::cout;
using std::endl;

void passingFunc(int num);
void passByAddress(int *num);
void passByRef(int &num);
void passingArray(int* array);
void passingPointerArray(int** array);
void passingRefArray(int* &array);

int main()
{
    //Initialize num
    int num;
    num = 5;
    cout << "Starting num: " << num << endl;
    
    //Pass the function, no change
    passingFunc(num);
    cout << "Num after passing: " << num << endl;

    //Pass by address. changes
    passByAddress(&num);
    cout << "Num after passing its address: " << num << endl;
    
    //Pass by reference, changes
    passByRef(num);
    cout << "Num after passing by reference: " << num << endl;
    
    //Array initializing
    int* array;
    array[0] = 95;
    cout << "Array first value: " << array[0] << endl;
    
    //Array Passing
    passingArray(array);
    cout << "Array after passing: " << array[0] << endl;
    
    //Array Passing by pointer
    passingPointerArray(&array);
    cout << "Array after passing by pointer: " << array[0] << endl;
    
    //Array Passing by reference
    passingRefArray(array);
    cout << "Array after passing by reference: " << array[0];

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

//Pass by reference, changes
void passByRef(int &num){
    num = 8;
}

//Passing array normally, no change
void passingArray(int* array){
    array = NULL;   
}

//Passing array by pointer, changes
void passingPointerArray(int** array){
    *array[0] = 96;
}

//Passing array by reference, changes
void passingRefArray(int* &array){
    array[0] = 97;
}