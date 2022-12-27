#include <stdio.h>
#include <string.h>
// blm komen
int main(){
	int n, i, j, k, spasi=0;
	scanf("%d", &n);
	char str[n][50];
	for(i = 0; i < n; i++){
		scanf("%s", &str[i]);
	}
	
	for(i = 0; i < n; i++){
		if(i % 2 == 0){
			for(j = 0; j < strlen(str[i]); j++){
				for(k = 0; k < spasi; k++){
					printf(" ");
				}
				printf("%c\n", str[i][j]);
				spasi += 1;
			}
			
		}
		else{
			for(j = 0; j < spasi; j++){
				printf(" ");
			}
			for(j = strlen(str[i])-1; j >= 0; j--){
				printf("%c", str[i][j]);
			}
			printf("\n");
			spasi += strlen(str[i]);
		}
	}
	
	
	return 0;
}