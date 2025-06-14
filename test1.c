#include <stdio.h>
void print_common_divisor_even(int number1, int number2) 
{
  int i;
  for(i=1; i<=number1; i++){
    if(number1%i==0 && number2%i==0){
      if(i%2!=0){
        printf("%d\n", i);
      }
    }
  }
}
void print_common_divisor_odd(int number1, int number2) 
{
  int i;
  for(i=1; i<=number1; i++){
    if(number1%i==0 && number2%i==0){
      if(i%2==0){
        printf("%d\n", i);
      }
    }
  }
}
void main(void) 
{
  int number1 = 12; // Example number 1
  int number2 = 18; // Example number 2

  printf("Common divisors of %d and %d (even): ", number1, number2);
  print_common_divisor_even(number1, number2); // Print common divisors for even numbers
  printf("\n");

  printf("Common divisors of %d and %d (odd): ", number1, number2);
  print_common_divisor_odd(number1, number2); // Print common divisors for odd numbers
  printf("\n");
  printf("Common divisors of %d and %d (all): ", number1, number2);

}