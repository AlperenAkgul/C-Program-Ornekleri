#include <stdio.h>

int no;
char name[40];
int midterm;

FILE *ptr;

void create()
{
	if((ptr = fopen("data.dat", "w")) == NULL)
		printf("Cant Open File.");
	else{
		printf("Enter Student Number, Student Name and Midterm \n");
		printf("Enter EOF for break\n");
		printf("? ");
		scanf("%d%s%d", &no, name, &midterm);
		
		while(!feof(stdin)){
			fprintf(ptr, "%d %s %d\n", no, name, midterm);
			printf("? ");
			scanf("%d%s%d", &no, name, &midterm);
		}
		fclose(ptr);
	}
	
}

void biggerThan50()
{
	if(ptr = fopen("data.dat", "r") == NULL)
		printf("Cant Open File.");
	else{
		while(!feof(ptr)){
			fscanf(ptr, "%d %s %d", &no, name, &midterm);
			if(midterm >= 50){
				printf("%d %s %d", no, name, midterm);
			}
		}
	}
	rewind(ptr);
	fclose(ptr);
}

void add10()
{
	if(ptr = fopen("data.dat", "r+") == NULL)
		printf("Cant Open File.");
	else{
		while(!feof(ptr)){
			fscanf(ptr, "%d %s %d", &no, name, &midterm);
			if(midterm < 50){
				midterm += 10;
				fprintf(ptr, "%d%s%d", no, name, midterm);
			}
		}
	}
	rewind(ptr);
	fclose(ptr);
}

void mod()
{
	
}

void count()
{
	
}

int main()
{
	int no;
	char name[40];
	int midterm;
	
	int choice = 0;
	
	
	while(1){
		printf("1.Shows Bigger Than 50 Students\n2.Adds 10 Lower Than 50 Students\n3.Calculates Mod\n4.Count\n5.Creates File\n");
		printf("\nChoice > ");
		scanf("%d", &choice);
		
		switch (choice){
			case 1:
				biggerThan50();
				break;
			
			case 2:
				add10();
				break;
				
			case 3:
				mod();
				break;
				
			case 4:
				count();
				break;
				
			case 5:
				create();
				break;
			
			case -1:
				
				return 0;
		}
	}
	
	return 0;
}
