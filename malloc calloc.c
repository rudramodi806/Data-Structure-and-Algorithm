#include <stdio.h>
#include <stdlib.h>
int main() {
	int *arr;
	int n,i;
	printf("Enter the number of elements : ");
	scanf("%d",&n);
	printf("Memory allocation using malloc\n");
	arr=(int*)malloc(n*sizeof(int));
	if(arr==NULL)
    {
    	printf("Memory allocation failed");
    	return 1;
	}
	else {
	printf("Memory allocated successfully using malloc.\n");
	}
	printf("Enter %d elements : ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
    printf("Elements entered: ");
		for(i=0;i<n;i++)
	{
    	printf("%d ",arr[i]);
    }
	printf("\n");
    free(arr);      
	printf("Memory allocation using calloc \n");
	arr = (int*)calloc(n, sizeof(int));
	if(arr==NULL){
		printf("Memory allocation failed");
		return 1;
	}
	else {
       printf("Memory allocated successfully using calloc.\n");
   }
	printf("Elements after calloc intialization : ");
	for(i=0;i<n;i++){
		printf(" %d " ,arr[i]);
	}
	printf("\n");
	free(arr);
	printf("\nMemory has been freed");
	return 0;
}


