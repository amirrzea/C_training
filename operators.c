# include<stdio.h>
int main()
{
    int a  = 5;
    a +=5;
    a -=5;
    a *=5;
    a /=5;

    // returns 10
    printf("\n%d\n",a);
    

    printf("%d\n", a |=5);



    // Coparison
    int x =10;
    int y =12;

    printf("\n%d", x<y);
    printf("\n%d", x>y);
    printf("\n%d", x<=y);
    printf("\n%d", x!=y);


    // Logical Operators
    printf("\n\n%d", x < 5 &&  x < 10);
    printf("\n%d", !(x < 5 && x < 10));
    
    return 0;
}