#include <stdio.h>

int main(){
	
	int test_case = 0;
	
	scanf("%d", &test_case);
	
	int number_point = 0;
	for(int i = 0; i < test_case; i++){
		scanf("%d", &number_point);
		
		int x[number_point] = {0};
		int y[number_point] = {0};
		
		int count[4] = {0};
		
		for(int l = 0; l < number_point; l++){
			scanf("%d %d", &x[l], &y[l]);
			
			if(x[l] > 0 && y[l] > 0){		// + , +
				count[0]++;
				
			}if(x[l] < 0 && y[l] > 0){		// - , +
				count[1]++;
				
			}if(x[l] < 0 && y[l] < 0){		// - , -
				count[2]++;
				
			}if(x[l] > 0 && y[l] < 0){		// + , -
				count[3]++;				
			}
		}
	
		if(count[0] == number_point || count[0] == number_point-1 || count[1] == number_point ||count[1] == number_point-1 || count[2] == number_point || count[2] == number_point-1 || count[3] == number_point || count[3] == number_point-1){
			printf("Case #%d: YES", i + 1);
						
		}else{
			printf("Case #%d: NO", i + 1);
		}
		putchar('\n');
	}
	
	
	return 0;
}
