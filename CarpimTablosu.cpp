#include <stdio.h>
#include <math.h>

int main ()
{
    int i = 0, j = 0, k = 0, n = 10, sonuc = 1, sonuc2 = 1, sonuc3 = 1, sonuc4 = 1, sonuc5 = 1;

    for(i = 1; i <= 2; i++){
        for(j = 1; j <= n; j++){
            sonuc = i * j;
            sonuc2 = (i + 2) * j;
            sonuc3 = (i + 4) * j;
            sonuc4 = (i + 6) * j;
            sonuc5 = (i + 8) * j;
            printf("%d X %d = %d\t%d X %d = %d\t%d X %d = %d\t%d X %d = %d\t%d X %d = %d\n", i, j, sonuc, (i + 2), j, sonuc2,(i + 4), j, sonuc3,(i + 6), j, sonuc4,(i + 8), j, sonuc5);
        }
    }
scanf("%d");
}




