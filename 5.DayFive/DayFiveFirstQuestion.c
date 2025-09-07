// Write a program to calculate simple and compound interest for given principal, rate, and time.

#include <stdio.h>
#include <math.h>

int main()
{
  int a,b,c,d;
  printf("Input Principal amount\n");
  scanf("%d", &a);
  printf("Input Rate\n");
  scanf("%d", &b);  
  printf("Input Time (in years)\n");
  scanf("%d", &c);
  printf("Input Number of times interest is compounded per year\n");
  scanf("%d", &d);
  printf(" Simple Interest = %.2f Compound Interest = %.2f", a*b*c/100.0 ,  a * pow((1 + b / (100.0 * d)), d * c) - a);

  return 0;
}
