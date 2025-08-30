#include<stdio.h>
int swap(a,b);

int main (){
	int a,b;
	printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("Before calling swap: a = %d, b = %d\n",a,b);
    swap(a,b);
    //printf("After calling swap: a = %d, b = %d\n", a,b);
    return 0;
}

int swap(int a, int b) {
    int t;
    t = a;
    a = b;
    b = t;
    printf("Inside swap function: a = %d, b = %d\n", a, b);
}
