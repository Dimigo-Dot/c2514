#include <stdio.h>

void enterYear(int dimigoGeneration){
	printf("%d", 2001 + dimigoGeneration);
}

int main(){
	int myGeneration;
	
	scanf("%d", &myGeneration);
	enterYear(myGeneration);
	
	return 0;
}