#include<stdio.h>
int main(){
    //find the datatypes size 
    int a;
    float b;
    double c;
    char d;
    void *e;
    printf("size of int :%d bytes\n",sizeof(a));
    printf("size of float :%f bytes\n",sizeof(b));

    printf("size of double :%ld bytes\n",sizeof(c));
    printf("size of char :%c bytes\n",sizeof(d));
    return 0;
    
}