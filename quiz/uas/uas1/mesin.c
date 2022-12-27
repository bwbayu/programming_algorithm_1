#include "header.h"

//Saya Bayu Wicaksono NIM 2106836 mengerjakan UAS dalam mata kuliah Algoritma dan Pemrograman 1 untuk keberkahanNya 
//maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin

void urutan(int n, integer angka[], int i){//prosedur untuk mengurutkan angka
	int j, k, temp;
	for(j = 0; j < 3; j++){ //pengulangan untuk mengurutkan angka dari kecil ke besar
		for(k = j+1; k < 4; k++){
			if(angka[i].arr[j] > angka[i].arr[k]){
				temp = angka[i].arr[j];
				angka[i].arr[j] = angka[i].arr[k];
				angka[i].arr[k] = temp;
			}
		}
	}
}

void keluaran(int n, integer angka[]){//prosedur untuk menampilkan keluaran
	int i, j, spasi=0, k;
	for(i = 0; i < n; i++){//pengulangan untuk banyak array
		for(j = 0; j < 4; j++){//pengulangan untuk isi array
			for(k = 0; k < spasi; k++){//pengulangan untuk spasi
				printf(" ");
			}
			printf("%d\n", angka[i].arr[j]);//menampilkan angka
		}
		//pengecekan dibawah ini untuk menentukan banyak spasi
		if(angka[i].arr[3] < 10){//jika angkanya 1 digit maka spasi bertambah 1
			spasi++;
		}
		else if(angka[i].arr[3] < 100){//jika angkanya 2 digit maka spasi bertambah 2
			spasi+=2;
		}
		else if(angka[i].arr[3] < 1000){//jika angkanya 3 digit maka spasi bertambah 3
			spasi+=3;
		}
		else{//jika angkanya 4 digit maka spasi bertambah 4
			spasi+=4;
		}
	}
}