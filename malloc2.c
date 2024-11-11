#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int a;
    printf("ENTER THE LIMIT OF STRING YOU WANT TO ENTER :\n");
    scanf("%d",&a);

    // clearing input buffer
    while (getchar() != '\n');

    //memory allocation
    char *str = (char *)malloc(a * sizeof(int));
    
    if(!str){
        printf("Memory allocation failed");
    }else{
        printf("Enter the string you wanted to enter:\n");
        scanf("%[^\n]",str);
        printf("%d",sizeof(str));
    }   
    printf("The text you entered is: %s\n",str);
    free(str);
    str= NULL;
    return 0;
}