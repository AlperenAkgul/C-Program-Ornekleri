#include <stdio.h>
#include <math.h>

int main(){

	float sayi1, sayi2, sonuc;
	char islemTuru, yeniIslem;
	int i = 0;
	
	
	while (true){
		printf("Lutfen Yapmak Istediginiz Islem Turunu Yaziniz: ");
		scanf("%s", &islemTuru);
			/* Toplama */
			if(islemTuru == '+'){
				printf("1.Sayi: ");
				scanf("%f", &sayi1);
				printf("\n2.Sayi: ");
				scanf("%f", &sayi2);
				sonuc = sayi1 + sayi2;
				printf("Sonuc: %.2f", sonuc);
				
				printf("\nBaska bir Islem Yapmak Ister misiniz?(y/n): ");
				scanf("%s", &yeniIslem);
				
				if(yeniIslem == 'y'){
				continue;
				}
				else if (yeniIslem == 'n'){
					printf("Program kapatiliyor...");
					return 0;
				}
				else{
					printf("Yanlis Giris Yaptiniz.");
			}		
	}
	/* ��karma */
	else if(islemTuru == '-'){
		printf("1.Sayi: ");
		scanf("%f", &sayi1);
		printf("\n2.Sayi: ");
		scanf("%f", &sayi2);
		sonuc = sayi1 - sayi2;
		printf("Sonuc: %.2f", sonuc);
		
		printf("\nBaska bir Islem Yapmak Ister misiniz?(y/n): ");
		scanf("%s", &yeniIslem);
	
		if(yeniIslem == 'y'){
			continue;
		}
		else if (yeniIslem == 'n'){
			printf("Program kapatiliyor...");
			return 0;
		}
		else{
			printf("Yanlis Giris Yaptiniz.");
		}		
	}
	/* �arpma */
	else if(islemTuru == '*'){
		printf("1.Sayi: ");
		scanf("%f", &sayi1);
		printf("\n2.Sayi: ");
		scanf("%f", &sayi2);
		sonuc = sayi1 * sayi2;
		printf("Sonuc: %.2f", sonuc);
		
		printf("\nBaska bir Islem Yapmak Ister misiniz?(y/n): ");
		scanf("%s", &yeniIslem);
		yeni:
		if(yeniIslem == 'y'){
			
		}
		else if (yeniIslem == 'n'){
			printf("Program kapatiliyor...");
			return 0;
		}
		else{
			printf("Yanlis Giris Yaptiniz.");
		}	
	}
	/* B�lme */
	else if(islemTuru == '/'){
		printf("1.Sayi: ");
		scanf("%f", &sayi1);
		printf("\n2.Sayi: ");
		scanf("%f", &sayi2);
		sonuc = sayi1 / sayi2;
		printf("Sonuc: %.2f", sonuc);
		
		printf("\nBaska bir Islem Yapmak Ister misiniz?(y/n): ");
		scanf("%s", &yeniIslem);
	
		if(yeniIslem == 'y'){
			continue;
		}
		else if (yeniIslem == 'n'){
			printf("Program kapatiliyor...");
			return 0;
		}
		else{
			printf("Yanlis Giris Yaptiniz.");
		}	
	}
	/* ��k�� */
	else if(islemTuru == 'q'){
		return 0;
	}
	/* Yanl�� Giri� */
	else
	{
		printf("Yanlis Giris Yaptiniz.");	
	}	
	}
	return 0;	
}
