#include <stdio.h>
#include <string.h>
//blm di komen
int main(){
	char kata[666];
	scanf("%s", &kata);
	int bkata;
	scanf("%d", &bkata);
	
	int i, j, awal;
	char masukanh[bkata][100]; //huruf
	int masukana[bkata]; //angka
	for(i = 0; i < bkata; i++){
		scanf("%s", &masukanh[i]);
		scanf("%d", &masukana[i]);
	}
	
	int pola, banyak, cek, angka;
	for(i = 0; i < bkata; i++){
		pola = 0, banyak = 0, cek = 0;
		for(j = 0; j < strlen(masukanh[i]); j++){
			cek += masukanh[i][j];
		}
		
		if(cek == 538 || cek == 845){
			pola = masukana[i] * masukana[i];
			banyak = pola / strlen(kata);
			if(pola % strlen(kata) != 0){
				banyak+=1;
			}
			printf("%d\n", banyak);
		}
		else if(cek == 1149){
			awal = masukana[i];
			j = 0;
			while(j < masukana[i]){
				pola += awal;
				j++;
				awal+=2;
			}
			awal -= 2;
			pola *= 2;
			for(j = 0; j < (masukana[i]-2); j++){
				pola += awal;
			}
			
			banyak = pola / strlen(kata);
			if(pola % strlen(kata) != 0){
				banyak+=1;
			}
			printf("%d\n", banyak);
		}
	}
	
	return 0;
}