/*Accessing structure Members using dot operator*/
#include <stdio.h>
#include <string.h>

//Define Structure 
struct student {
    char name[50];
    int age;
    float marks;
};

int main(){
    struct student student1; //Declare structure variable

    //Assign values
    student1.age =  20;
    student1.marks = 80.6;
    strcpy(student1.name, "Anirudh Reddy");

    // Access & print values
    printf("Name: %s\n", student1.name);
    printf("Age: %d\n", student1.age);
    printf("Marks: %.2f\n", student1.marks);

    return 0; 
}

