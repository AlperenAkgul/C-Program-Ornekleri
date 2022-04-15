#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define SAT 2
#define SUT 3


int main(){
	int A[SAT][SUT] = {{1,2,3},
					   {4,5,6}};	   
	int B[SAT][SUT] = {{7,8,9}};
	int C[SAT][SUT];
	int i, j;
	
	printf("A[%d][%d] = \n", SAT, SUT);
	for(i = 0; i < SAT; i++){
		for(j = 0; j < SUT; j++){
			printf("%4d", A[i][j]);
		}
		printf("\n");
	}
	printf("B[%d][%d] = \n", SAT, SUT);
	for(i = 0; i < SAT; i++){
		for(j = 0; j < SUT; j++){
			printf("%4d", B[i][j]);
		}
		printf("\n");
	}
	printf("C[%d][%d] = \n", SAT, SUT);
	for(i = 0; i < SAT; i++){
		for(j = 0; j < SUT; j++){
			printf("%4d", A[i][j] + B[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
