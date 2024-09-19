#include <stdio.h>

int main(){
    char a, b;
    a = -76;
    b = ~(!a);
    printf("%d\n", b);
}