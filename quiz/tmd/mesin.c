#include "header.h"

/*Saya Bayu Wicaksono mengerjakan evaluasi Tugas Masa Depan dalam mata kuliah Algoritma dan Pemrograman I 
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

void split(char str[], int bagi[][10], int banyak[]){ //prosedur untuk memecah angka ascii huruf contohnya 97 jadi 9 dan 7, 117 jadi 1, 1, dan 7
	int i, j, temp;
	
	for(i = 0; i < strlen(str); i++){//pengulangan untuk setiap huruf string masukan
		temp = str[i]; //mengubah huruf menjadi angka ascii
		j = 0; //untuk menyimpan panjang angka ascii
		if(temp < 100){//jika angka ascii puluhan maka akan masuk if
			bagi[i][0] = temp / 10; //memecah angka ascii puluhan
			bagi[i][1] = temp % 10; //memecah angka ascii satuan
			j = 2; //untuk angka ascii puluhan memiliki panjang 2
		}
		else{ //jika angka ascii ratusan maka akan masuk else
			bagi[i][0] = temp / 100; //memecah angka ascii ratusan
			bagi[i][1] = (temp % 100) / 10; //memecah angka ascii puluhan
			bagi[i][2] = temp % 10; //memecah angka ascii satuan
			j = 3; //untuk angka ascii ratusan memiliki panjang 3
		}
		banyak[i] = j; //mengalokasikan variabel j ke array of integer banyak[]
	}
}

void m(int tebal, int tanda){ //prosedur untuk pola spasi-B-spasi
	int j;
	for(j = 0; j < tebal; j++){ //pengulangan untuk pola spasi
		printf(" ");
	}
	for(j = 0; j < tebal; j++){ //pengulangan untuk pola B
		printf("B");
	}
	//jika tanda == 0 maka angka ascii tersebut bukan angka ascii terakhir maka akan masuk ke if dan menampilkan pola spasi
	//jika tanda == 1 maka angka ascii tersebut angka ascii terakhir maka tidak akan masuk ke if dan tidak akan menampilkan pola spasi
	if(tanda == 0){ 
		for(j = 0; j < tebal; j++){ //pengulangan untuk pola spasi
			printf(" ");
		}
	}
}

void rl(int tebal){ //prosedur untuk pola B-spasi-B
	int j;
	for(j = 0; j < tebal; j++){ //pengulangan untuk pola B
		printf("B");
	}
	for(j = 0; j < tebal; j++){ //pengulangan untuk pola spasi
		printf(" ");
	}
	for(j = 0; j < tebal; j++){ //pengulangan untuk pola B
		printf("B");
	}
}

void l(int tebal){ //prosedur untuk pola spasi-spasi-B
	int j;
	for(j = 0; j < tebal*2; j++){ //pengulangan untuk pola spasi
		printf(" ");
	}
	for(j = 0; j < tebal; j++){ //pengulangan untuk pola B
		printf("B");
	}
}

void r(int tebal, int tanda){//prosedur untuk pola B-spasi-spasi
	int j;
	for(j = 0; j < tebal; j++){ //pengulangan untuk pola B
		printf("B");
	}
	//jika tanda == 0 maka angka ascii tersebut bukan angka ascii terakhir maka akan masuk ke if dan menampilkan pola spasi
	//jika tanda == 1 maka angka ascii tersebut angka ascii terakhir maka tidak akan masuk ke if dan tidak akan menampilkan pola spasi
	if(tanda == 0){
		for(j = 0; j < tebal*2; j++){ //pengulangan untuk pola spasi
			printf(" ");
		}
	}
}

void rm(int tebal, int tanda){//prosedur untuk pola B-B-spasi
	int j;
	for(j = 0; j < tebal*2; j++){ //pengulangan untuk pola B
		printf("B");
	}
	
	//jika tanda == 0 maka angka ascii tersebut bukan angka ascii terakhir maka akan masuk ke if dan menampilkan pola spasi
	//jika tanda == 1 maka angka ascii tersebut angka ascii terakhir maka tidak akan masuk ke if dan tidak akan menampilkan pola spasi
	if(tanda == 0){
		for(j = 0; j < tebal; j++){ //pengulangan untuk pola spasi
			printf(" ");
		}
	}
}

void one(int tebal){//prosedur khusus untuk angka 1
	int j;
	for(j = 0; j < tebal; j++){//pengulangan untuk pola B
		printf("B");
	}
}

void rr(int tebal, int tanda){//prosedur untuk pola B-spasi
	int j;
	for(j = 0; j < tebal; j++){//pengulangan untuk pola B
		printf("B");
	}
	
	//jika tanda == 0 maka angka ascii tersebut bukan angka ascii terakhir maka akan masuk ke if dan menampilkan pola spasi
	//jika tanda == 1 maka angka ascii tersebut angka ascii terakhir maka tidak akan masuk ke if dan tidak akan menampilkan pola spasi
	if(tanda == 0){
		for(j = 0; j < tebal; j++){//pengulangan untuk pola spasi
			printf(" ");
		}
	}
}

void ll(int tebal){//prosedur untuk pola spasi-B
	int j;
	for(j = 0; j < tebal; j++){//pengulangan untuk pola spasi
		printf(" ");
	}
	for(j = 0; j < tebal; j++){//pengulangan untuk pola B
		printf("B");
	}
}

void spasi(int tebal, int tebalkhusus){//prosedur untuk spasi
	int j;
	for(j = 0; j < tebalkhusus; j++){//pengulangan untuk spasi
		printf(" ");
	}
}

void keluaran(int bagi[][10], int banyak[], int jumlah, int tebal, int baris){//prosedur untuk keluaran pola dan spasi
	int angka, i, j, h;
	int tebalkhusus = tebal * 2;
	int tanda;
	for(h = 0; h < tebal; h++){ //pengulangan untuk tebal pola
		for(i = 0; i < jumlah; i++){ //pengulangan untuk setiap huruf dalam string
			for(j = 0; j < banyak[i]; j++){ //pengulangan untuk setiap angka ascii huruf
				angka = bagi[i][j]; //memasukkan angka ascii ke variabel angka
				tanda = 0;//meninisialisasi tanda = 0 dan untuk mereset variabel tanda
				
				//if dibawah digunakan untuk menandakan jika angka ascii tersebut adalah angka ascii terakhir
				if(i == jumlah-1 && j == banyak[i]-1){
					tanda=1; //variabel tanda akan berubah menjadi 1
				}
				
				//if dibawah untuk mengecek baris mana yang akan dipanggil
				if(baris == 0){ //jika baris == 0 maka akan memanggil prosedur cari1 dan akan menampilkan pola baris 1
					cari1(tebal, angka, tanda);//memanggil prosedur cari1
				}
				else if(baris == 1){ //jika baris == 1 maka akan memanggil prosedur cari2 dan akan menampilkan pola baris 2
					cari2(tebal, angka, tanda);//memanggil prosedur cari2
				}
				else if(baris == 2){ //jika baris == 2 maka akan memanggil prosedur cari3 dan akan menampilkan pola baris 3
					cari3(tebal, angka, tanda);//memanggil prosedur cari3
				}
				else if(baris == 3){ //jika baris == 3 maka akan memanggil prosedur cari4 dan akan menampilkan pola baris 4
					cari4(tebal, angka, tanda);//memanggil prosedur cari4
				}
				else if(baris == 4){ //jika baris == 4 maka akan memanggil prosedur cari5 dan akan menampilkan pola baris 5
					cari5(tebal, angka, tanda);//memanggil prosedur cari5
				}
				
				//if dibawah digunakan agar angka ascii huruf terakhir tidak menampilkan spasi
				//spasi dibawah ini adalah spasi pemisah angka ascii dalam suatu huruf
				if(j < banyak[i]-1){
					spasi(tebal, tebal); //memanggil prosedur spasi yang banyaknya 1x tebal
				}
			}
			//if dibawah digunakan agar huruf terakhir tidak menampilkan spasi
			//spasi dibawah ini adalah spasi pemisah huruf dalam suatu string
			if(i < jumlah-1){
				spasi(tebal, tebalkhusus); //memanggil prosedur spasi yang banyaknya 2x tebal
			}
		}
		printf("\n");
	}
	
}

void cari1(int tebal, int angka, int tanda){ //prosedur untuk pola baris 1
	//if dibawah ini akan memanggil prosedur pola
	if(angka == 0 || angka == 2 || angka == 5 || angka == 6 || angka == 8 || angka == 9){ //baris 1 untuk angka ascii 0, 2, 5, 6, 8, 9 memiliki pola spasi-B-spasi
		m(tebal, tanda); //sehingga memanggil prosedur m
	}
	else if(angka == 1){ //baris 1 untuk angka ascii 1 memiliki pola B
		one(tebal); //sehingga memanggil prosedur one
	}
	else if(angka == 3){ //baris 1 untuk angka ascii 3 memiliki pola B-spasi
		rr(tebal, tanda); //sehingga memanggil prosedur rr
	}
	else if(angka == 4){ //baris 1 untuk angka ascii 4 memiliki pola B-spasi-B
		rl(tebal); //sehingga memanggil prosedur rl
	}
	else if(angka == 7){ //baris 1 untuk angka ascii 7 memiliki pola B-B-spasi
		rm(tebal, tanda); //sehingga memanggil prosedur rm
	}
}

void cari2(int tebal, int angka, int tanda){ //prosedur untuk pola baris 2
	//if dibawah ini akan memanggil prosedur pola
	if(angka == 0 || angka == 4 || angka == 8 || angka == 9){ //baris 2 untuk angka ascii 0, 4, 8, 9 memiliki pola B-spasi-B
		rl(tebal); //sehingga memanggil prosedur rl
	}
	else if(angka == 1){ //baris 2 untuk angka ascii 1 memiliki pola B
		one(tebal); //sehingga memanggil prosedur one
	}
	else if(angka == 2 || angka == 7){ //baris 2 untuk angka ascii 2, 7 memiliki pola spasi-spasi-B
		l(tebal); //sehingga memanggil prosedur l
	}
	else if(angka == 3){ //baris 2 untuk angka ascii 3 memiliki pola spasi-B
		ll(tebal); //sehingga memanggil prosedur ll
	}
	else if(angka == 5 || angka == 6){ //baris 2 untuk angka ascii 5, 6 memiliki pola B-spasi-spasi
		r(tebal, tanda); //sehingga memanggil prosedur r
	}
}

void cari3(int tebal, int angka, int tanda){ //prosedur untuk pola baris 3
	//if dibawah ini akan memanggil prosedur pola
	if(angka == 0){ //baris 3 untuk angka ascii 0 memiliki pola B-spasi-B
		rl(tebal); //sehingga memanggil prosedur rl
	}
	else if(angka == 1){ //baris 3 untuk angka ascii 1 memiliki pola B
		one(tebal); //sehingga memanggil prosedur one
	}
	else if(angka == 2 || angka == 4 || angka == 5 || angka == 6 || angka == 8 || angka == 9){ //baris 3 untuk angka ascii 2, 4, 5, 6, 8, 9 memiliki pola spasi-B-spasi
		m(tebal, tanda); //sehingga memanggil prosedur m
	}
	else if(angka == 3){ //baris 3 untuk angka ascii 3 memiliki pola B-spasi
		rr(tebal, tanda); //sehingga memanggil prosedur rr
	}
	else if(angka == 7){ //baris 3 untuk angka ascii 7 memiliki pola spasi-spasi-B
		l(tebal); //sehingga memanggil prosedur l
	}
}

void cari4(int tebal, int angka, int tanda){ //prosedur untuk pola baris 4
	//if dibawah ini akan memanggil prosedur pola
	if(angka == 0 || angka == 6 || angka == 8){ //baris 4 untuk angka ascii memiliki pola B-spasi-B
		rl(tebal); //sehingga memanggil prosedur rl
	}
	else if(angka == 1){ //baris 4 untuk angka ascii 1 memiliki pola one
		one(tebal); //sehingga memanggil prosedur one
	}
	else if(angka == 2){ //baris 4 untuk angka ascii 2 memiliki pola B-spasi-spasi
		r(tebal, tanda); //sehingga memanggil prosedur r
	}
	else if(angka == 3){ //baris 4 untuk angka ascii 3 memiliki pola spasi-B
		ll(tebal); //sehingga memanggil prosedur ll
	}
	else if(angka == 4 || angka == 5 || angka == 7 || angka == 9){ //baris 4 untuk angka ascii 4, 5, 7, 9 memiliki pola spasi-spasi-B
		l(tebal); //sehingga memanggil prosedur l
	}
}

void cari5(int tebal, int angka, int tanda){ //prosedur untuk pola baris 5
	//if dibawah ini akan memanggil prosedur pola
	if(angka == 0 || angka == 2 || angka == 5 || angka == 6 || angka == 8 || angka == 9){ //baris 5 untuk angka ascii 0, 2, 5, 6, 8, 9 memiliki pola spasi-B-spasi
		m(tebal, tanda); //sehingga memanggil prosedur m
	}
	else if(angka == 1){ //baris 5 untuk angka 1 ascii memiliki pola one
		one(tebal); //sehingga memanggil prosedur one
	}
	else if(angka == 3){ //baris 5 untuk angka ascii 3 memiliki pola B-spasi
		rr(tebal, tanda); //sehingga memanggil prosedur rr
	}
	else if(angka == 4 || angka == 7){ //baris 5 untuk angka ascii 4, 7 memiliki pola spasi-spasi-B
		l(tebal); //sehingga memanggil prosedur l
	}
}