#include <stdio.h>

int binarySearch(int arr[], int l, int r, int x) 
{ 
    if (r < l) 
        return -1; 
  
    int mid = l + (r - l) / 2; 
  
    // If the element is present at the middle 
    // itself 
    if (arr[mid] == x) 
        return mid; 
  
    // If element is smaller than mid, then 
    // it can only be present in left subarray 
    if (arr[mid] > x) 
        return binarySearch(arr, l, mid - 1, x); 
  
    // Else the element can only be present 
    // in right subarray 
    return binarySearch(arr, mid + 1, r, x); 
}

int main(){
	
	int number_food = 0;
	int number_query = 0;
	
	scanf("%d %d", &number_food, &number_query);
	
	int price_food[number_food] ={0};
	
	for(int i = 0; i < number_food; i++){
		scanf("%d", &price_food[i]);
	}
	
	int price_query = 0;
	
	for(int j = 0; j < number_query; j++){
		
		scanf("%d",&price_query);
		
		
		int middle = binarySearch(price_food, 0, number_food - 1, price_query) ;
		
		int count = 1;
		if(middle == -1){
			count = 0;
		}
/*		for(int l = middle-1; l >= 0; l--){
			if(question == number[l]){
				count++;
			}
		}
		
		for(int k = middle+ 1; k < many_number; k++){
			if(question == number[k]){
				count++;
			}
		}
*/			

		int low = middle - 1;
		
		while(low >= 0 && price_food[low] == price_query){
			count++, low--;
		}
		int high = middle + 1;
		while(high < number_food && price_food[high] == price_query){
			count++, high++;
		}
		
		printf("%d\n", count);
	}


	
	
	return 0;
}
