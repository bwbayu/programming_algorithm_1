#include "header.h"

//Saya Bayu Wicaksono NIM 2106836 mengerjakan UAS dalam mata kuliah Algoritma dan Pemrograman 1 untuk keberkahanNya 
//maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin

int main(){
	int n, i, j;
	scanf("%d", &n); //masukan untuk banyak array tipe data terstruktur
	integer angka[n];
	for(i = 0; i < n; i++){//pengulangan untuk banyak array
		for(j = 0; j < 4; j++){//pengulangan untuk isi array
			scanf("%d", &angka[i].arr[j]);
		}
		urutan(n, angka, i); //memanggil prosedur untuk mengurutkan angka
	}
	keluaran(n, angka); //memanggil prosedur untuk menampilkan keluaran
	
	return 0;
}