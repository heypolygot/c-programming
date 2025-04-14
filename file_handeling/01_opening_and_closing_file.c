#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *fp;
    fp = fopen("file_handeling/demotext.txt", "r");
    int c;

    if (fp==NULL){
        perror("Error in opening file!");
        return (-1);
    }

    //reading a single line character
    while ((c = fgetc(fp))!=EOF){
        printf("%c", c);
    }

    fclose(fp);
    fp = NULL; 
    return 0;
}