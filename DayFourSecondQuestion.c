//Write a program to find and display the sum of the first n natural numbers.

#include <stdio.h>

int main() {
    int a;
    int b = 0;
    printf("Input the number of N natural number to be added\n");
    scanf("%d", &a);

    for (int i=0; i <=a ; i++){
      b += i;
    }
    printf("the sum of first %d natural numbers is %d",a,b);
    return 0;
}

