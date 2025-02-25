#include <stdio.h>
#include <string.h>

//Define Structure
struct student{
    char name[50];
    int age;
    float marks;
};

int main(){
    struct student students[3]; //Array of 3 elements
    
    //Input student details
    for(int i = 0; i < 3; i++){
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0'; //Remove new line

        printf("Age: ");
        scanf("%s", &students[i].age);

        printf("Marks: ");
        scanf("%f", &students[i].marks);
        getchar(); //clear new line left in buffer after scanf
    }

    //Display student details
    printf("\n Student Records \n");
    for(int i = 0; i < 3; i++){
        printf("Student : %d,Name: %s,Age : %d,Marks : %.2f\n", 
                i + 1, students[i].name, students[i].age, students[i].marks);
    }
    return 0;
}