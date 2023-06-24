# include <stdio.h>

int main(){

    //arrays

    int myNumbers[]={25,50,75,100};
    printf("%d", myNumbers[3]);

    //changing the array
    myNumbers[3]=55;
    printf("\n%d\n\n",myNumbers[3]);


    //Loop through th array
    for (int i = 0; i < 4; i++)
    {
        printf("\n%d\n",myNumbers[i]);
    }
    

    // Another way of defining array
    int myNumber2[5];


    // Two-dimentional Arrays
    int matrix[2][3] = {{1,3,4}, {6,8,10}};

    // Loop through the 2D array
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\n", matrix[i][j]);
        }
        
    }
    


    return 0;
}