#include<stdio.h>
int main() {
    int x = 5;
    int* p = &x;
    *p = 6;
    int** q = &p;
    int*** r = &q;
    printf("%d\n",*p); //6
    printf("%d\n",*q); 
    printf("%d\n",**q);
    printf("%d\n",**r);
    printf("%d\n",***r);
}