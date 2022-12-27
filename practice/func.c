#include <stdio.h>
#include <string.h>

int hitung(int n, char arr[][50]);

int main(){
	int n, i;
	scanf("%d", &n);
	char arr[n][50];
	for(i = 0; i < n; i++){
		scanf("%s", &arr[i]);
	}
	
	int banyak = hitung(n, arr);
	//printf("%d", banyak);
	
	int batas = 0, index = 0;
	for(i = 0; i < n; i++){
		while(batas < banyak && index < strlen(arr[i])){
			printf("%c", arr[i][index]);
			batas++;
			index++;
		}
		index = 0;
	}
	
	return 0;
}

int hitung(int n, char arr[][50]){
	int i, j, banyak=0;
	for(i = 0; i < n; i++){
		for(j = 0; j < strlen(arr[i]); j++){
			if(arr[i][j] == 'a' || arr[i][j] == 'A' ||
			arr[i][j] == 'i' || arr[i][j] == 'I' ||
			arr[i][j] == 'u' || arr[i][j] == 'U' ||
			arr[i][j] == 'e' || arr[i][j] == 'E' ||
			arr[i][j] == 'o' || arr[i][j] == 'O'){
				banyak++;
			}
		}
	}
	
	return banyak;
}