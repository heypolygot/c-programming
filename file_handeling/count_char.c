/**
 * This is a program to count the number of characters in a file.
 */

#include <stdio.h>

int main(){
    FILE *fp;
    int c;
    int count;
    fp = fopen("college_stuff/sample.txt", "r");

    if(!fp){
        perror("Error in opening file");
        return (-1);
    }
    while ((c = fgetc(fp))!=EOF){
        count++;
    }
    
    printf("The number of characters in the file are: %d ", count);
    fclose(fp);
    fp = NULL;
}