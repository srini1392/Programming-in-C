#include <stdio.h>

int main() {

    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr; // Initialize pointer to the first element of the array
    int *ptr2 = arr + 3;

    printf("Value at ptr: %d\n", *ptr); // Output: 10
    printf("Value at ptr2: %d\n", *ptr2); // Output: 40

    //POINTER ADDITION
    ptr = ptr + 2; // Move pointer to the third element
    printf("Value at ptr after addition: %d\n", *ptr); // Output:30

    ptr2 = ptr2 + 1; // Move pointer to the fourth element
    printf("Value at ptr2 after addition: %d\n", *ptr2); // Output: 50

    //Pointer subtraction
    ptr = ptr -1; // Move pointer back to the second element
    printf("Value at ptr1 after subtraction: %d\n", *ptr); //
    
    
    printf("after subtraction: %ld\n", (ptr2 - ptr)); //

    return 0;
}