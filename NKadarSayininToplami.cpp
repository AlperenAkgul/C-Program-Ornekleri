#include <stdio.h>
#include <math.h>

int main(){
	int n, t1, t2, t3, i = 1;
	
	printf("N sayisini giriniz: ");
	scanf("%d", &n);
	
	while(i<=n){
		t1 += i;
		if(i %2 == 0){
			t3 += i;
		}
		else{
			t2 += i;
		}
		i += 1;
	}
	
	printf("Tum Sayilarin toplami: %d\nTek Sayilarin Toplami: %d\nCift Sayilarin Toplami: %d", t1, t2, t3);
	
	return 0;
}
