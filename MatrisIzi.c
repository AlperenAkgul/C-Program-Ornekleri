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
	
	for(i = 0; i < N; i++){
		for(j = 0; j < N; j++){
			printf("%4d", A[i][j]);
		}
		printf("\n");
	}
	
	for(i = 0; i < N; i++){
		toplam += A[i][i];
	}
	printf("%d", toplam);
	
	return 0;
}
