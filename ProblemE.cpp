#include <stdio.h>
#include <math.h>
int main(){
	
	FILE *fp = fopen("testdata.in", "r");
	
	char space;
	int number[1001] = {0};
	int array = 0;
	while(!feof(fp)){
		
		fscanf(fp,"%d\n", &number[array]);
		array++;
		
	}
	fclose(fp);
	int sum = 0;
	int min = -1;
	
		for(int i = 0; i < array; i++){
			if(number[i] == 1){
				number[i] *= -1;
			}
			if(number[i] % 2 == 0){
				for(int j = 0; j < number[i]; j+=2){
					if(number[i] == j * j){
						number[i] *= -1;
					}
				}
				
			}else{
				for(int j = 1; j < number[i]; j+=2){
					if(number[i] == j * j){
						number[i] *= -1;
					}
				}
			}
			
			sum += number[i];
		//	printf("%d\n", number[i]);
		}
	printf("Special sum of %d datas is %d.\n", array, sum);
	
	
	return 0;
}
