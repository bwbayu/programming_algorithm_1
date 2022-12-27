#include <stdio.h>
#include <string.h>

int main(){
	int n, i, j, k, batasindex,spasi=0;
	scanf("%d", &n);
	char str[n][50];
	for(i = 0; i < n; i++){
		scanf("%s", &str[i]);
	}
	int index = -1;
	for(i = 0; i < n/2; i++){
		index += 1;
		for(j = 0; j < spasi; j++){
			printf(" ");
		}
		
		batasindex = strlen(str[index])/2;
		for(j = 0; j < strlen(str[index]); j++){
			if(j == batasindex){
				printf(" ");
			}
			printf("%c", str[index][j]);
		}
		printf("\n");
		index += 1;
		spasi += batasindex;
		for(j = strlen(str[index])-1; j >= 0; j--){
			for(k = 0; k < spasi; k++){
				printf(" ");
			}
			printf("%c\n", str[index][j]);
		}
		spasi += 1;
	}
	
	return 0;
}