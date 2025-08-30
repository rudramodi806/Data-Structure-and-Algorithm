//#include <stdio.h>
//#include <stdlib.h>
//// Structure for a node
//struct Node {
// int data;
// struct Node* next;
//};
//struct Node* head = NULL;
//// Push Function
//void push(int value) {
// struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
// newNode->data = value;
// newNode->next = NULL;
// if (head == NULL) {
// head = newNode;
// return;
// }
// struct Node* temp = head;
// while (temp->next != NULL)
// temp = temp->next;
//
// temp->next = newNode;
// printf("%d inserted at end.\n", value);
//}
//// Pop Function
//void pop(){
//	if (top==NULL){
//		printf("Stack Underflow!\n");
//		return;
//	}
//	printf("Popped %d\n",top->data);
//	struct Node*temp=top;
//	top=top->next;
//	free(temp);
//}
//// Display Function
//void display(){
//	struct Node* temp = head;
// if (temp == NULL) {
// printf("List is empty!\n");
// return;
// }
// printf("Linked List: ");
// while (temp != NULL) {
// printf("%d -> ", temp->data);
// temp = temp->next;
// }
// printf("NULL\n");
//} 
//// Main Function
//int main() {
// int choice, value, position;
//
// do {
// printf("\nMenu:\n");
// printf("1. Push\n2. Pop\n3. Display\n4. Exit\n");
// printf("Enter choice: ");
// scanf("%d", &choice);
// switch (choice) {
// case 1: printf("Enter value: "); scanf("%d", &value); push(value); break;
// case 2: printf("Enter value: ");  pop(value); break;
// case 3: display(); break;
// case 4: printf("Exiting the program!"); break;
// }
// } while (choice != 4);
// return 0;       }
// Display Opertion
void display(){
	if(front==NULL){
		printf("Queue is empty.\n");
		return;
	}
	struct Node*
}

