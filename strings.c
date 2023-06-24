# include<stdio.h>
# include<string.h>

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
    char txt1[] = "We are the so-called \"Vikings\" from the north.";
    char txt2[] = "It\'s alright.";
    char txt3[] = "The character \\ is called backslash.";

    printf("\n"); // New Line
    printf("\t"); //Tab
    printf("\0"); // Null


    // String Library
    char alphabet[]="abcdefghijklmnopqrstuvwxyz";
    printf("%d\n\n", strlen(alphabet));

    //concatinate strings
    char str1[20]="Hello";
    char str2[]="World";
    strcat(str1,str2);
    printf("%s\n\n",str1);

    //copy string
    char cstr1[20]="Hello World";
    char cstr2[20];

    strcpy(cstr2,cstr1);
    printf("%s\n\n",str2);

    // Comparing two strings
    printf("%d\n", strcmp(cstr1,str2));
    return 0;
}