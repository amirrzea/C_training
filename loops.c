# include <stdio.h>

int main(){


//While
    int i = 0;
    while (i<5)
    {
        printf("\n%d",i);
        i++;
    }
    


    int x=0;
    do
    {
       printf("\n%d", x);
       x++;
    } while (x<5);
    

// For
    for (i = 0; i < 5; i++)
    {
        printf("\n%d",i);
    }
    

// Break and Continue
    i=0;
    printf("\n\n");
    while (i<10)
    {
        if (i == 6){
            break;
        }
        printf("%d\n", i);
        i++;
    }
    

    printf("\n\n\n\n");
    i = 0;

    while (i < 10) {
    if (i == 4) {
        i++;
        continue;
    }
    printf("%d\n", i);
    i++;
    }   

    return 0;
}