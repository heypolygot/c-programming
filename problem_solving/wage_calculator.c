// basic payrate = $12.00/hr
// Overtime (in excess of 40 hrs) = time and a half
/* Tax rate :
                * 15% of the first $300
                * 20% of the next &150
                * 25% of the rest
*/

#define t300 .15
#define t150 .20
#define trest .25

#include <stdio.h>
void main (){
        int a, b, tax, wage;
        printf("Enter the numbers of hours worked in a week:");
        scanf("%d",&a);
	if (a > 0){
		if (a > 40) {
			b = (40 * 12) + (((a - 40) * 1.5) * 12);
			printf("output = %d\n",b);
		}else{
			b = (a * 12);
			printf("output = %d\n", b);
		}
		
		// calculations of taxes 
		if (b <= 300){
			tax = b * t300;
		}else if (b > 300 && b <= 450 ){
			tax = 300 * t300; 
			tax += (b - 300) * t150;
		}else if (b > 450) { 
			tax = 300 * t300;
			tax += 150 * t150;                 
			tax += (b - 450) * trest;
		}
		
		wage = b - tax;
		printf("Total tax = %d\n", tax);
		printf("Total wage after tax = %d\n", wage);
	}else{
		printf("Invalid Input...!\n");
	}
	
}	
