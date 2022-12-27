#include "header.h"

//Saya Bayu Wicaksono NIM 2106836 mengerjakan UAS dalam mata kuliah Algoritma dan Pemrograman 1 untuk keberkahanNya 
//maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin

int main(){
	int n, i;
	scanf("%d", &n);//masukan untuk menentukan banyaknya string di dalam array of string
	char str[n][101];
	for(i = 0; i < n; i++){//pengulangan untuk masukan setiap stringnya
		scanf("%s", &str[i]);
	}
	char kode[101];
	scanf("%s", &kode);//masukan untuk suku kata
	
	int banyak = cari(n, str, kode); //memanggil fungsi untuk mencari banyak suku kata masukan di dalam array of string
	printf("%d\n", banyak);
	return 0;
}