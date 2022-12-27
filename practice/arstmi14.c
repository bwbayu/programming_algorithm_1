#include <stdio.h>
#include <string.h>
//blm di komen
int main(){
	int n, i, j, batas=0, k;
	scanf("%d", &n);
	char str[n][50];
	for(i = 0; i < n; i++){
		scanf("%s", str[i]);
	}
	
	for(i = 0; i < n; i++){
		if(i % 2 == 0){
			for(j = 0; j < batas; j++){
				printf(" ");
			}
			printf("%s\n", str[i]);
			batas += strlen(str[i])/2;
		}
		else{
			for(j = strlen(str[i])-1; j >= 0; j--){
				for(k = 0; k < batas; k++){
					printf(" ");
				}
				if(str[i][j] == 'a'){
					printf("4\n");
				}
				else if(str[i][j] == 'e'){
					printf("3\n");
				}
				else if(str[i][j] == 'i'){
					printf("1\n");
				}
				else if(str[i][j] == 'o'){
					printf("0\n");
				}
				else{
					printf("%c\n", str[i][j]);
				}
			}
		}
		
	}
	
	return 0;
}