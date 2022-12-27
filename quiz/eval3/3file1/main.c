#include "header.h"

//Saya Bayu Wicaksono NIM 2106836 mengerjakan evaluasi 2 dalam mata kuliah Algoritma dan Pemrograman 1 untuk keberkahanNya 
//maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin

int main(){
	int n;
	scanf("%d", &n); //masukan untuk banyak penggalan dialog
	char film[n][201];
	int i;
	for(i = 0; i < n; i++){//pengulangan untuk masukan penggalan dialog
		scanf("%s", &film[i]);
	}
	int jam, menit, detik;
	scanf("%d:%d:%d", &jam, &menit, &detik); //masukan untuk durasi film
	
	int totalwaktu;
	totalwaktu = waktu(jam, menit, detik); //memanggil prosedur totalwaktu
	
	int banyak=0;
	for(i = 0; i < n; i++){ //pengulangan untuk memanggil prosedur split
		banyak += split(film, i);
	}
	
	printf("\n");
	int hasil = banyak + totalwaktu; //variabel untuk menjumlahkan durasi film dalam detik dan banyaknya anagram
	split1(hasil); //memanggil prosedur split1
	
	return 0;
}