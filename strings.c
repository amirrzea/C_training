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
    
    // Special characters -> ' , " , 
    char txt[] = "We are the so-called \"Vikings\" from the north.";
    char txt[] = "It\'s alright.";
    char txt[] = "The character \\ is called backslash.";

    printf("\n"); // New Line
    printf("\t"); //Tab
    printf("\0"); // Null
    return 0;
}