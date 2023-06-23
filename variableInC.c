#include <stdio.h>

int main()
{
    // Variables definition
    int a=0;
    int b;
    float c=2.3;
    float d;
    char e='A';
    char f;

    

    // Assigning
    b = 10;

    // Add variable together
    int sum = a + b;

    // Copying
    b = a;

    int x = 5, y = 6, z = 50;
    printf("%d\n", x + y + z);


    x = y = z = 50;
    printf("%d\n", x + y + z);

    // Printing variables
    printf(" %d \n %d \n %f \n %f \n %c \n %c", a, b, c, d=4.5, e, f='B');
    printf("\nMy favorite number is: %d", a);
    printf("\nMy number is %d and my letter is %c\n", b, f);



    float myFloatNum = 3.5;

    printf("%f\n", myFloatNum); // Default will show 6 digits after the decimal point
    printf("%.1f\n", myFloatNum); // Only show 1 digit
    printf("%.2f\n", myFloatNum); // Only show 2 digits
    printf("%.4f\n\n", myFloatNum);   // Only show 4 
    


    // Automatic conversion: int to float
    float myFloat = 9;
    printf("%f\n", myFloat); // 9.000000

    // Manual conversion: int to float
    int num1 = 5;
    int num2 = 2;
    float sum1 = (float) num1 / num2;
    printf("%.1f", sum1); // 2.5


    // If you don't want others (or yourself) to change existing variable values, you can use the const keyword
    // This will declare the variable as "constant", which means unchangeable and read-only
    const int minutesPerHour = 60;
    const float PI = 3.14;



    return 0;
}
