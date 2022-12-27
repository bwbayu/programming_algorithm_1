#include <stdio.h>

//Saya Bayu Wicaksono NIM 2106836 mengerjakan soal TP6 dalam mata kuliah Algoritma dan Pemrograman 1 untuk keberkahanNya 
//maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin

//deklarasi bungkusan untuk kode makanan, 8 digit kode biner, array berisi nama makanan, jumlah dalam sekali mengambil makanan
typedef struct{
	char kode, nama[100];
	int biner[8], jumlah;
}stok_makanan;

int main(){
	int n, i, j;
	scanf("%d", &n);//masukan user untuk jumlah jenis makanan yang akan diinput sebanyak n
	
	stok_makanan stok[n];//deklarasi bungkusan stok_makanan dengan nama stok sebanyak n
	for(i = 0; i < n; i++){//pengulangan untuk masukan yang ada di bungkusan sebanyak n
		scanf(" %c", &stok[i].kode);//masukan user untuk kode makanan
		
		//int binary=0;
		for(j = 0; j < 8; j++){//pengulangan untuk masukan user berisi 8 digit biner
			scanf("%d", &stok[i].biner[j]);
			//binary++;
		}
		
		scanf(" %c", &stok[i].nama[0]);//masukan user untuk index 0 array nama makanan agar ketika di while bisa di cek apakah huruf ini sama dengan  (;)
		int m = 0;//variabel untuk index nama makanan
		while((stok[i].nama[m] != ';') && (m < 100)){//kondisi apakah isi array tidak sama dengan ; dan m kurang dari 100 (karena total index untuk nama makanan adalah 100), jika iya maka program akan di eksekusi, jika tidak maka program akan dilewati
			m++;//iterasi
			scanf(" %c", &stok[i].nama[m]);
		}
		
		scanf("%d", &stok[i].jumlah);//masukan user untuk jumlah dalam sekali mengambil makanan
	}
	
	char beli[100];//mendeklarasikan array untuk makanan yang diambil sebanyak 100
	scanf(" %c", &beli[0]);//masukan untuk index 0 nya agar bisa di cek ketika di while
	int x = 0;//variabel untuk index makanan yang diambil
	while((beli[x] != '*') && (x < 100)){//kondisi apakah isi array tidak sama dengan * dan x kurang dari 100 (total index untuk makanan yang diambil adalah 100), jika iya maka program akan di eksekusi, jika tidak maka program akan dilewati
		x++;//iterasi
		scanf(" %c", &beli[x]);
	}
	
	printf("Stok Makanan Awal\n");//output untuk stok makanan awal
	int total[n];//mendeklarasikan array total untuk menyimpan hasil konversi dari biner
	for(i = 0; i < n; i++){//pengulangan untuk output
		printf("- %c ", stok[i].kode);//menampilkan kode makanan
		
		int m = 0;//variabel untuk index dari array nama makanan
		while((stok[i].nama[m] != ';') && (m < 100)){//kondisi apakah isi array tidak sama dengan ; dan m < 100, jika iya maka program akan dieksekusi, jika tidak maka program akan dilewati
			printf("%c", stok[i].nama[m]);
			m++;//iterasi
		}
		
		total[i] = 0;//array untuk menyimpan hasil akhir dari konversi
		int desimal = 128;//variabel untuk mengkonversikan bilangan biner menjadi bilangan desimal
		int hasil=0;//variabel untuk menyimpan hasil konversi
		for(j = 0; j < 8; j++){//pengulangan untuk mengkonversikan bilangan biner menjadi bilangan desimal
			hasil = stok[i].biner[j] * desimal;//mengalikan isi setiap index (dimulai dari 0-7)dengan variabel desimal
			total[i] += hasil;//hasil kali isi array dengan variabel desimal akan disimpan di array total
			desimal /= 2;//setiap index bertambah maka variabel desimal juga akan terbagi 2 hingga paling min.1
		}
		printf(" %d\n", total[i]);
	}
	printf("\n");
	
	if(beli[0] != '*'){//mengecek apakah ada kode makanan yang diambil, jika ada maka program di dalam if akan dieksekusi
		printf("Stok Makanan Update\n");
		
		
		int banyak = 0;//variabel untuk menyimpan nilai banyak kode makanan yang diambil
		int hasilakhir = 0;//variabel untuk menyimpan jumlah stok makanan terakhir
		for(i = 0; i < n; i++){//pengulangan untuk output jika ada kode makanan yang diambil
			printf("- %c ", stok[i].kode);//menampilkan kode makanan
		
			int m = 0;//variabel untuk index dari array nama makanan
			while((stok[i].nama[m] != ';') && (m < 100)){//kondisi apakah isi array tidak sama dengan ; dan m < 100, jika iya maka program akan dieksekusi, jika tidak maka program akan dilewati
				printf("%c", stok[i].nama[m]);
				m++;//iterasi
			}
			for(j = 0; j < x; j++){//pengulangan untuk menentukan banyak kode makanan yang diambil
				if(stok[i].kode == beli[j]){//untuk mengecek tiap kode makanan yang diambil ada berapa banyak
					banyak += 1;//untuk menentukan banyak kode makanan yang diambil
				}
			}
			hasilakhir = total[i] - (stok[i].jumlah * banyak);//mencari jumlah stok makanan terakhir
			if(hasilakhir < 0){//jika stok akhirnya bernilai negatif maka akan ditampilkan sebagai 0
				printf(" 0\n");
			}
			else{//jika stok akhirnya bernilai > 0 maka akan ditampilkan
				printf(" %d\n", hasilakhir);
			}
			banyak = 0;//untuk me-reset variabel banyak
		}
	}
	else{//jika tidak ada kode makanan yang diambil maka program dibawah else akan dieksekusi
		printf("---Stok Tetap---\n");
	}
	
	return 0;
}