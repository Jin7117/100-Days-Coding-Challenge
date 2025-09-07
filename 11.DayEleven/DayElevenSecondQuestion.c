//Write a program to find profit or loss percentage given cost price and selling price.


#include <stdio.h>

int main() {
  float a,b;  
  int c;
    printf("Input Cost Price\n");
    scanf("%f", &a);
    printf("Input Selling Price\n");
    scanf("%f", &b);
    
    c = b-a;
    if(c > 0 ){
      printf("Your profit percentage is %f" , (c/a)* 100 );
    }else if(c < 0){
      printf("Your loss percentage is %f" , (c/a) * 100 );
    }
    else{
      printf("Your net percentage is 0" );

    }


    return 0;
}

