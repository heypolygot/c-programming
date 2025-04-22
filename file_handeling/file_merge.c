/**
 * Program to merge 2 files into one.
 */

 #include <stdio.h>

 int main(){
    FILE *fp1;
    FILE *fp2;
    FILE *fp3;
    int c;
    fp1 = fopen("college_stuff/sample.txt", "r");
    fp2 = fopen("college_stuff/samplecopy.txt", "r");
    fp3 = fopen("college_stuff/samplemerge.txt", "a");
 
    if(!fp1 || !fp2){
        perror("Error in opening file");
        return (-1);
    }
    while ((c = fgetc(fp1))!=EOF){
        fputc(c, fp3);
    }


    fputc('\n', fp3);

     
    while ((c = fgetc(fp2))!=EOF){
        
        fputc(c, fp3);
    }
 
    fclose(fp1);
    fclose(fp2);
    fclose(fp3);

    fp1 = NULL;
    fp2 = NULL;
    fp3 = NULL;

    return 0;
}