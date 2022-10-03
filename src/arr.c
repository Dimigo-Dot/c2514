#include <stdio.h>

int main(){
	int i;
	int a[3];

	for(i = 0; i < 3; i ++){
		scanf("%d", &a[i]);
	}

	int sum = 0;
	for(i = 0; i < 3; i ++){
		sum = sum + a[i];
	}

	printf("%d", sum);

	return 0;
}
