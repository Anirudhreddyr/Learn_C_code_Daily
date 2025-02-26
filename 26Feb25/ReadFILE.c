/* Reading from file */
#include <stdio.h>

int main(){
    FILE *file1 = fopen("data.txt", "r"); //Open file in read mode
    if(file1 == NULL){
        printf("Error opening file!\n");
        return -1;
    }

    char line[200];
    while (fgets(line, sizeof(line), file1)) { //Read each line 
        printf("%s", line);
    }

    fclose(file1); //close file
    return 0;
}