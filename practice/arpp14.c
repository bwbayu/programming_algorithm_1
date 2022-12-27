#include <stdio.h>

//arpp14

void masukan(int n, int arr[]){
	int i;
	for(i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
}

int hpenyebut[51];
int hpembilang[51];

int cari(int n, int pembilang[], int penyebut[]){
	int i, banyak = 0, index=0;
	for(i = 0; i < n; i++){
		if(pembilang[i] % penyebut[i] == 0){
			hpembilang[index] = pembilang[i];
			hpenyebut[index] = penyebut[i];
			index++;
			banyak++;
		}
	}
	return banyak;
}

void keluaran(int n, int arr[]){
	int i;
	printf("%d", arr[0]);
	for(i = 1; i < n; i++){
		printf(" %d", arr[i]);
	}
	printf("\n");
}

int main(){
	int n, m, i;
	//pembilang
	scanf("%d", &n);
	int pembilang[n];
	masukan(n, pembilang);
	//penyebut
	int penyebut[n];
	masukan(n, penyebut);
	
	int banyak = cari(n, pembilang, penyebut);
	keluaran(banyak, hpembilang);
	keluaran(banyak, hpenyebut);
	
	return 0;
}