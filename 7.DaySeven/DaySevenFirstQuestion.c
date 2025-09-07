//Write a program to input a year and check whether it is a leap year or not using conditional statements.


#include <stdio.h>

int main() {
    int a;
    printf("Input an Year\n");
    scanf("%d", &a);

    if ( a %4==0 && a%100 != 0 || a%400 ==0)
    {
      printf("The Year %d is a Leap Year",a);
    }else 
    {
      printf("The Year %d is not a Leap Year",a);
    }
 

    
    return 0;
}