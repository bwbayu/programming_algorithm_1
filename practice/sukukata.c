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
	
	int tanda, banyak=0;
	for(i = 0; i < n; i++){
		j = 0;
		tanda = 0;
		do{
			if(str[i][j] == 'b' && str[i][j+1]  == 'a'){
				tanda++;
			}
			j++;
		}while(j < strlen(str[i]));
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