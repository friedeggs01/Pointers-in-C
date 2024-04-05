#include<stdio.h>
int main() {
    int A[] = {2,4,5,8,1};
    printf("%d\n",A);
    printf("%d\n",&A[0]);
    printf("%d\n",A[0]);
    printf("%d\n",*A);
    // Address - &A[i] or (A+i)
    // Value - A[0] or *A
}