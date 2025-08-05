//1D array
#include<stdio.h>
int main(){
    int array[5];
    int i;
    int sum=0;
    printf("enter the element :");
    for( i=0;i<5;i++){
        scanf("%d",&array[i]);
        sum=sum+array[i];

    }
    printf("the element are:");
    for(i=0;i<5;i++){
        printf("%d ",array[i]);
    }
    printf("\nthe sum all elements:%d",sum);
    return 0;
}