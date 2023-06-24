#include<stdio.h>

void main(){

    int myAge =43;
    printf("%d", myAge);
    printf("\n%p",&myAge);

    int* ptr = &myAge; // this makes a pointer
    printf("\nThis is a value: %d", myAge);
    printf("\nThis is a address of a variable: %p", &myAge);
    printf("\nThis is a copy of the addreess: %p", ptr);


    printf("\n%d", *ptr);// this call value of the pointer


    int myNumbers[4] = {25, 50, 75, 100};

    // Change the value of the first element to 13
    *myNumbers = 13;

    // Change the value of the second element to 17
    *(myNumbers +1) = 17;

    // Get the value of the first element
    printf("\n%d\n", *myNumbers);

    // Get the value of the second element
    printf("%d\n", *(myNumbers + 1));

}