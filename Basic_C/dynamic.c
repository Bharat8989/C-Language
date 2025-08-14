#include<stdio.h>
#include<stdlib.h>
int main(){
    //dynamic memory is allocated at runtime.
    //size can decided during execution.
    // allocated on the heap 
    //malloc()-> stand for memory allocations 
    int *ptr;
    int n=5;
    ptr=(int*) malloc(n * sizeof(int));
    for(int i=0;i<n;i++){
        ptr[i]=i+1;
    }
    //print value
    for(int i=0;i<n;i++){
        printf("%d ",ptr[i]);
    }
    return 0;
}