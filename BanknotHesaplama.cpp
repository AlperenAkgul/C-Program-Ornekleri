#include <stdio.h>
#include <math.h>

int main(){
	int para, yuzluk = 0, ellilik = 0, yirmilik = 0, onluk = 0, beslik = 0;
	
	printf("Lutfen Paranizi Giriniz: ");
	scanf("%d", &para);
	
	if(para >= 100){
		yuzluk = para / 100;
		para %= 100;
	}
	if(para >= 50){
		ellilik = para / 50;
		para %= 50;
	}
	if(para >= 20){
		yirmilik = para / 20;
		para %= 20;
	}
	if(para >= 10){
		onluk = para / 10;
		para %= 10;
	}
	if(para >= 5){
		beslik = para / 5;
		para %= 5;
		printf("%d tane yuzluk, %d tane ellilik, %d tane yirmilik, %d tane onluk, %d tane beslik.", yuzluk, ellilik, yirmilik, onluk, beslik);
	}
	else{
		printf("%d tane yuzluk, %d tane ellilik, %d tane yirmilik, %d tane onluk, %d tane beslik.", yuzluk, ellilik, yirmilik, onluk, beslik);
	}
	
	return 0;
}
