#include<stdio.h>

int main (){

    int time= 20;
    if (time<12)
    {
        printf("good morning\n");
    } else
    {
        printf("good afternoon\n");
    }


    time = 13;
    if (time<12)
    {
        printf("Good Morning\n");
    } else if(time<18)
    {
        printf("Good Afternoon\n");
    } else {
        printf("Good Evening\n");
    }

    // short if else
    (time < 18) ? printf("good afternoon\n") : printf("good evening\n");


    //switch
    int day=1;
    switch (day)
    {
    case 1:
        printf("Today is Sunday\n");
        break;
    case 2:
        printf("Today is Monday\n");
        break;
    case 3:
        printf("Today is Tuesday\n");
        break;
    case 4:
        printf("Today is Wednesday\n");
        break;
    case 5:
        printf("Today is Thursday\n");
        break;
    case 6:
        printf("Today is Friday\n");
        break;
    case 7:
        printf("Today is Saturday\n");
        break;
    
    default:
        printf("Invalid");
        break;
    }

    return 0;
}