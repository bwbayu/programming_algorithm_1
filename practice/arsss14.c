#include <stdio.h>
#include <string.h>

//arsss14 (masih salah)
void masukan(int n, char str[][51]){
	int i;
	for(i = 0; i < n; i++){
		scanf("%s", &str[i]);
	}
}

int cek(int n, char str[][51], char kode[51]){
	int i, j, indexkode=0, indexkode1;
	
	int banyak=0;
	for(i = 0; i < n; i++){
		j = 0;
		int tanda = 0;
		do{
			if(str[i][j] == kode[indexkode]){
				indexkode1 = indexkode;
				while(str[i][j] == kode[indexkode1] && indexkode1 < strlen(kode)){
					j++;
					indexkode1++;
				}
			}
			else{
				j++;
			}
			if(indexkode1 == strlen(kode)){
				banyak++;
				tanda++;
			}
			indexkode1 = 0;
		}while(j < strlen(str[i]) && tanda != 1);
	}
	//printf("%d", banyak);
	return banyak;
}

int main(){
	int n, m;
	scanf("%d", &n);
	char str1[n][51];
	masukan(n, str1);
	scanf("%d", &m);
	char str2[m][51];
	masukan(m, str2);
	char kode[51];
	scanf("%s", &kode);
	
	int hcek1 = cek(n, str1, kode);
	int hcek2 = cek(m, str2, kode);
	if(hcek1 == hcek2){
		printf("valid\n");
	}
	else{
		printf("tidak valid\n");
	}
	
	return 0;
}
