#include <stdio.h>

int main()
{ 
 int a;
 printf("Enter a number: ");
  scanf("%d", &a);

  int last_digit=a%10;
  a=a/10;
  int middle_digit=a%10;
  a=a/10;
  int first_digit=a%10;

  printf("1st digit is %d, 2nd digit is %d,3rd digit is %d",first_digit,middle_digit,last_digit);


} 
