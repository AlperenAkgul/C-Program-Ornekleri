#include <stdio.h>

void squarePattern()
{
	int i, j, n;
	
	printf("n > ");
	scanf("%d", &n);
	
	printf("\n");
	
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			printf(" *");
		}
		printf("\n");
	}
	
	printf("\n");
}

void hollowSquarePatternDiagonal()
{
	int i, j, k, l, n;
	
	printf("n > ");
	scanf("%d", &n);
	
	k = 0;
	l = n - 1;
	
	printf("\n");
	
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			if(i == 0 || i == (n - 1)){
				printf(" *");	
			}
			else
				if(j == 0 || j == (n - 1) || j == k || j == l)
					printf(" *");
				else
					printf("  ");		
		}
		k++;
		l--;
		printf("\n");
	}	
}

void rhombusPattern()
{
	int i, j, k, h, w, c;
	
	printf("Height > ");
	scanf("%d", &h);
	printf("Width > ");
	scanf("%d", &w);
	
	int s = h - 1;

	printf("1.Star Pattern\n2.Horizontal Number Pattern\n3.Vertical Number Pattern\n");
	printf("Choice > ");
	scanf("%d", &c);		
	switch(c){
		case 1:
			for(i = 0; i < h; i++){
				for(k = s; k > 0; k--){
						printf("  ");
				}
				for(j = 0; j < w; j++){
					
					printf(" *");
				}
				s--;
				printf("\n");
			}
			break;
		case 2:
			for(i = 0; i < h; i++){
				for(k = s; k > 0; k--){
					printf("  ");
				}
				for(j = 0; j < w; j++){
					printf(" %d", (j + 1));
				}
				s--;
				printf("\n");
			}
			break;
		case 3:
			for(i = 0; i < h; i++){
				for(k = s; k > 0; k--){
					printf("  ");
				}
				for(j = 0; j < w; j++){
					printf(" %d", (i + 1));
				}
				s--;
				printf("\n");
			}
			break;
		default:
			printf("Invalid Choice!");
	}
}

void hollowRhombusPattern()
{
	int i, j, k, h, w; 
	
	printf("Height > ");
	scanf("%d", &h);
	printf("Width > ");
	scanf("%d", &w);
	
	int s = h - 1;

	for(i = 0; i < h; i++){
		for(k = s; k > 0; k--){
			printf("  ");
		}
		for(j = 0; j < w; j++){
			if(i == 0 || i == (h - 1))
				printf(" *");
			else{
				if(j == 0 || j == (w - 1))
					printf(" *");
				else
					printf("  ");
			}
		}
		s--;
		printf("\n");
	}
}

int main()
{
	int c;
	
	
	while(1){
		printf("---------------------------------------------------\n");
		printf("1.Square Star Pattern\n2.Hollow Square Star Pattern with Diagonal\n3.Rhombus Pattern\n4.Hollow Rhombus Pattern\n5.\n6.\n0.Exit\n");
		printf("Choice > ");
		scanf("%d", &c);
		printf("\n");
	
		switch(c){
			case 1:
				squarePattern();
				break;
			
			case 2:
				hollowSquarePatternDiagonal();
				break;
				
			case 3:
				rhombusPattern();
				break;
			
			case 4:
				hollowRhombusPattern();
				break;
			
			case 0:
				return 0;
				
			default:
				printf("Error! Invalid Choice!\n");
				break;
		}
		printf("\n");
	}
}
