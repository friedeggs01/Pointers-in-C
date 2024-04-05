#include<stdio.h>
void print(char* a)
{
    int i=0;
    while(*a != '\0')
    {
        printf("%c", *a);
        a++;
    }
    printf("\n");
}
int main() 
{
    //char C[20] = "Bello"; // string gets stored in the space for array
    char* C = "Bello"; // string gets stored as complie time constant 
    print(C);
}
