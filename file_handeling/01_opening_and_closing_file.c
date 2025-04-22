#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *fp;   //creating a file pointer.
    fp = fopen("file_handeling/demotext.txt", "r");     //opening a file.
    int c;

    if (fp==NULL){  
        perror("Error in opening file!");
        return (-1);
    }

    /**
     * reading a single line character.
     * 
     * using while loop to read each character in 
     * the file and then printing it,
     * until the cursor encounters EOF
     */
    while ((c = fgetc(fp))!=EOF){   
        printf("%c", c);
    }

    fclose(fp);     //closing the file
    fp = NULL;      //setting the file pointer to null.
    return 0;
}