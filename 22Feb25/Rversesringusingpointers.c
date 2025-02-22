/* Reverse a string using Pointers */
#include <stdio.h>
#include <string.h>

void reversestring(char *str){
    if (str == NULL) return; //Handle NULL case
    
    char *left = str;
    char *right = str + strlen(str) - 1;

    while(left < right){
        char temp = *left;
        *left = *right;
        *right = temp;

        left++;
        right--;
    }
}

int main(){
    char str[100];

    printf("Enter  a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0'; //Remove new line

    if(strlen(str) == 0){
        printf("Error : Empty string provided!\n");
        return 1; //Exit with error code
    } 

    reversestring(str);
    printf("Reversed string: %s\n", str);
    return 0;
}