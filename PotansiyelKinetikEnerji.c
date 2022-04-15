#include <stdio.h>
#include <math.h>

int main(){
	float m, h, ep, ek, v;
	
	printf("Cismin kutlesini giriniz(kg): ");
	scanf("%f", &m);
	
	printf("Cismin yerden yuksekligini giriniz(m): ");
	scanf("%f", &h);
	
	ep = m * 9.8 * h;
	v = pow(2*9.8*h, 0.5);
	ek = 0.5 * m * v*v;
	
	printf("Potansiyel Enerji: %.2f\nKinetik Enerji: %.2f", ep, ek);
	
	return 0;
}
