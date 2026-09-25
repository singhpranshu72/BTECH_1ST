#include<stdio.h>
int main(){

int a=5,b=3;
printf("Enter + to add , - to subtract,...\n");
char ch;
scanf("%c",&ch);

switch(ch){
    case '+':printf("Addirtion of numvers is %d",a+b);break;
    case '-':printf("Subtraction of numvers is %d",a-b);break;
    case '*':printf("Multiply of numvers is %d",a*b);break;
    default: printf("Unknown input");
}
}