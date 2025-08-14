//sum of two array
#include<stdio.h>
int main(){
    int array1[]={12,12};
    int array2[]={23,21};
    int sum[2];
    int i;
    for(i=0;i<2;i++){
        sum[i]=array1[i]+array2[i];
    }
    printf("the additions of array:");
    for(i=0;i<2;i++){
        printf("%d ",sum[i]);
    }
    return 0;
}

