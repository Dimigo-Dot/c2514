#include <stdio.h>

int main(){
	int myGrade;
	char myMajor[3];
	char myName[10];

	printf("나의 학년 : ");
	scanf("%d", &myGrade);

	printf("나의 전공 : ");
	scanf("%s", myMajor);

	printf("나의 이름 : ");
	scanf("%s", myName);

	printf("%d학년 %s과 %s", myGrade, myMajor, myName);

	// ==은 같다는 뜻이다.
	if(myMajor == "DC"){
		printf("디컨입니다.");
	} else if(myMajor == "HD"){
		printf("해방입니다.");
	} else if(myMajor == "WP"){
		printf("웹플입니다.");
	} else if(myMajor == "EB"){
		printf("이비입니다.");
	} else{
		printf("몰라요.");
	}

	return 0;
}
