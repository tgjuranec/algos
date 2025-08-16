#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../getprice.h"


int main(){
	srand(time(NULL));

	//
	int i = 0;
	for(i = 0; i < 100000; i++){
		int rndDepth = rand() % 500;
		if(getprice(rndDepth) != getprice_fast(rndDepth)){
			printf("Error by number: %d",rndDepth);
			return -1;
		}
	}
	
	for(i = 0; i < 1000; i++){
		int rndDepth = rand() % 500000;
		if(getprice(rndDepth) != getprice_fast(rndDepth)){
			printf("Error by number: %d",rndDepth);
			return -1;
		}
	}
	for(i = 0; i < 10; i++){
		int rndDepth = rand() % 2000000000;
		if(getprice(rndDepth) != getprice_fast(rndDepth)){
			printf("Error by number: %d",rndDepth);
			return -1;
		}
	}
	return 0;
}
