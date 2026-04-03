#include <stdio.h>
#include <pthread.h>

volatile int stop = 0; //shared flag

void * worker(void * arg){
    while(!stop){
        //do some work
    }
    printf("Worker Stopped.\n");
    return NULL;
}

void main(){


    pthread_t t;
    pthread_create(&t, NULL, worker, NULL);

    //simulate some delay
    // sleep (1);

    stop = 1; // signal the worker to stop
    pthread_join(t, NULL);


    int a = 10, b = 20;
    const int c = 30; //constant integer


    //pointer to volatile int
    volatile int *ptr = &a;
    printf("Value pointed by ptr: %d\n", *ptr);
    printf("Value of ptr: %p\n", ptr);
    
    //volatile pointer to int
    int *volatile ptr2 = &b;
    printf("Value pointed by ptr2: %d\n", *ptr2);
    printf("Value of ptr2: %p\n", ptr2);
    
    //pointer to const volatile int
    const volatile int *ptr3 = &c;
    // *ptr3 = 40; //error: assignment of read-only location
    printf("Value pointed by ptr3: %d\n", *ptr3);
    printf("Value of ptr3: %p\n", ptr3);







    //return 0;
}