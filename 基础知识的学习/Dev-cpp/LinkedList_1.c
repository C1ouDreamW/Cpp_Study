#include <stdio.h>
#include <stdlib.h>

typedef struct LinkedList{
	int value;
	struct LinkedList * next ;
}node;
typedef struct{
	node * head;
}List;


void addActor(int n,node ** head);
void printAll(node * phead);
void delActor(int n,node * head);

int main(){
	int n = -1;
	List head_1 = {NULL};
	printf("Input : ");
	do{
		scanf("%d",&n);
		if (n!=-1){
			addActor(n,&head_1.head);
		}
	}while(n != -1);
	
	printAll(head_1.head);
	
	int delN = 0;
	printf("Then input a number : ");
	scanf("%d",&delN);
	delActor(delN,head_1.head);
	
	
	return 0;
}

void addActor(int n,node ** head){
	node *p = (node*)malloc(sizeof(node));
	p->value = n;
	p->next = NULL;
	node *last = *head;
	if(*head){
		while(last->next){
			last = last->next;
		}
		last->next = p;
	}
	else{
		*head = p;
	}
}

void printAll(node * phead){
	for (node*p = phead;p != NULL;p = p->next){
		printf("%d\t",p->value);
	}
	printf("\n");
}

void delActor(int n,node * phead){
	node *last = NULL;
	int ret = 0;
	for (node*p = phead;p != NULL;p = p->next){
		if (p->value == n){
			last -> next = p -> next;
			free(p);
			ret++;
		}
		else{
			last = p;
		}
	}
	if (ret != 0){
		printf("We Find %d Actor,And We del It!",ret);
	}
	else{
		printf("NOT FOUND!");
	}
	
}





























