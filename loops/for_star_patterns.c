#include <stdio.h>

void abc ();
void def ();
void ghi ();

void main(void) {
	abc();
	def();
	ghi();
}


// Right angled triange star pattern...

void abc (void){
       for (int i = 1; i <= 5; i++){
		for (int j = i; j <= 5 ; j++){
			printf(" ");
		}
		for (int j = 1; j <= i; j++){
                        printf("* ");
                }
                printf("\n");
        }
}

/*  OUTPUT
                *
                **
                ***
                ****
                *****
*/

void def (void){
	for (int i = 4; i>=1; i--){
		for (int j = i; j <= 5 ; j++){
			printf(" ");	
		}
		for (int k = 1; k<=i; k++){
			printf("* ");
		}
		printf("\n");
	}
}


void ghi (void){
	for (int i = 1; i <= 5; i++){
                for (int j = i; j <= 5 ; j++){
                        printf(" ");
                }
                for (int j = 1; j <= i; j++){
                        printf("* ");
                }
                printf("\n");
        }
        for (int i = 4; i>=1; i--){
                for (int j = i; j <= 5 ; j++){
                        printf(" ");
                }
                for (int k = 1; k<=i; k++){
                        printf("* ");
                }
                printf("\n");
	}


}

/* OUTPUT 
		     * 
		    * * 
		   * * * 
		  * * * * 
		 * * * * * 
		  * * * * 
		   * * * 
		    * *
		     *
*/
