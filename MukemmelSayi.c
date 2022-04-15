#include <stdio.h>
#include <math.h>

int main (){
	int i = 1;
	int sayi, toplam = 0;
	
	printf("Sayiyi Giriniz: ");
	scanf("%d", &sayi);
	
	while (i < sayi){
		if(sayi %i == 0){
			toplam+= i;
		}
		i += 1;
	}
	
	if(toplam == sayi){
		printf("Sayi Mukemmel Sayidir");
	}
	else{
		printf("Sayi Mukemmel Sayi Degildir");
	}
	
	return 0;
}
