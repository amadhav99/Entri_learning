#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int second_largest(int *arr,int nElements);
void main()
{
	int nElements;
	printf("Enter the number of elements needed for the array:");
	scanf("%d",&nElements);
	int *arr = (int *)malloc(sizeof(int)*nElements);
    if(arr == NULL){
        printf("Dynamic memory allocation failed\n");
        exit(1);
    }
	printf("Enter %d elements:\n",nElements);
	for(int i=0; i<nElements; i++){
		scanf("%d",arr+i);
	}
	printf("Second largest value is:%d\n",second_largest(arr,nElements));
}

int second_largest(int *arr, int nElements){
	int largest = INT_MIN;
	int second_largest = INT_MIN;
    int *current = arr;
	for(int i=0;i<nElements;i++){
		if(*(current+i)>largest)
		{
			second_largest = largest;
			largest = *(current+i);
		}
		else if(*(current+i)>second_largest && *(current+i)!=largest)
		{
			second_largest = *(current+i);
		}
	}
	return second_largest;
}
