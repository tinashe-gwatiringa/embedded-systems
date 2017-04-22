//********************************************************************
//*                    EEE2046F/EEE2050F C template                  *
//*==================================================================*
//* WRITTEN BY: Tinashe Gwatiringa                 		             *
//* DATE CREATED: 28/03/2017                                         *
//* MODIFIED: 28/03/2017                                             *
//*==================================================================*
//* PROGRAMMED IN: Geany 1.27							             *
//* TARGET:    PC			                                   		 *
//*==================================================================*
//* DESCRIPTION: A simple decimal to binary convertor                *
//*                                                                  *
//********************************************************************
// INCLUDE FILES
//====================================================================
#include <stdio.h>
#include <math.h>
//====================================================================
// GLOBAL CONSTANTS
//====================================================================
#define TITLE "Decimal to Binary Convertor"
#define AUTHOR "Tinashe Gwatiringa"
#define YEAR 2017
//====================================================================
// GLOBAL VARIABLES
//====================================================================
int decimal;
//====================================================================
// FUNCTION DECLARATIONS
//====================================================================
int dec2bin(int);
void display(void);
//====================================================================
// MAIN FUNCTION
//====================================================================
int main (void)
{
	printf("----\n");
	printf(TITLE "\n");
	printf("Written by: " AUTHOR "\n");
	printf("Date: %d \n", YEAR);
	printf("----\n\n");

	for(;;)
	{
		printf("Enter a decimal number: ");
		scanf("%d", &decimal);
		if(decimal<0)
		{
			printf("Exit\n");
			return 0;
		}
		display();
	}
	return 0;
}							// End of main
//====================================================================
// FUNCTION CALLS
//====================================================================
int dec2bin(int decimal)
{
	int quotient = decimal;
	int remainder;
	int i = 1;
	int binary;

	while(quotient!=0)
	{
		remainder = quotient%2;
		quotient = quotient/2;
		binary = binary + remainder*i;
		i = i*10;
	}
	return binary;
}
void display(void)
{
	printf("The number is %d \n", decimal);
	printf("The log2 of the number is %3.2lf \n", log2(decimal));
	printf("The number divided by 2 is %3.2f \n", decimal/2);
	printf("The remainder is %d \n\n", decimal%2);
	printf("Binary equivalent is %d \n\n", dec2bin(decimal));
}
//********************************************************************
// END OF PROGRAM
//********************************************************************
/* Notes
 * If there is issue with not finding reference to math library,
 * link it in the build configuration (-lm)
 */
