#include <stdio.h>

int main(){
	
	int test_case = 0;
	
	scanf("%d", &test_case);
	int number = 0;
	for(int i = 0; i < test_case; i++){
		scanf("%d", &number);
		
		long long fibo1 = 1;
		long long fibo2 = 1;
		long long fibo = 0;
		long long total = 2;
		
		printf("Case #%d:", i + 1);
		
		int j = 2;
		if(number == 0 || number == 1){
			printf(" %lld", fibo1 % 1000000009);

			
		}else{
			while(j < number){
			
				fibo = fibo1 + fibo2;
				fibo1 = fibo2 % 1000000009 ;
				fibo2 = fibo % 1000000009;
				total = ((total % 1000000009) + (fibo % 1000000009)) % 1000000009;
				j++;
				
			}
			printf(" %lld", total);
		}
		putchar('\n');
	}
	
	
	
	return 0;
}
