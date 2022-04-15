#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
	char str1[100];
	
	int n, i;
	printf("Diziyi Giriniz >");
	gets(str1);
	for(i = 0; str1[i] != '\0'; i++){
		while(!(str1[i] >= 'a' && str1[i] <= 'z') || str1[i] == '\0'){
			for(n = i; str1[n] != '\0'; n++){
				str1[n] = str1[n+1];
			}
		}
	}
	
	printf("%s", str1);
	return 0;
}
