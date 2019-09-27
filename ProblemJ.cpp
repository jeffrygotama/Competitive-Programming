#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int *a, int *b)
{
	long long c = *a;
	*a = *b;
	*b = c;
	
	return;
}

void quick_sort(int arr[], int left, int right){
	if(left >= right)
	{
		return;
	}
	
	int pivot, idx, temp;
	pivot = right;
	idx = left;
	
	for (int j = left; j < right; j++)
	{
		if (arr[j]<arr[pivot]){
			swap(&arr[j], &arr[idx]);
			idx++;
		}
	}
	
	swap(&arr[idx],&arr[pivot]);
	
	quick_sort(arr, left, idx - 1);
	quick_sort(arr, idx + 1, right);
}

void merge(int arr[], int l, int m, int r) 
{ 
    int i, j, k; 
    int n1 = m - l + 1; 
    int n2 =  r - m; 
  
    int L[n1], R[n2]; 

    for (i = 0; i < n1; i++) 
        L[i] = arr[l + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = arr[m + 1+ j]; 
  
    i = 0; 
    j = 0; 
    k = l; 
    while (i < n1 && j < n2) 
    { 
        if (L[i] <= R[j]) 
        { 
            arr[k] = L[i]; 
            i++; 
        } 
        else
        { 
            arr[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 
  
    /* Copy the remaining elements of L[], if there 
       are any */
    while (i < n1) 
    { 
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 
  
    /* Copy the remaining elements of R[], if there 
       are any */
    while (j < n2) 
    { 
        arr[k] = R[j]; 
        j++; 
        k++; 
    } 
} 
  
/* l is for left index and r is right index of the 
   sub-array of arr to be sorted */
void mergeSort(int arr[], int l, int r) { 
    if (l < r) 
    { 

        int m = l+(r-l)/2; 
  
        // Sort first and second halves 
        mergeSort(arr, l, m); 
        mergeSort(arr, m+1, r); 
  
        merge(arr, l, m, r); 
    }
}

int binarySearch(int arr[], int number_people, int question){ 
    int low = 0;
    int right = number_people -1;
    
    if(question < arr[low]){
    	return -1;
    	
	}
	if(question > arr[right]){
		return right;
	}
	
	while(low <= right){
		int mid = (low + right)/2;
		if(/*arr[mid] <= */question >= arr[mid]&& arr[mid + 1] > question){
			return mid;
			
		}
		if(question > arr[mid]){
			low = mid + 1;
		}else if(question < arr[mid]){
			right = mid - 1;
		}
		
	}
	return -1;
}

int main(){
	
	int number_people = 0;
	int number_question = 0;
	
	scanf("%d %d", &number_people, &number_question);
	
	int distance[number_people];
		
	for(int i = 0; i < number_people; i++){
		scanf("%d", &distance[i]);
	}

//	quick_sort(distance, 0, number_people-1);
	mergeSort(distance, 0, number_people-1);
	
	for(int j = 0; j < number_question; j++){
		int question = 0;
		scanf("%d", &question);
		
		int middle = binarySearch(distance, number_people, question);
		
		printf("%d\n", middle + 1);

	}
	return 0;
}
