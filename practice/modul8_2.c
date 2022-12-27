#include <stdio.h>
#include <string.h>

int main(){
	int n, i, j;
	scanf("%d", &n);
	char str[n][50];
	for(i = 0; i < n; i++){
		scanf("%s", &str[i]);
	}
	
	int total=0;
	int batas;
	for(i = 0; i < n; i++){
		batas = strlen(str[i]);
		for(j = 0; j < batas; j++){
			total += str[i][j];
		}
	}
	if(total % 2 == 0){
		for(i = 0; i < n; i++){
			batas = strlen(str[i]);
			int batas1 = batas-1;
			for(j = batas1; j >= 0; j--){
				printf("%c", str[i][j]);
			}
			if(i < (n-1)){
				printf(" ");
			}
		}
	}
	else{
		for(i = n-1; i >= 0; i--){
			printf("%s", str[i]);
			if(i > 0){
				printf(" ");
			}
		}
	}
	
	
	return 0;
}