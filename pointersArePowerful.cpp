#include <iostream>

int main() {
    // Pointer Basics
    // Declare an integer variable 'a' and initialize it with the value 1
    int a = 1;

    // Declare a pointer 'p' as an integer and direct it to the value of 'a'.
    int* p = &a;

    // Print the address stored in 'p'.
    std::cout << "Address stored in p: " << p << std::endl;

    // Print the value of 'a' using 'p'.
    std::cout << "Value of a using p: " << *p << std::endl;

    // Change the value of 'a' using 'p'.
    *p = 0;

    // Print the new value of 'a'.
    std::cout << "New value of a: " << a << std::endl;



    // Pointer Arithmetic
    // Declare an array 'arr' of integers with 5 elements
    int arr[5] = {22, 31, 43, 49, 63};

    // Assign the address of the first element of 'arr' to new pointer 'q'
    int* q = arr;

    // Print the address of each element in the array using pointer arithmetic
    for (int i = 0; i < 5; i++) {
        std::cout << "Address of arr[" << i << "]: " << (q + i) << std::endl;
    }

    // Increment 'q' to traverse the array and print each value
    for (int i = 0; i < 5; i++) {
        std::cout << "Value at arr[" << i << "]: " << *(q + i) << std::endl;
    }

    return 0;
}
