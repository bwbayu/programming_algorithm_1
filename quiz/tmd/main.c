#include "header.h"

/*Saya Bayu Wicaksono mengerjakan evaluasi Tugas Masa Depan dalam mata kuliah Algoritma dan Pemrograman I 
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

int main(){
	char str[999];
	scanf("%s", &str); //masukan untuk string
	int tebal;
	scanf("%d", &tebal); //masukan untuk ketebalan
	
	int jumlah = strlen(str); //memasukkan strlen(str) ke variabel jumlah
	int bagi[jumlah][10]; //array of integer dua dimensi untuk menyimpan angka ascii yang telah di pisah di prosedur split
	int banyak[jumlah]; //array of integer untuk menyimpan panjang angka ascii huruf
	split(str, bagi, banyak); //memanggil prosedur split untuk memecah angka ascii huruf contohnya 97 jadi 9 dan 7, 117 jadi 1, 1, dan 7
	
	int i, j;
	for(i = 0; i < 5; i++){ //pengulangan untuk prosedur keluaran karena polanya dibagi menjadi 5 bagian/baris sehingga diulang sebanyak 5x
		keluaran(bagi, banyak, jumlah, tebal, i); //memanggil prosedur keluaran
	}

	return 0;
}