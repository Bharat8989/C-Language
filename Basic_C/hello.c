#include<stdio.h>
int main(){
    //to check a person is eligible for vote or not 
    int age;
    printf("enter the your age:");
    scanf("%d",&age);
    if(age>=18){
        printf("you are eligible for the vote");
    }
    else{
        printf("not eligible for votes");
    }
    return 0;
    
}