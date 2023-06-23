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
    printf("\nMy number is %d and my letter is %c", b, f);

    return 0;
}
