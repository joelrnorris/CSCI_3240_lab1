/********************************************************************
*
* File : main.c
* Author : Norris, Joel R. 
* Date : 
* 
********************************************************************/
#include<stdio.h>
#include<stdlib.h>

int totalNumBits;

int main(void) {
	
	// get user input
	printf("%s", "Please enter total number of bits:");
	scanf_s("%d", &totalNumBits);

	// input validation
	 while ( totalNumBits < 2 || totalNumBits > 32) {
		printf("%s", "Input must be a number between 2 and 32\n\n");
		printf("%s", "Please enter total number of bits:");
		scanf_s("%d", &totalNumBits);
	 }



	/**
	Please enter the total number of bits: 

	For 5 bits:
	Number	Decimal	Hex	Binary
	UMin	0	0x00	00000
	UMax	31	0x1F	11111
	TMin	-16	0x10	10000
	-1	-1	0x1F	11111
	TMax	15	0x0F	01111

	Please enter the number of exponent bits: 
	...
	**/




	/**
	Please enter the total number of bits: 

	For 32 bits:
	Number	Decimal	Hex	Binary
	UMin	0	0x00000000	00000000000000000000000000000000
	UMax	0	0x00000000	00000000000000000000000000000000
	TMin	-2147483648	0x80000000	10000000000000000000000000000000
	-1	-1	0xFFFFFFFF	11111111111111111111111111111111
	TMax	2147483647	0x7FFFFFFF	01111111111111111111111111111111

	Please enter the number of exponent bits: 
	...
	**/

	return 0;

}