#include<stdio.h>
int main(){
	int arr[100],n,i,element,position;
	printf("Enter total elements in an array : ");
	scanf("%d",&n);
	printf("Enter %d elements: ", n);
    for (i=0;i<n; i++) {
    scanf("%d", &arr[i]);
    }
    printf("Enter element to insert : ");
    scanf("%d",&element);
    printf("Enter position from 0 to %d : ",n-1);
    scanf("%d",&position);
    for(i=n;i>position;i--){
    	arr[i]=arr[i-1];
	}
	arr[position]=element;
	n++;
	printf("Array after insertion ");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}

