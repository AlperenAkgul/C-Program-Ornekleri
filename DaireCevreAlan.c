#include <stdio.h>
#include <math.h>

int main(){
	int islemTuru;
	float yaricap, sonuc;
	
	yanlis:
	printf("Lutfen Islem Turunu Giriniz(Cevre = 1, Alan = 2): ");
	scanf("%d", &islemTuru);
	
	if(islemTuru == 1){
		printf("Lutfen Dairenin Yaricapini Girin: ");
		scanf("%f", &yaricap);
		sonuc = 2*yaricap*3.14;
		printf("Sonuc: %f", sonuc);
	}
	else if(islemTuru == 2){
		printf("Lutfen Dairenin Yaricapini Girin: ");
		scanf("%f", &yaricap);
		sonuc = yaricap*yaricap*3.14;
		printf("Sonuc: %f", sonuc);
	}
	else{
		printf("Yanlis Giris Yaptiniz.");
		goto yanlis;
	}
	
	return 0;
}
