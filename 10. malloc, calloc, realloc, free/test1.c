#include<stdio.h>
#include<stdlib.h>
int main() {
    int n;
    printf("Enter size of array\n");
    scanf("%d",&n);
    int *A = (int*)malloc(n*sizeof(int));
    for(int i = 0;i<n;i++)
    {
        A[i] = i+1;
    }
    free(A);
    A=NULL; // After free, adjust pointer to NULL
    
    for(int i=0;i<n;i++) 
    {
        printf("%d ",A[i]);
    }
}