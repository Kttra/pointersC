# Pointers, Addresses, and References in C++ & C
A C++ & C program showing how to pass variables and arrays (pass by pointers, reference, and normal passing). This program showcases the use of pointers, references, and addresses
to change values for arrays and normal variables without returning anthing.
It will also go over normal passing where the variable/array
values will not change.

This is valuable to know when you want to pass a variable through a function
and edit it wtihout needing to return it. I would recommend passing by reference because it is much easier to
remember and understand (only possible in C++).

In each of the functions, we change the value. However, the value may or may not change depending on how the function is passed to the function. This program covers which types of passing their there.
```
Starting num: 5
Num after passing: 5
Num after passing its address: 7 
Num after passing by reference: 8
Array first value: 95
Array after passing: 95
Array after passing by pointer: 96
Array after passing by reference: 97
```
