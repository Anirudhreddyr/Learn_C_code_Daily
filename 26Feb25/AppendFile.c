/* Appending Data into a file "a" Mode */
#include <stdio.h>

int main(){
    FILE *file1 = fopen("data.txt", "a");  //Open file in append mode 
    if (file1 == NULL){
        printf("Error opening file\n");
        return -1;
    }

    fputs("Appending new data....\n", file1); //adding data
    fclose(file1);// close file
    
    printf("Data appended Successfully!\n");
    return 0;
}