/*This program that takes user input 
  Name, age .... etc prints it.
  topics: datatypes and variables
*/
#include <stdio.h>

int main(){
    char name[50];  //Declares an array of characters to store a string (name)

    int age;        //Stores the user's age as an integer

    printf("Enter your Name: ");
    fgets(name, sizeof(name), stdin); //To capture full names, use fgets() instead.
    
    //scanf("%s", name); 
    //while (getchar() != '\n');             

    printf("Enter your age: ");
    scanf("%d", &age);              //The use of & to provide the address of the variable

    printf("Hello, %s! You are %d old.", name, age);

    return 0;
}