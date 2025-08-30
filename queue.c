#include <stdio.h>

#define MAX 5  // Maximum size of the queue

int queue[MAX];  // Queue array
int front = -1, rear = -1;  // Front and rear pointers

// Function to insert an element into the queue
void insert(int value) {
    if (rear == MAX - 1) {
        printf("Queue Overflow! Cannot insert %d\n", value);
        return;
    }

    if (front == -1)  // If inserting the first element
        front = 0;

    queue[++rear] = value;
    printf("%d inserted into the queue.\n", value);
}

// Function to delete an element from the queue
void delete() {
    if (front == -1 || front > rear) {
        printf("Queue Underflow! No elements to delete.\n");
        return;
    }

    printf("%d deleted from the queue.\n", queue[front]);
    front++;  // Move front pointer forward

    if (front > rear)  // If queue becomes empty, reset pointers
        front = rear = -1;
}

// Function to display the queue elements
void display() {
    if (front == -1 || front > rear) {
        printf("Queue is empty!\n");
        return;
    }

    printf("Queue elements: ");
    for (int i = front; i <= rear; i++)
        printf("%d ", queue[i]);
    printf("\n");
}

// Main function to test queue operations
int main() {
    int choice, value;

    while (1) {
        printf("\nQueue Operations:\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to insert: ");
                scanf("%d", &value);
                insert(value);
                break;
            case 2:
                delete();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice! Please enter again.\n");
        }
    }

    return 0;
}
