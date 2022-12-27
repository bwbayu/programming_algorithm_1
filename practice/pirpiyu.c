#include <stdio.h>
#include <string.h>
//blm dikomen
int main(){
	char str[169];
	scanf("%s", &str);
	
	int hitung=1, banyak=0, tmp=strlen(str);
	while(tmp > 0){
		tmp -= hitung;
		banyak++;
		hitung+=2;
	}
	//printf("%d", banyak);
	int i, j, k, batas=1, index=0;;
	for(i = 0; i < banyak; i++){
		for(j = i; j < banyak-1; j++){
			printf(" ");
		}
		k=0;
		while(k < batas && batas < (banyak * 2) && index < strlen(str)){
			printf("%c", str[index]);
			k++;
			index++;
			
		}
		batas+=2;
		printf("\n");
	}
	
	return 0;
}