#include <stdio.h>

int main(){
	
	int number_people = 0;
	int number_question = 0;
	
	scanf("%d %d", &number_people, &number_question);
	
	int distance[number_people] = {0};
	for(int i = 0; i < number_people; i++){
		scanf("%d", &distance[i]);
	}
	
	int temp = 0;
	int question = 0;
	for(int i = 0; i < number_people; i++){
		for(int j = i + 1; j < number_people; j++){
			if(distance[i] > distance[j]){
				temp = distance[i];
				distance[i] = distance[j];
				distance[j] = temp;
			}
		}
	}
	for(int k = 0; k < number_question; k++){
			scanf("%d", &question);
			
			printf("%d\n", distance[question-1]);
		}
	
	
	return 0;
}
