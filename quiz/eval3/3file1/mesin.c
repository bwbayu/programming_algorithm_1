#include "header.h"

//Saya Bayu Wicaksono NIM 2106836 mengerjakan evaluasi 2 dalam mata kuliah Algoritma dan Pemrograman 1 untuk keberkahanNya 
//maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin

int waktu(int jam, int menit, int detik){//prosedur untuk membuat durasi film menjadi detik
	return (jam * 3600) + (menit * 60) + detik;
}

int split(char film[][201], int i){//prosedur untuk menentukan anagram atau tidaknya
	int index=0, indexkiri=0, indexkanan=0;
	char kiri[201], kanan[201];
	do{ //pengulangan do-while untuk membagi penggalan dialog sebelum '?'
		if(film[i][index] == '_'){ // jika ketemu '_' maka akan dilewati, dengan cara indexnya ditambah
			index++;
		}
		int temp;
		if(film[i][index]>=65 && film[i][index] <= 90){ //membuat huruf kapital menjadi huruf kecil
			temp = film[i][index]; //mengubah huruf menjadi angka
			temp += 32; //membuat angka ascii huruf kapital menjadi angka ascii huruf kecil
			film[i][index] = temp; //memasukkannya kembali ke array of string
		}
		kiri[indexkiri] = film[i][index]; //mengalokasikan karakternya ke array of char kiri
		index++;//iterasi
		indexkiri++;//iterasi
	}while(film[i][index] != '?');
	index++;
	do{//pengulangan do-while untuk membagi penggalan dialog setelah '?' dan sebelum '\0'
		if(film[i][index] == '_'){// jika ketemu '_' maka akan dilewati, dengan cara indexnya ditambah
			index++;
		}
		int temp;
		if(film[i][index]>=65 && film[i][index] <= 90){//membuat huruf kapital menjadi huruf kecil
			temp = film[i][index];//mengubah huruf menjadi angka
			temp += 32;//membuat angka ascii huruf kapital menjadi angka ascii huruf kecil
			film[i][index] = temp;//memasukkannya kembali ke array of string
		}
		kanan[indexkanan] = film[i][index];//mengalokasikan karakternya ke array of char kanan
		index++;//iterasi
		indexkanan++;//iterasi
	}while(film[i][index] != '\0');
	
	if(indexkiri != indexkanan){ //jika jumlah array of char kiri tidak sama dengan yang kanan maka akan langsung di anggap bukan anagram
		printf("Bukan Anagram!\n");
		return 0;
	}
	int j, k;
	
	
	char kosong;
	for(j = 0; j < indexkiri-1; j++){//pengulangan untuk mengurutkan huruf dari a-z untuk array of char kiri
		for(k = j+1; k < indexkiri; k++){
			if(kiri[j] > kiri[k]){
				kosong = kiri[j];
				kiri[j] = kiri[k];
				kiri[k] = kosong;
			}
		}
	}
	for(j = 0; j < indexkanan-1; j++){//pengulangan untuk mengurutkan huruf dari a-z untuk array of char kanan
		for(k = j+1; k < indexkanan; k++){
			if(kanan[j] > kanan[k]){
				kosong = kanan[j];
				kanan[j] = kanan[k];
				kanan[k] = kosong;
			}
		}
	}
	j = 0;
	int tanda=0;
	while(kiri[j] == kanan[j] && j < indexkiri){//akan membandingkan array of char kiri dan kanan, jika sama maka variabel tanda akan bertambah, jika berbeda maka while akan di stop
		tanda++;
		j++;
	}
	
	if(tanda == indexkiri){ //mengecek apakah variabel tanda == indexkiri, jika sama maka dialog tersebut adalah anagram
		printf("Anagram!\n");
		return 1;
	}
	else{//jika tidak maka dialog tersebut bukan anagram
		printf("Bukan Anagram!\n");
		return 0;
	}
}

void split1(int hasil){//prosedur untuk menentukan palindrom atau tidaknya
	int i=0, bagi[201];
	while(hasil > 0){//pengulangan untuk memecah angka, contoh 1221 menjadi 1, 2, 2, 1
		bagi[i] = hasil % 10; //memasukkan satuan dari hasil ke array of integer bagi dengan cara mencari sisa
		hasil /= 10; //menghilangkan satuan yang telah dimasukkan ke array of integer dengan cara membagi dengan 10
		i++;//iterasi
	}
	int index=0, index1=i-1, tanda=0;
	while(bagi[index] == bagi[index1] && index < i/2){//membandingkan index awal dengan index akhir, jika sama maka variabel tanda akan bertambah
		tanda++;//
		index++;
		index1--;
	}
	if(tanda == i/2){ //jika banyaknya variabel tanda sama dengan banyaknya angka dibagi 2, maka akan menampilkan lanjut nonton
		printf("Lanjut Nonton\n");
	}
	else{//jika tidak sama maka akan menampilkan tidur
		printf("Tidur\n");
	}
}