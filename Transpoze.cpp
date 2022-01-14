#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 5

int main(){
	int i, j, toplam = 0;
	int A[N][N] = {{1,2,3,4,5},
	               {1,2,3,4,5},
				   {1,2,3,4,5},
				   {1,2,3,4,5},
				   {1,2,3,4,5},};
	int B[N][N];
	
	for(i = 0; i < N; i++){
		for(j = 0; j < N; j++){
			printf("%4d", A[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	for(i = 0; i < N; i++){
		for(j = 0; j < N; j++){
			B[j][i] = A[i][j];
		}
	}
	printf("\n");
	for(i = 0; i < N; i++){
		for(j = 0; j < N; j++){
			printf("%4d", B[i][j]);
		}
		printf("\n");
	}	
	return 0;
}
