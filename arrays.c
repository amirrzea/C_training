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
        printf("\n%d",myNumbers[i]);
    }
    

    // Another way of defining array
    int myNumber2[5];
    
    return 0;
}