#include<stdio.h>
void Double(int* A,int size) // "int* A" or "int A[]"  ... it's the same...
{
    int i, sum = 0;
    for(i=0;i < size; i++)
    {
    
        A[i] = 2*A[i];
    }
}
int main() 
{
    int A[] = {1,2,3,4,5};
    int siz = sizeof(A)/sizeof(A[0]);
    int i;
    Double(A,siz);
    for(i = 0;i<siz;i++){
        printf("%d ",A[i]);
    }
    return 0;
}