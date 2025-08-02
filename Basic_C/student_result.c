//write a program to check student result using the if else if ladder
#include <stdio.h>
void main(){
    int marks;
    printf("enter your marks:");
    scanf("%d",&marks);
    if(marks>=90){
        printf("A");
    }
    else if(marks>=70){
        printf("B");
    }
    else if(marks>=50)
    {
        printf("C");
    }
    else{
        printf("Fail");
    }
    // return 0;
}