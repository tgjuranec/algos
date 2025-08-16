#include <stdio.h>
#include "../getprice.h"


int main(){
	if(getprice(1) != 30)
		return (1);
	if(getprice(2) != 68)
		return (2);
	if(getprice(458) != 850964)
		return (3);
	return 0;
}
