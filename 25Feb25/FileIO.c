/* Writing Data to File*/
#include <stdio.h>

int main(){
    FILE *file1 = fopen("data.txt", "w"); //opens file in write mode
    if (file1 == NULL){
        printf("Error opening file\n");
        return -1;
    }
    fprintf(file1, "Hello, File I/O in C!\n"); //Writing formatted text
    fputs("This is second line.\n", file1); //writing string 

    fclose(file1); //close the file
    printf("Data written successfully!\n");
    return 0;
}