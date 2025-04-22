/**
 * Program to copy the content of one file to another.
 */

#include <stdio.h>

int main(){
    FILE *fp1;
    FILE *fp2;
    int c;

    fp1 = fopen("college_stuff/sample.txt", "r");
    fp2 = fopen("college_stuff/samplecopy.txt", "w");

    if(!fp1){
        perror("Error in opening file");
        return (-1);
    }
    while ((c = fgetc(fp1))!=EOF){
        fputc(c, fp2);
    }

    fclose(fp1);
    fclose(fp2);
    fp1 = NULL;
    fp2 = NULL;
    return 0;
}