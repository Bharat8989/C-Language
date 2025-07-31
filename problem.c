#include<stdio.h>
int main(){
    int a=10,b=20;
    int *ptr;

    ptr=add(a,b);
    printf("%d",*ptr);
// printf("%u",main);
    return 0;
}
int *add(int x ,int y){
    int sum;
    sum = x + y;
    // printf("Sum is: %d\n", sum);
    return &sum;
}