// C program to find GCD of two numbers 
#include <stdio.h> 
  
// Recursive function to return gcd of a and b 
int gcd(int a, int b){ 
    // Everything divides 0  
    if (a == 0) 
       return b; 
    if (b == 0) 
       return a; 
  
    // base case 
    if (a == b) 
        return a; 
  
    // a is greater 
    if (a > b) 
        return gcd(a-b, b); 
    return gcd(a, b-a); 
} 
  
// Driver program to test above function 
int main(){ 
    
    int test_case = 0;
	scanf("%d", &test_case);
	
	int many_number = 0;
	for(int i = 0; i < test_case; i++){
		scanf("%d", &many_number);
		
		int number[many_number] = {0};
		for(int j = 0; j < many_number; j++){
			scanf("%d", &number[j]);
		}
		int GCD[1000001] = {0};
		int array = 0;
		int max = 0;
		for(int i = 0; i < many_number; i++){
			for(int j = i + 1; j < many_number; j++){
				GCD[array] = gcd(number[i], number[j]);
				array++;
			}
		}
		for(int l = 0; l < array; l++){
			if(max < GCD[l]){
				max = GCD[l];
			}
		}
		printf("Case #%d: %d\n", i + 1, max);
	}
	return 0; 
} 
