#include <stdio.h>



int main(){
	
	int test_case = 0;
	FILE *fp; 
	fp = fopen("testdata.in", "r");
	
	fscanf(fp,"%d\n", &test_case);
	int length = 0;
	for(int test = 0; test < test_case; test++){
		char str[10005];
		fscanf(fp,"%[^\n]\n", &str);
		
		int counter[26] = {0};
		for(int character = 0; str[character] != '\0'; character++){
			for(int alphabet = 0; alphabet < 26; alphabet++){
				if(str[character] == ' ' || str[character] == '\n'){
					break;
				}else if(str[character] == 'A' + alphabet || str[character] == 'a' + alphabet){
					counter[alphabet]++;
				}
			}
		}
		
		printf("Case #%d:\n", test + 1);
		for(int you = 0; you < 26; you++){
			if(you == 25 || (you + 1) % 5 == 0){
				printf("%c : %d\n", you + 65, counter[you]);
				
			}else{
				printf("%c : %d, ", you + 65, counter[you]);
			}	
		}
		putchar('\n');
	}
	
	return 0;
}
