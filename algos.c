#include <stdio.h>
#include <stdlib.h>
#include "getprice.h"


#define STARTPRICE 30
#define INCREASEPERM 8
#define BUFSIZE 80


int main(){
	int i = 0;
	int j = 0;
	char *buf = malloc(BUFSIZE);
	size_t bSize = BUFSIZE-1;
	ssize_t readSize;
	printf("Unesi kolko metara želiš bunar: ");
	readSize = getline(&buf,&bSize, stdin);
	int inputDepth = atoi(buf);
	printf("Cijena za %d metara je %lld EUR\n", inputDepth, getprice(inputDepth));
	return 0;
}
