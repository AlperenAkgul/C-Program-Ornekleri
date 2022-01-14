#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
	char str1[100];
	
	int sesli, bosluk, rakam, unsuz, harf, n;
	sesli = bosluk = rakam = unsuz = harf = 0;
	printf("Diziyi Giriniz >");
	gets(str1);
	
	for(n = 0; str1[n] != '\0'; n++){
		if(str1[n] <= 'z' && str1[n] >= 'a'){
			harf += 1;
			
			if(str1[n] == 'a' || str1[n] == 'e' || str1[n] == 'i' || str1[n] == 'ü' || str1[n] == 'ö' ||str1[n] == 'u'|| str1[n] == 'ı' || str1[n] == 'o'){
				sesli += 1;
			}
			else{
				unsuz += 1;
			}
		}
		else if(str1[n] == ' '){
			bosluk += 1;
		}
		else{
			rakam += 1;
		}
		
	}
	printf("harf = %d\nsesli = %d\nsessiz = %d\nbosluk = %d\nrakam = %d", harf, sesli, unsuz, bosluk, rakam);
	
	
	
	return 0;
}
