/* Using Two pointer technique */
#include <stdio.h>
#include <string.h>

void reversestring(char str[]){
    int left = 0, right = strlen(str) - 1; //two pointers

    while (left < right){
        //Swap characters
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;

        //Move pointers
        left++;
        right--;
    }
}

int main(){
    char str[100];

    //Taking user input 
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    //Remove the string 
    reversestring(str);

    printf("Reversed stirng: %s\n", str);

    return 0;
}