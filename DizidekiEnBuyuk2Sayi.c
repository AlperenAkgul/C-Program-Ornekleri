#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int i, boyut, buyuk1 = -1, buyuk2 = -1;
	
	printf("Dizinin Boyutunu Giriniz >");
	scanf("%d", &boyut);
	
	int dizi[boyut];
	
	for(i = 0; i < boyut; i++){
		printf("%d. elemani giriniz >", i+1);
		scanf("%d", &dizi[i]);
	}
	
	for(i = 0; i < boyut; i++){
		if(dizi[i] > buyuk1){
			buyuk2 = buyuk1;
			buyuk1 = dizi[i];
		}
		else if(dizi[i] > buyuk2){
			buyuk2 = dizi[i];
		}
	}
	
	printf("1.Buyuk = %d\n2.Buyuk = %d", buyuk1, buyuk2);
	
	return 0;;
}
