/**
 * Program to calculate the number of words in a file
 */

#include <stdio.h>

int main(){
    FILE *fp;
    int c;
    int count = 0;
    fp = fopen("college_stuff/sample.txt", "r");

    if(!fp){
        perror("Error in opening file");
        return (-1);
    }
    while ((c = fgetc(fp))!=EOF){
        if(c == ' ' || c=='\n'){
            count++;
        }
    }

    if(count!=0){
        printf("The number of words in the file are: %d ", ++count);
    }
    
    fclose(fp);
    fp = NULL;
    return 0;
}