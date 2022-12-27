#include <stdio.h>
#include <string.h>

int max(char str[][51], int n);
void ganjil(int panjang, char str[][51], int i);
void genap(int panjang, char str[][51], int i);

int main(){
	int n, i;
	scanf("%d", &n);
	char str[n][51];
	for(i = 0; i < n; i++){
		scanf("%s", &str[i]);
	}
	int panjang = max(str, n);
	for(i = 0; i < n; i++){
		if(strlen(str[i]) % 2 == 0){
			genap(panjang, str, i);
		}
		else{
			ganjil(panjang, str, i);
		}
	}
	
	return 0;
}

int max(char str[][51], int n){
	int i, max = 0;
	for(i = 0; i < n; i++){
		if(strlen(str[i]) > max){
			max = strlen(str[i]);
		}
	}
	return max;
}

void ganjil(int panjang, char str[][51], int i){
	int j, spasi = panjang - strlen(str[i]);
	for(j = 0; j < spasi; j++){
		printf(" ");
	}
	int sisa = panjang - spasi;
	for(j = sisa-1; j >= 0; j--){
		printf("%c", str[i][j]);
	}
	printf("\n");
}

void genap(int panjang, char str[][51], int i){
	int j, spasi = panjang - strlen(str[i]);
	for(j = 0; j < spasi; j++){
		printf(" ");
	}
	for(j = strlen(str[i])/2; j < strlen(str[i]); j++){
		printf("%c", str[i][j]);
	}
	for(j = 0; j < strlen(str[i])/2; j++){
		printf("%c", str[i][j]);
	}
	printf("\n");
}