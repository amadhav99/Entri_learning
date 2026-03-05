#include <stdio.h>
#define MAX_SIZE 10
int second_largest(int *arr,int nElements);
void main()
{
	int nElements;
	int arr[MAX_SIZE];
	printf("Enter the number of elements needed for the array:");
	scanf("%d",&nElements);
	printf("Enter %d elements:\n",nElements);
	for(int i=0; i<nElements; i++){
		scanf("%d",&arr[i]);
	}
	printf("Second largest value is:%d\n",second_largest(arr,nElements));
}

int second_largest(int *arr, int nElements){
	int largest = arr[0];
	int second_largest = arr[0];
	for(int i=0;i<nElements;i++){
		if(arr[i]>largest)
		{
			second_largest = largest;
			largest = arr[i];
		}
		else if(arr[i]>second_largest && arr[i]!=largest)
		{
			second_largest = arr[i];
		}
	}
	return second_largest;
}
