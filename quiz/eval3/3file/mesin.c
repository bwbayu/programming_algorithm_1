#include "header.h"

//Saya Bayu Wicaksono NIM 2106836 mengerjakan evaluasi 2 dalam mata kuliah Algoritma dan Pemrograman 1 untuk keberkahanNya 
//maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin

int waktu(int jam, int menit, int detik){
	return (jam * 3600) + (menit * 60) + detik;
}

char huruf(int i, char film[][201]){
	int jumlahkiri=0, jumlahkanan=0;
	char film1[201], film2[201];
	
	int index=0, tandakiri=0, tandakanan=0, temp;
	do{
		temp = film[i][index];
		jumlahkiri += temp;
		if(film[i][index] == '_'){
			tandakiri++;
		}
		index++;
	}while(film[i][index] != '?');
	index++;
	do{
		temp = film[i][index];
		jumlahkanan += temp;
		if(film[i][index] == '_'){
			tandakanan++;
		}
		index++;
	}while(film[i][index] != '\0');
	
	jumlahkiri -= (tandakiri * 95);
	jumlahkanan -= (tandakanan * 95);
	if(jumlahkiri == jumlahkanan){
		return 'y';
	}
	else{
		return 'n';
	}
}

void split(int hasil){
	int i=0, bagi[201];
	while(hasil > 0){
		bagi[i] = hasil % 10;
		hasil /= 10;
		i++;
	}
	int index=0, index1=i-1, tanda=0;
	while(bagi[index] == bagi[index1] && index < i/2){
		tanda++;
		index++;
		index1--;
	}
	if(index == i/2){
		printf("Lanjut Nonton\n");
	}
	else{
		printf("Tidur\n");
	}
}