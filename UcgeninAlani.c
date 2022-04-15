#include <stdio.h>
#include <math.h>

int main (){
	float a, b, c, u, alan;
	
	printf("1.Kenari Giriniz: ");
	scanf("%f", &a);
	printf("2.Kenari Giriniz: ");
	scanf("%f", &b);
	printf("3.Kenari Giriniz: ");
	scanf("%f", &c);
	
	u = (a + b + c) / 2;
	
	alan = pow((u*(u - a)*(u - b)*(u - c)), 0.5);
	
	printf("Ucgenin Alani: %.2f", alan);
	return 0;
}
