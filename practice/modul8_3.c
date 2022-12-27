#include <stdio.h>
#include <string.h>

int main(){
	int n, i, j, k;
	scanf("%d", &n);
	char str[n][50];
	for(i = 0; i < n; i++){
		scanf("%s", str[i]);
	}
	
	printf("%s", str[0]);
	for(i = 2; i < n; i+=2){
		j = 0, k = i-1;
		while((j < strlen(str[k])) && (k < i)){
			printf("-");
			j++;
		}
		printf("%s", str[i]);
		k+=2;
	}
	printf("\n");
	
	for(i = 1; i < n; i+=2){
		j = 0, k = i-1;
		while((j < strlen(str[k])) && (k < i)){
		printf("-");
			j++;
		}
		printf("%s", str[i]);
		k+=2;
	}
	printf("\n");
	
	for(i = (strlen(str[0])-1); i >= 0; i--){
		printf("%c", str[0][i]);
	}
	
	for(i = 2; i < n; i+=2){
		j = 0, k = i-1;
		while((j < strlen(str[k])) && (k < i)){
			printf("-");
			j++;
		}
		for(j = (strlen(str[i])-1); j >= 0; j--){
			printf("%c", str[i][j]);
		}
		k+=2;
	}
	printf("\n");
	
	
	for(i = 1; i < n; i+=2){
		j = 0, k = i-1;
		while((j < strlen(str[k])) && (k < i)){
			printf("-");
			j++;
		}
		for(j = (strlen(str[i])-1); j >= 0; j--){
			printf("%c", str[i][j]);
		}
		k+=2;
	}
	printf("\n");
	
	return 0;
}