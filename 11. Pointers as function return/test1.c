#include<stdio.h>
#include<stdlib.h>
int Add(int a,int b){
    printf("Address of a in Add = %d\n", &a);
    int c=a+b;
    return c;
}
int main(){
    int a=2,b=4;
    printf("Address of a in main = %d\n", &a);
    // Call by value
    int c=Add(a,b);
    // value in a of main is copied to a of Add
    // value in b of maini is copied to b of Add
    printf("Sum = %d\n",c);
}