#include <stdio.h>
#include <math.h>

int main(){
	int a;
	int i = 1;
	int sonuc;
	
	
	printf("Lutfen Sayiyi Giriniz: ");
	scanf("%d", &a);
	
	while(i <= a){
		sonuc = a %i;
		if(sonuc == 0){
			printf("%d\n", i);
		}
		i += 1;
	}
	
	return 0;
}
