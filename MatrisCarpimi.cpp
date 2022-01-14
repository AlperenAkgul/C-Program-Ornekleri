#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define SAT 2
#define SUT 2

int main(){
	int A[SAT][SUT] = {{1, 2},
	               {3, 4}};
	int B[SAT][SUT] = {{5, 6},
	               {7, 8}};;
	int C[SAT][SUT] = {0};
	
	int i, j, k = SAT - 1;
	
	for(i = 0; i < SAT; i++){
		for(j = 0; j < SUT; j++){
			C[i][j] += A[i][i] * B[i][j] + A[i][k] * B[k][j];
		}
		k -= 1;
	}
	for(i = 0; i < 2; i++){
		for(j = 0; j < 2; j++){
			printf("%4d", C[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
