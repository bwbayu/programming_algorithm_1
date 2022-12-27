#include <stdio.h>
#include <string.h>
//blm di komen
int main(){
	int n, i, j, k, spasi=0;
	scanf("%d", &n);
	char str[n][50];
	for(i = 0; i < n; i++){
		scanf("%s", &str[i]);
	}
	
	for(i = 0; i < n; i++){
		if(i % 2 == 0){
			for(j = 0; j < spasi; j++){
				printf(" ");
			}
			printf("%s", &str[i]);
		}
		else{
			for(j = 0; j < spasi; j++){
				printf(" ");
			}
			for(j = strlen(str[i])-1; j >= 0; j--){
				if(str[i][j] == 'a'){
					printf("4");
				}
				else if(str[i][j] == 'e'){
					printf("3");
				}
				else if(str[i][j] == 'i'){
					printf("1");
				}
				else if(str[i][j] == 'o'){
					printf("0");
				}
				else{
					printf("%c", str[i][j]);
				}
			}
		}
		spasi += (strlen(str[i])/2);
		printf("\n");
	}
	
	
	return 0;
}