#include <stdio.h>
#include <stdlib.h>

struct node{
	int number;
	struct node *next;
};

typedef struct node nd;

nd *head, *q, *p;

void fun()
{
	int i = 1, k;
	
	scanf("%d", &k);
	
	while(k != -1){
		if(k % 2 != 0){	  //Tek Sayi
			if(i == 1){
				p = (nd*)malloc(sizeof(nd));
				p->number = k;
				p->next = NULL;
				head = p;
				q = head;
			}
			else{
				p = (nd*)malloc(sizeof(nd));
				p->number = k;
				p->next = head;
				head = p;
			}
			scanf("%d", &k);
			i++;
		}
		else{	//Cift Sayi
			if(i == 1){
				p = (nd*)malloc(sizeof(nd));
				p->number = k;
				p->next = NULL;
				head = p;
				q = head;
			}
			else{
				q->next = (nd*)malloc(sizeof(nd));
				q = q->next;
				q->number = k;
				q->next = NULL;			
			}
			scanf("%d", &k);
			i++;	
		}
	}
	
	p = head;
	
	while(p != NULL){
		printf("%d\n", p->number);
		p = p->next;
	}	
	
	p->next = NULL;
		
}

int main()
{
	fun();
	
	return 0;
}
