#include <stdio.h>
#include <string.h>

struct Employee {
    int id;
    char name[60];
    int type;  //0 = Full-time , 1 = Part-time

    union {
        float salary;   //for Full-time
        float hourly_rate; //for part-time
    } pay;
};

int main() {
    struct Employee e1, e2;

    //Full-time employee
    e1.id = 100;
    strcpy(e1.name, "Anirudh");
    e1.type = 0;
    e1.pay.salary = 70000.00;

    //Part-time employee
    e2.id = 102;
    strcpy(e2.name, "Hassin");
    e2.type = 1;
    e2.pay.hourly_rate = 25.40;

    //Display Information
    printf("Employee 1: %s\n", e1.name);
    if (e1.type == 0){
        printf("Full-time | salary: $%.2f\n", e1.pay.salary);
    } else {
        printf("Part-time | Hourly rate: $%.2f\n", e1.pay.hourly_rate);
    }

    printf("Employee 2: %s\n", e2.name);
    if(e2.type == 1){
        printf("Full-time | salary: $%.2f\n", e2.pay.salary);
    } else {
        printf("Part-time | Hourly rate: $%.2f\n", e2.pay.hourly_rate);
    }

    return 0;
}