#include<stdio.h>
int swap(a,b);

int main(){
	int a,b,swa;
	printf("Enter the value of a : ");
	scanf("%d",&a);
	printf("Enter the value of b : ");
	scanf("%d",&b);
	printf("Numbers before swapping\n a=%d b=%d",a,b);
	swap(&a,&b);
	printf("\nNumbers after swapping\n a=%d b=%d",a,b);
	return 0;
	}
int swap(int *a,int *b){
	int t;
	t=*a;
	*a=*b;
	*b=t;
	return a,b;
}
