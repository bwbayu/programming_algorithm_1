#include <stdio.h>

typedef struct{
	int pembilang, penyebut;
}pecahan;

int main(){
	int n, i;
	scanf("%d", &n);
	pecahan arr[n];
	
	for(i = 0; i < n; i++){
		scanf("%d", &arr[i].pembilang);
		scanf("%d", &arr[i].penyebut);
	}

	int banyak=0;
	for(i = 0; i < n; i++){
		if(arr[i].pembilang % arr[i].penyebut == 0){
			banyak+=1;
		}
	}

	pecahan arr1[banyak];
	int index=0, tmp, tmp1;
	for(i = 0; i < n; i++){
		if(arr[i].pembilang % arr[i].penyebut == 0){
			tmp = arr[i].pembilang;
			arr1[index].pembilang = tmp;
			tmp1 = arr[i].penyebut;
			arr1[index].penyebut = tmp1;
			index+=1;
		}
	}
	
	int totalpenyebut=1;
	for(i = 0; i < banyak; i++){
		totalpenyebut *= arr1[i].penyebut;
	}
	int hasilbagi = 0, totalpembilang = 0;
	for(i = 0; i < banyak; i++){
		hasilbagi = (totalpenyebut/arr1[i].penyebut) * arr1[i].pembilang;
		totalpembilang += hasilbagi;
	}
	
	printf("%d\n", totalpembilang/totalpenyebut);
	return 0;
}