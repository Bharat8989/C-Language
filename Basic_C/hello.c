#include<stdio.h>

void even(int n);
void odd(int n);

void even(int n) {
    if(n %2 == 0) {
        printf("%d \n", n);
        odd(n-1);  // Calls odd()
    }
}

void odd(int n) {
    if(n % 2== 0) {
        printf("%d ", n);
        even(n-1); // Calls even()
    }
}

int main() {
    even(6);  // Start with an odd number
    //  odd(5);
    return 0;
}
