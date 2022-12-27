#include <stdio.h>
#include <string.h>
// blm dikomen
int main(){
	char str[666];
	scanf("%s", &str);
	
	int pengurang=1, banyak=0, tmp=strlen(str);
	int sisa[666];
	do{
		tmp -= pengurang;
		pengurang+=2;
		banyak++;
	}while(tmp >= 0 && pengurang < tmp);
	int tanda = tmp-pengurang;
	
	int i, j, batas=1, index = strlen(str) - tmp, spasi, beda=0, index1;
	pengurang -= 2;
	for(i = 0; i <= banyak; i++){
		spasi = 0;
		for(j = i; j < banyak; j++){
			printf(" ");
			spasi++;
		}
		beda=(spasi*2)+2, index1 = index;
		while(batas < (banyak * 2) && index1 < strlen(str)){
			printf("%c", str[index1]);

			index1 += beda;
			beda+=2;
		}
		if(pengurang >= 0){
			index -= pengurang;		
			pengurang-=2;
		}
		batas++;
		printf("\n");
	}
	
	batas -= 2;
	pengurang += 4;
	index += pengurang;
	if(tanda == 0){
		for(i = 1; i <= banyak; i++){
			spasi = 0;
		
			for(j = 0; j < i; j++){
				printf(" ");
				spasi++;
			}
			beda=(spasi*2)+2, index1 = index;
			while(batas < (banyak * 2) && index1 < strlen(str)){
				printf("%c", str[index1]);
				index1 += beda;
				beda+=2;
			}
			if(pengurang < (banyak * 2)){
				pengurang+=2;
				index+=pengurang;
			}
			batas--;
			printf("\n");
		}
	}
	else{
		for(i = 1; i < banyak; i++){
			spasi = 0;
		
			for(j = 0; j < i; j++){
				printf(" ");
				spasi++;
			}
			beda=(spasi*2)+2, index1 = index;
			while(batas < (banyak * 2) && index1 < strlen(str)){
				printf("%c", str[index1]);
				index1 += beda;
				beda+=2;
			}
			if(pengurang < (banyak * 2)){
				pengurang+=2;
				index+=pengurang;
			}
			batas--;
			printf("\n");
		}
	}
	
	return 0;
}