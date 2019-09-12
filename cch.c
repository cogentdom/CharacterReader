//Include definitions for C Runtime Library functions used in this program
//Author(s) Dominik Huffield
#include <stdio.h>	//The standard I/O functions
#define FILEIN "testFile.txt"	// File to be read

//-------------------------------------------------------------------------------
//This is the main function, invoked by the C Runtime (CRT) to start the program
//-------------------------------------------------------------------------------

int main(void) {
	
	int uppers=0, lowers=0, vowels=0, constants=0, total=0, digits = 0;
	int c;


	while((c = getchar()) != EOF) {
		switch(c) {
			case 48 ... 57:
				++digits;
				++total;
				break;
			case 66 ... 68:
			case 70 ... 72:
			case 74 ... 78:
			case 80 ... 84:
			case 86 ... 88:
			case 90:
				++uppers;
				++constants;
				++total;
				break;
			case 65:
			case 69:
			case 73:
			case 79:
			case 85:
			case 89:
				++uppers;
				++vowels;
				++total;
				break;
			case 98 ... 100:
			case 102 ... 104:
			case 106 ... 110:
			case 112 ... 116:
			case 118 ... 120:
			case 122:
				++lowers;
				++constants;
				++total;
				break;	
			case 97:
			case 101:
			case 105:
			case 111:
			case 117:
			case 121:
				++lowers;
				++vowels;
				++total;
				break;
			default:
				++total;
				break;
		}
	}
	printf("Upper case count: %d\nLower case count: %d\nVowel count: %d\nConstant count: %d\nDigit count: %d\nTotal count: %d\n", uppers, lowers, vowels, constants, digits, total);
	return 0;
}


