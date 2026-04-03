#include <stdio.h>

void main () {
    const int a = 10; // 'a' is a constant integer
    // a = 20; // This will cause a compilation error because 'a' is read-only

    printf("The value of a is: %d\n", a);
    
    //pointer to a constant integer
    const int *ptr = &a;
    printf("The value of a is: %d\n", *ptr);
    printf("The value of ptr is: %p\n", ptr);


    //constant pointer to an integer
    int b =20;
    int *const ptr2 = &b;
    printf("The value of b is: %d\n", *ptr2);
    printf("The value of ptr2 is: %p\n", ptr2);

    //ptr2 = &a; // This will cause a compilation error because 'ptr2' is a constant pointer

    //constant pointer to a constant integer
    const int c = 30;
    const int *const ptr3 = &c;
    c =40; // This will cause a compilation error because 'c' is a constant integer
    *ptr3  = 40; // This will cause a compilation error because 'ptr3' is a pointer to a constant integer
    printf("The value of c is: %d\n", *ptr3);
    printf("The value of ptr3 is: %p\n", ptr3);







}

