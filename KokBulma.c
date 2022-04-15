#include <stdio.h>
#include <math.h>

int main (){
	float A, B, C, kok1, kok2, delta;
	
	printf("A nin katsayisini giriniz: ");
	scanf("%f", &A);
	printf("B nin katsayisini giriniz: ");
	scanf("%f", &B);
	printf("C nin katsayisini giriniz: ");
	scanf("%f", &C);
	
	delta = B*B - (4*A*C);
	
	if(delta > 0){
		kok1 = (-1*B + pow(delta, 0.5)) / 2*A;
		kok2 = (-1*B - pow(delta, 0.5)) / 2*A;

		printf("Denklemin kokleri %.2f\n %.2f", kok1, kok2);
	}
	else if(delta == 0){
		kok1 = -1*B/(2*A);
		printf("Denklemin Koku %.2f", kok1);
	}
	else{
		printf("Reel Kok Yoktur");
	}
	
	return 0;
}
