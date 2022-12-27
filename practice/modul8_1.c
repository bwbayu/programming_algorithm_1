#include <stdio.h>
#include <string.h>


int main(){
	int n, i, j, k, spasi=0;
	
	scanf("%d", &n);
	char arr1[n][100];
	char arr2[n][100];
	
	for(i = 0; i < n; i++){
		scanf("%s", &arr1[i]);
	}
	for(i = 0; i < n; i++){
		scanf("%s", &arr2[i]);
	}
	
	
	int batas, batas1, batas2;
	for(i = 0; i < n; i++){
		printf("%s\n", arr1[i]);
		spasi = spasi + strlen(arr1[i]);
		batas1 = i + 1;
		k = 0;
		while(k < strlen(arr2[i])){
			for(j = 0; j < spasi-1; j++){
				printf(" ");
			}
			printf("%c", arr2[i][k]);
			if(k < (strlen(arr2[i])-1)){
				printf("\n");
			}
			k++;
		}
	}
	printf("\n");
	return 0;
}