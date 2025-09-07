//Write a program to input time in seconds and convert it to hours:minutes:seconds format.

#include <stdio.h>

int main() {
    int a;
    printf("Input the number of seconds\n");
    scanf("%d", &a);

    printf("hours: %d minutes: %d seconds: %d" ,a/3600,  a%3600/60 ,a%3600%60  );

    return 0;
}