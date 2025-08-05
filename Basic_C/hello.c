#include<stdio.h>

void even(int n);
void odd(int n);

int main(){
    even(5);
    return 0;
}
void even(int n){
    if(n > 1){
        printf("%d",n);
        odd(n-1);
    }
}
void odd(int n){
    if(n>1){
        printf("%d",n);
        even(n-1);
    }
}