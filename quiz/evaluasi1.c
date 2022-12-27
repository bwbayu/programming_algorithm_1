#include <stdio.h>

//Saya Bayu Wicaksono NIM 2106836 mengerjakan evaluasi 1 dalam mata kuliah Algoritma dan Pemrograman 1 untuk keberkahanNya 
//maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin

int main(){
	int n, m, i, j;
	int baris, kolom;
	scanf("%d", &n);
	char arr[n];//array untuk karakter
	for(i = 0; i < n; i++){//pengulangan untuk memasukkan huruf ke array
		scanf(" %c", &arr[i]);
	}
	scanf("%d", &m); //menentukan jumlah baris bagian bawah
	
	
	int tebalatas = (m / 10) + 1; //variabel untuk menentukan jumlah baris bagian atas
	
	int set = m - (2 * tebalatas); //variabel untuk mencari banyak huruf di baris pertama
	
	int idx; //variabel idx digunakan untuk index array
	int jum = n/2; //jumlah huruf untuk array huruf bagian kiri
	for(baris = tebalatas; baris >= 0; baris--){//pengulangan untuk bagian atas
		for(kolom = 0; kolom < baris ; kolom++){//pengulangan digunakan untuk spasi
			printf(" ");
		}
		idx = 0; //mendeklarasikan index menjadi 0
		for(kolom = 0; kolom < set; kolom++){//pengulangan untuk jumlah huruf bagian kiri yang diprint
			if(idx == jum){//untuk mengecek apakah index sudah mencapai batasnya yaitu variabel jum, jika iya maka index akan mereset menjadi 0 lagi biar hurufnya bisa diulang
				idx = 0;
			}
			printf("%c", arr[idx]);
			idx += 1;//agar index array terus bertambah 1 sehingga bisa nge ngeprint huruf di index berikutnya
		}
		for(kolom = 0; kolom < ((baris * 2) + 1); kolom++){//pengulangan untuk spasi di tengah
			printf(" ");
		}
		idx = jum; //mendeklarasikan index agar mulai dari variabel jum untuk huruf bagian kanan
		for(kolom = 0; kolom < set; kolom++){//pengulangan untuk jumlah huruf bagian kanan yang diprint
			if(idx == n){//untuk mengecek apakah index sudah mencapai batasnya yaitu variabel n, jika iya maka index akan mereset menjadi index jum lagi biar hurufnya bisa diulang
				idx = jum;
			}
			printf("%c", arr[idx]);
			idx += 1;//agar index array terus bertambah 1 sehingga bisa nge print huruf di index berikutnya
		}
		set += 2;//bagian atas itu, banyak huruf awalnya sebanyak set dan huruf tsb banyaknya terus bertambah 2 hingga maksimalnya sebanyak variabel m
		printf("\n");
	}
	int a=m; //jumlah array huruf di bagian kanan
	char akhir; //variabel agar bisa ngeprint huruf terakhir yang sama
	set -= 3;//membalikkan variabel set agar mengembalikkan jumlah huruf yang akan diprint
	int batas1=0, batas2=1; //membuat batasan untuk menentukan kapan jumlah hurufnya berkurang
	for(baris = 0; baris < m; baris++){//pengulangan untuk bagian bawah
		for(kolom = 0; kolom < baris; kolom++){//pengulangan untuk bagian spasi
			printf(" ");
		}
		idx = 0;//mendeklarasikan index menjadi 0
		for(kolom = 0; kolom < set; kolom++){//pengulangan untuk jumlah huruf bagian kiri yang diprint
			if(idx == jum){//untuk mengecek apakah index sudah mencapai batasnya yaitu variabel jum, jika iya maka index akan mereset menjadi 0 lagi biar hurufnya bisa diulang
				idx = 0;
			}
			printf("%c", arr[idx]);
			akhir = arr[idx]; //untuk menyimpan karakter terakhir di variabel akhir
			idx += 1;//agar index array terus bertambah 1 sehingga bisa nge ngeprint huruf di index berikutnya
		}
		batas1 += 1;//agar batasannya bertambah 1
		if(batas1 == 2){//untuk mengecek jika batasannya sudah sama dengan 2 maka jumlah huruf selanjutnya berkurang
			batas1 = 0;
			set -= 2;
		}
		if(a != 0){//untuk mengecek apakah huruf dibagian kanan masih ada atau sudah habis, jika masih ada maka akan ngeprint spasi
			printf("  ");
		}
		idx = jum;//mendeklarasikan index agar mulai dari variabel jum untuk huruf bagian kanan
		for(kolom = 0; kolom < a; kolom++){//pengulangan untuk jumlah huruf bagian kanan yang diprint
			if(idx == n){//untuk mengecek apakah index sudah mencapai batasnya yaitu variabel n, jika iya maka index akan mereset menjadi index jum lagi biar hurufnya bisa diulang
				idx = jum;
			}
			printf("%c", arr[idx]);
			akhir = arr[idx];
			idx += 1;//agar index array terus bertambah 1 sehingga bisa nge print huruf di index berikutnya
		}
		batas2 += 1;//agar batasannya bertambah 1
		if(batas2 == 2){//untuk mengecek jika batasannya sudah sama dengan 2 maka jumlah huruf selanjutnya berkurang
			batas2 = 0;
			a -= 2;
		}
		printf("\n");
	}
	for(baris = 0; baris < 1; baris++){ //pengulangan untuk bagian paling bawah
		for(kolom = 0; kolom < m; kolom++){//pengulangan untuk bagian spasi
			printf(" ");
		}
		printf("%c", akhir);//menampilkan karakter di variabel akhir.
	}
	printf("\n");
	return 0;
}