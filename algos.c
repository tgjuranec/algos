#include <stdio.h>
#include <stdlib.h>
#include "getprice.h"


#define BUFSIZE 80


int main(){
	char *buf = malloc(BUFSIZE);
	size_t bSize = BUFSIZE-1;
	ssize_t readSize;
	printf("Unesi kolko metara želiš bunar: ");
	readSize = getline(&buf,&bSize, stdin);
	unsigned int inputDepth = strtoul(buf, NULL, 10);
	if(inputDepth > EARTHDIAMETER){
		printf("Please enter depth less than Earth's diameter!");
		return 1;
	}
	printf("Cijena za %d metara je %llu EUR\n", inputDepth, getprice(inputDepth));
	printf("Cijena za %d metara je %llu EUR\n", inputDepth, getprice_fast(inputDepth));
	return 0;
}
