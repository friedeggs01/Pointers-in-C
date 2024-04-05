#include<stdio.h>
#include<string.h>
int main() {
    char C[5] = "JOHN";
    printf("Size in bytes = %d\n", sizeof(C));
    int len = strlen(C);
    printf("Length = %d\n", len);
    printf("String is %s", C);
    return 0;
}