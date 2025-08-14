#include <stdio.h>


int main(){
	int i = 0;
	int j = 0;
	int arr[10];
	for (i = 0; i < 10; i++) {
		arr[i] = i * 2; // Initialize array with even numbers
		printf("arr[%d] = %d\n", i, arr[i]);
	}
	return 0;
}
