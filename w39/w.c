#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct list{
	int content;
	struct list *next;
};

typedef struct list node;
typedef node *pointer;
pointer stack;

int main(){
	void push(int);
	void pop();
	void display(void);
	
	char select;
	int data;
	
	printf("1: push !!\n");
	printf("2: pop !!\n");
	printf("3: display !!\n");
	printf("4: exit !!\n");
	
	stack = (pointer)malloc(sizeof(node));
	
	stack->next = NULL;
	
	do{
		printf("\ntype decision: ");
		select = getche();
		
		switch(select){
			case '1':
				printf("\ntype data: ");
				fflush(stdin);
				scanf("%d", &data);
				push(data);
				break;
				
			case '2':
				pop();
				printf("\n");
				break;
				
			case '3':
				display();
				printf("\n");
				break;
				
			case '4':
				printf("\nexited !");
				break;
				
			default:
				printf("\n\7\7\7error !!\n");
		}

	}while(select != '4');
	printf("\n\n");
	
	system("PAUSE");
	return 0;
}

void push(int data){
	pointer newnode;
	newnode = (pointer)malloc(sizeof(node));
	
	newnode->content = data;
	newnode->next = stack;
	stack = newnode;
}

void pop(){
	pointer top;
	int data;
	
	if(stack->next == NULL)
		printf("\nstack empty");
	else {
		top = stack;
		stack = top->next;
		data = top->content;
		
		free(top);
		printf("\npop data: %d", data);
	}
}

void display(){
	int data;
	
	if(stack->next == NULL)
		printf("\nstack empty");
	else {
		while(stack->next != NULL)
			pop();
	}
}
