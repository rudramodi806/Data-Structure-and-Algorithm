#include <stdio.h>

#define MAX 5 // Maximum size of the Circular Queue

int queue[MAX], front = -1, rear = -1;

// Function to insert an element (Enqueue)
void enqueue(int value) {
    if ((rear + 1) % MAX == front) {
        printf("Queue is Full\n");
        return;
    }
    if (front == -1) // First insertion
        front = 0;
    rear = (rear + 1) % MAX;
    queue[rear] = value;
    printf("%d inserted into the queue.\n", value);
}

// Function to delete an element (Dequeue)
void dequeue() {
    if (front == -1) {
        printf("Queue is Empty!\n");
        return;
    }
    printf("%d deleted from the queue.\n", queue[front]);
    if (front == rear) {
        // If only one element was present, reset queue
        front = rear = -1;
    } else {
        front = (front + 1) % MAX;
    }
}

// Function to display the queue
void display() {
    if (front == -1) {
        printf("Queue is Empty!\n");
        return;
    }
    printf("Queue: ");
    int i = front;
    while (1) {
        printf("%d ", queue[i]);
        if (i == rear) break;
        i = (i + 1) % MAX;
    }
    printf("\n");
}

// Main function with switch case
int main() {
    int choice, value;

    while (1) {
        printf("\n*** CIRCULAR QUEUE OPERATIONS ***\n");
        printf("1. INSERT (Enqueue)\n");
        printf("2. DELETE (Dequeue)\n");
        printf("3. DISPLAY\n");
        printf("4. EXIT\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the value to insert: ");
                scanf("%d", &value);
                enqueue(value);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice! Please enter a valid option.\n");
        }
    }
    return 0;
}
