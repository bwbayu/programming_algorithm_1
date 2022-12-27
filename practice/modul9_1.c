#include <stdio.h>
#include <string.h>

int sum(char str[50]);

int main(){
	char str[50];
	scanf("%s", &str);
	
	int total = sum(str);
	printf("Nilai ASCII : ");
	if(total % 2 == 0){
		printf("genap.\n");
	}
	else{
		printf("ganjil.\n");
	}
}

int sum(char str[50]){
	int i, total=0;
	for(i = 0; i < strlen(str); i++){
		total += str[i];
	}
	return total;
}