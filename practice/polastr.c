#include <stdio.h>
#include <string.h>

int main(){
	char str[50];
	scanf("%s", &str);
	
	int i, j, spasi=0, batas=0;
	for(i = 0; i < strlen(str)/2; i++){
		for(j = 0; j < spasi; j++){
			printf(" ");
		}
		spasi++;
		printf("%c\n", str[i]);
	}
	batas = strlen(str)/2;
	for(i = strlen(str)/2; i < strlen(str); i++){
		for(j = 0; j < batas; j++){
			printf(" ");
		}
		batas--;
		printf("%c\n", str[i]);
	}
	
	return 0;
}