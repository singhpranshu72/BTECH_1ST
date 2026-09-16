#include <stdio.h>

int main()
{ 
 char name[18];
 printf("Enter your name: ");
 scanf("%s",name);

 int a,b,c;
 printf("Enter three marks \n");
 scanf("%d%d%d",&a,&b,&c);

 int age;
 printf("Enter age: ");
 scanf("%d",&age);

 printf("Name: %s \n",name);
 printf("Marks: %d %d %d\n",a,b,c);
 printf("Age: %d",age);
} 
