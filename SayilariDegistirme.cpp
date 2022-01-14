#include <stdio.h>
#include <math.h>

int main(){
	int A, B, C, D;
	
	printf("A sayisini giriniz: ");
	scanf("%d", &A);
	
	printf("B sayisini giriniz: ");
	scanf("%d", &B);
	
	C = A;
	A = B;
	B = C;
	
	printf("A nin yeni degeri: %d\n", A);
	printf("B nin yeni degeri: %d", B);
	
	return 0;
}
