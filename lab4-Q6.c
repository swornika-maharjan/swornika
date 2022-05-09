#include <stdio.h>

void binarySearch(int arr[], int item, int size);
void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main(){
    
	int arr[] = { 2, 3, 4, 10, 40, 38, 60, 72, 77, 80, 22, 33};
    
	

	// binarySearch(arr, 4);
	int arr_size = sizeof(arr) / sizeof(arr[0]);
	int n = arr_size-1;
	// printf("%d", arr_size);
	printArray(arr, arr_size);
	binarySearch(arr, 77, n);

    return 0;
}

void binarySearch(int arr[], int item, int size){
	int i, j, n, temp;
    int mid_index, first_index, last_index, flag;
	n=size;

	// int size = sizeof(arr) / sizeof(arr[0]);
	//applying bubble sort
	for(i=0; i<size-1; i++){
        for(j=0; j<size-i-1; j++){
                if(arr[j] > arr[j+1]){
                    temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
        }
    }

	flag = 0;
    first_index = 0;
    last_index = n;

	while(first_index <= last_index){
    	mid_index = (first_index + last_index)/2;
        if(arr[mid_index] == item){
            flag = 1;
        }
        if (arr[mid_index]<item){
            first_index = mid_index + 1;
        }
        else{
            last_index = mid_index - 1; 
        }
        
    }

    if(flag == 1)
        printf("\n%d found.\n", item);
    else
        printf("\n%d not found\n", item);
}
