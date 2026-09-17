#include <stdio.h>

int main()
{ 
  int n=33;
  int c=n&1; // n%2
  if(c==0){
    printf("Number is even");
  }
  else{
    printf("Number is odd");
  }
  
} 
