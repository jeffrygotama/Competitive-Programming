#include <stdio.h>

int main(){
	
	int test_case = 0;
	
	scanf("%d", &test_case);
	
	int number_many = 0;
	for(int i = 0; i < test_case; i++){
		scanf("%d", &number_many);
		
		int number[number_many] = {0};
		for(int j = 0; j < number_many; j++){
			scanf("%d", &number[j]);
		}
		
		
		int number1[number_many];

		printf("Case #%d:", i + 1);
		for(int i = 0; i < number_many; i++){
			int temp = 1;
			int count = 0;
			for(int j = 0; j < number_many; j++){
				if(number[i] < number[j]){
					count++;
					
				}
			}
			temp += count;
			printf(" %d",temp);	
		}
		putchar('\n');
	}
	
	
	
	return 0;
}
