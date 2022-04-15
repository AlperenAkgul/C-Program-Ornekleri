#include <stdio.h>
#include <math.h>

#define PI 3.14159265

int main(){
	float alan, e, f, a, radyan;
	radyan = PI / 180;
	
	printf("Birinci kosegeni Giriniz: ");
	scanf("%f", &e);
	printf("Ikinci kosegeni Giriniz: ");
	scanf("%f", &f);
	printf("a acisini Giriniz: ");
	scanf("%f", &a);
	
	alan = 0.5 * e * f * sin(a * radyan);
	
	printf("Alan: %.2f", alan);
	
	return 0;
}
