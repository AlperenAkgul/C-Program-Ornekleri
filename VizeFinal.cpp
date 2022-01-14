#include <stdio.h>
#include <math.h>

int main(){
	int ogrenciNo, vizeNotu, finalNotu, sonuc;
	
	printf("Ogrenci No Giriniz: ");
	scanf("%d", &ogrenciNo);
	
	printf("Vize Notunu Giriniz: ");
	scanf("%d", &vizeNotu);
	
	printf("Final Notunu Giriniz: ");
	scanf("%d", &finalNotu);
	
	sonuc = vizeNotu*0.4 + finalNotu*0.6;
	
	printf("%d numarali ogrencinin notu %d\n", ogrenciNo, sonuc);
	
	if(sonuc >= 50){
		printf("Gecti");
	}
	else{
		printf("Kaldi");
	}
	
	return 0;
}
