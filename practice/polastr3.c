#include <stdio.h>
#include <string.h>

int main(){
	char str[50];
	scanf("%s", &str);
	
	int i, j, batas, index;
	batas = strlen(str)-1;
	for(i = 0; i < strlen(str); i++){
		for(j = 0; j < batas; j++){
			printf("-");
		}
		printf("%c\n", str[batas]);
		batas--;
	}
	
	return 0;
}