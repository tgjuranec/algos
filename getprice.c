#define STARTPRICE 30ULL
#define INCREASEPERM 8ULL
#define EARTHDIAMETER 12756000U


unsigned long long getprice(unsigned int depth){
	if(depth > EARTHDIAMETER){
		return 0xFFFFFFFFFFFFFFFF;
	}
	unsigned long long sum = 0LL;
	unsigned int i = 0;
	for(i = 0; i < depth; i++){
		sum += (STARTPRICE + i*INCREASEPERM);
	}
	return sum;
}


unsigned long long getprice_fast(unsigned int depth){
	if(depth > EARTHDIAMETER){
		return 0xFFFFFFFFFFFFFFFF;
	}
	unsigned long long sum = STARTPRICE*(depth) + INCREASEPERM*depth*(depth-1)/2;
	return sum;
}
