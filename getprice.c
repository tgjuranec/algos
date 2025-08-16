#define STARTPRICE 30LL
#define INCREASEPERM 8LL

long long getprice(int depth){
	long long sum = 0LL;
	int i = 0;
	for(i = 0; i < depth; i++){
		sum += (STARTPRICE + i*INCREASEPERM);
	}
	return sum;
}


long long getprice_fast(int depth){
	long long sum = STARTPRICE*(depth) + INCREASEPERM*depth*(depth-1)/2;
	return sum;
}
