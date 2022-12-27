#include <stdio.h>
#include <string.h>
//blm dikomen
int main(){
	int n, i, j;
	scanf("%d", &n);
	char str[n][50];
	for(i = 0; i < n; i++){
		scanf("%s", &str[i]);
	}
	
	int tanda, tmp, banyak=0;
	for(i = 0; i < n; i++){
		tanda = 0;
		for(j = 0; j < strlen(str[i]); j++){
			tmp = str[i][j];
			if(tmp >= 48 && tmp <= 57){
				tanda++;
			}
		}
		if(tanda >= 2){
			banyak++;
		}
	}
	if(banyak >= 3){
		printf("yes\n");
	}
	else{
		printf("no\n");
	}
	
	
	return 0;
}