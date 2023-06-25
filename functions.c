# include<stdio.h>
// Create a function
void myFunction(); // declaration for defining the function at the end
int sum (int k);

int test(int x){
    return x*5;
}

int main() {
  myFunction(); // call the function

  printf("\n\n%d\n\n", test(3));

printf("%d", sum(10)) ;// Recursion Example
  return 0;
}


void myFunction() {
  printf("I just got executed!");
}


// Recursion Function
int sum(int k){
    if (k>0){
            return k + sum(k-1);
    }else{
            return 0;
    }
}