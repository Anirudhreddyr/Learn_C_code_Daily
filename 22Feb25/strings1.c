/* Taking string input */
#include <stdio.h>
 int main(){
    char name[50];

    printf("Enter your Name: ");
    fgets(name, sizeof(name), stdin);
    // scanf("%s", name); // only read first word (stops at space)
    printf("Hello, %s!\n", name);

    return 0;
 }