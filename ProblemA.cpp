#include <stdio.h>

int main(){
	
	int test_case = 0;
	
	scanf("%d", &test_case);
	
	int integer1 = 0;
	int integer2 = 0;
	int integer3 = 0;
	int integer4 = 0;
	int number = 0;
	int x = 1;
	
	for(int i = 0; i < test_case; i++){
		
		scanf("%d %d %d %d", &integer1, &integer2, &integer3, &integer4);
			
		printf("Case #%d:", i + 1);
		
		long long x = 0;
		int yes = 0;
		for(x = 0; x < 1000000; x++){
			if((integer1 * x + integer2) % integer4 == integer3){
				yes = 1;
				break;
			}
		}
		
		if(yes == 0){
			printf(" NO\n");
			
		}else{
			printf(" YES\n");
		}
	}
	
	
	
	
	return 0;
}
