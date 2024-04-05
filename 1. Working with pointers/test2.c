#include<stdio.h>
int main() {
    int a=10;
    int* p;
    p=&a;
    printf(" Address p is %d\n",p);
    printf(" Address p+1 is %d\n",p+1);
    printf("Size of integer is %d bytes\n",sizeof(int));
    printf("Value at address p is %d\n",*p);
    printf("Value at address p+1 is %d\n", *(p+1));
    return 0;
}