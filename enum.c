#include <stdio.h>
void main (void) {
	enum company {GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT};
	enum company com1, com2, com3;
	com1 = XEROX, com2 = GOOGLE, com3 = EBAY;
	printf("%d\n%d\n%d\n", com1, com2, com3);
}
