# include<stdio.h>
void main(){
    // example of write in a fil
    FILE *fptr;
    fptr = fopen("filename.txt","a");// It could be in either r(read),w(write) or a(append) mode
    fprintf(fptr, "\n Some World23");
    fclose(fptr);



    // example of reading a file
    FILE *fptr2;
    fptr2 = fopen("filename.txt","r");
    
    char myString[100];

    while (fgets(myString, 100, fptr2))// to read all lines use while otherwise this just reads the first line
    {
        printf("%s", myString);
    }

    fclose(fptr2);
    
}