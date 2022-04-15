#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define N 3

int main(){
	int A[N][N] = {{1, 2, 3},
			       {4, 5, 6},
			       {7, 8, 9}};
	int B[N][N] = {{1, 1, 1},
			       {1, 1, 1},
			       {1, 1, 1}};
	int i, j, simetrik = 1;
	
	for(i = 0; i < N; i ++){
		for(j = 0; j < N; j++){
			if(B[i][j] != B[j][i]){
				simetrik = 0;
				break;
			}
		}
	}
	
	if(simetrik == 0){
		printf("Dizi Simetrik Degildir");
	}
	else{
		printf("Dizi Simetriktir");
	}	
	return 0;
}
