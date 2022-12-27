#include <stdio.h>
#include <string.h>

int main(){
	char str[50];
	scanf("%s", &str);
	
	int i, batas, batas1, batas2, batas3;
	batas = strlen(str)-1;
	batas1 = strlen(str)/2;
	batas2 = 0;
	batas3 = batas1 -1;
	
	if(strlen(str) % 2 == 0){
		for(i = batas; i >= batas1; i--){
			printf("%c", str[i]);
		}
		printf("\n");
	
		for(i = batas3; i >= batas2; i--){
			printf("%c", str[i]);
		}
		printf("\n");
	}
	else{
		for(i = batas; i > batas1; i--){
			printf("%c", str[i]);
		}
		printf("\n");
		for(i = batas1; i >= batas2; i--){
			printf("%c", str[i]);
		}
		printf("\n");
	}
	
	return 0;
}