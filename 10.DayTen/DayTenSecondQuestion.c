//Write a program to display the day of the week based on a number (1–7) using switch-case.

#include <stdio.h>

int main() {
    int a;
    printf("Input your number\n");
    scanf("%d", &a);

    switch(a){
case 1: printf("Today is Monday");
break;
case 2: printf("Today is Tuesday");
break;
case 3: printf("Today is Wednesday");
break;
case 4: printf("Today is Thrusday");
break;
case 5: printf("Today is Friday");
break;
case 6: printf("Today is Saturday");
break;
case 7: printf("Today is Sunday");
break;
 default:printf("Please enter a value between 1-7");
    }

    return 0;
}



 