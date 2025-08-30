#include<stdio.h>
#define MAX 5
int stack[MAX],top=-1;
// Push function
void push(int element){
	if(top==MAX-1){
		printf("Stack overflow ! Cannot insert %d\n",element);
		return;
	}
	stack[++top]=element;
	printf("%d pushed into stack\n",element);
}
// Display function
void display(){
	if(top==-1){
		printf("Stack is empty\n");
		return;
	}
	printf("Stack element : ");
	for(int i=top;i>=0;i--){
		printf("%d",stack[i]);
		printf(" ");
	}
	printf("\n");
}
// Pop function
void pop(){
	if(top==-1){
		printf("Stack underflow\n");
		return;
	}
	printf("%d popped from stack\n",stack[top--]);
}
int main(){
	int choice,value;
	while(1){
		printf("\nStack Operation :\n");
		printf("1. Push\n2. Pop\n3. Display\n4. Exit\n");
		printf("Enter your choice : ");
		scanf("%d",&choice);
		switch(choice){
			case 1: printf("Enter the element to push : ");
			        scanf("%d",&value);
					push(value);
			        break;
			case 2: pop();
			        break;
			case 3: display();
			        break;
			case 4: printf("Exiting program.\n");
			        return 0;
			default:
			    printf("Invalid choice! Try again.\n");				        
		}
	}
	return 0;
}

