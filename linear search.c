#include<stdio.h>
int main(){
	int arr[100],n,i,key,index=-1;
	printf("Enter elements in an array : ");
	scanf("%d",&n);
	printf("Enter %d elements : ",n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter element to search : ");
	scanf("%d",&key);
	for(i=0;i<n;i++){
		if(arr[i]==key){
			index=i;
			break;
		}
	}
	if(index!=-1)
	{
		printf("Element %d found at index %d \n",key,index);
	}
	else{
		printf("Element %d not found ",key);
	}
	return 0;
}
