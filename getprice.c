#define STARTPRICE 30
#define INCREASEPERM 8

long long getprice(int depth){
	long long sum = 0;
	int i = 0;
	for(i = 0; i < depth; i++){
		sum += (STARTPRICE + i*INCREASEPERM);
	}
	return sum;
}

