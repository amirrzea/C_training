# include<stdio.h>
int main(){

    // Defining a string
    char greetings[] = "Hello World";
    printf("%s\n\n",greetings);

    // accessing to a character in a string
    printf("%c\n\n",greetings[2]);

    // Loop through a string
    char carName[]="Mazda";
    for (int i = 0; i < 5; i++)
    {
        printf("%c ", carName[i]);
    }
    

    return 0;
}