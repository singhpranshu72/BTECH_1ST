#include<stdio.h>
int main(){
int marks,attendance;
printf("Enter the marks and attendance: ");
scanf("%d%d",&marks,&attendance);
if(marks>=80){
    if(attendance>=75){
        printf("Eligible");
    }
    else{
        printf("not eligible");
    }
}
else{
     printf("not eligible,marks less");
}
}