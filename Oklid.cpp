#include <stdio.h>
#include <math.h>

int main(){
	float p, k, h, b, c;
	
	printf("Ucgenin p degerini giriniz: ");
	scanf("%f", &p);
	
	printf("Ucgenin k degerini giriniz: ");
	scanf("%f", &k);
	
	h = pow(p*k, 0.5);
	b = pow((p+k)*k, 0.5);
	c = pow((p+k)*p, 0.5);
	
	printf("h = %.2f\nb = %.2f\nc = %.2f", h, b, c);
	
	return 0;
}
