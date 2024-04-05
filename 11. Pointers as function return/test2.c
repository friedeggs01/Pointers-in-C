#include<stdio.h>
#include<stdlib.h>
int Add(int* a,int* b){
    // a and b pointer to integers local to Add
    printf("Address of a in Add = %d\n", &a);
    printf("Value in a of Add (address of a of main) = %d\n",a);
    printf("Value at address stored in a of Add = %d\n",*a);
    int c=(*a)+(*b);
    return c;
}
int main(){
    int a=2,b=4;
    printf("Address of a in main = %d\n", &a);
    // Call by reference
    int c=Add(&a,&b);
    // a and b are integers local to Main
    printf("Sum = %d\n",c);
}