#include <stdio.h>

int main()
{ 
char ch;
printf("Enter a character: ");
scanf("%c",&ch);

int p=( ch=='a' || ch=='e' ||ch=='i' ||ch=='o' ||ch=='u')?1:0;

printf("%d",p);
} 
