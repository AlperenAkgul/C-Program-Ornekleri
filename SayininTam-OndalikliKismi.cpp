#include <stdio.h>
#include <math.h>

int main(){
	float sayi, ondalikli;
	
	printf("Lutfen Sayiyi Giriniz: ");
	scanf("%f", &sayi);
	
	int tam = sayi;
	ondalikli = sayi - tam;
	
	printf("%d\n%f", tam, ondalikli);
	
	return 0;
}
