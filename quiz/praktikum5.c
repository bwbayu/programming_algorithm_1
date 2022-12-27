#include <stdio.h>

//Saya Bayu Wicaksono NIM 2106836 mengerjakan soal TP5 dalam mata kuliah Algoritma dan Pemrograman 1 untuk keberkahanNya 
//maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin

int main(){
	int n, m, i;
	
	scanf("%d", &n);
	char x1[n]; //membuat array milik Techi yang nantinya diisi oleh kartu dengan huruf A-Z
	for(i = 0; i < n; i++){ //pengulangan ini untuk mengisi array milik Techi yang berisi kartu huruf
		scanf(" %c", &x1[i]);
	}
	
	scanf("%d", &m);
	int x2[m]; //membuat array milik Ellona yang nantinya diisi oleh kartu dengan angka 1-9
	for(i = 0; i < m; i++){ //pengulangan ini untuk mengisi array milik Ellona yang berisi kartu angka
		scanf("%d", &x2[i]);
	}
	
	if(n == m){ //mengecek apakah jumlah kartu Techi dan kartu Ellona sama, jika iya maka program didalam if akan dieksekusi
		for(i = 0; i < n-1; i++){ //pengulangan ini untuk menampilkan secara selang seling dimulai dari kartu milik Techi kemudian Ellona
			printf("%c ", x1[i]);
			printf("%d ", x2[i]);
		}
		printf("%c ", x1[n-1]);
		printf("%d\n", x2[n-1]); //dikarenakan setelah kartu terakhir Ellona tidak boleh ada spasi, oleh karena itu saya membuatnya terpisah
		
		int total1 = 0;
		int x, y;
		for(i = 0; i < n; i++){ //pengulangan ini untuk mengubah array milik Techi yang awalnya berisi huruf dan mengubahnya menjadi angka, setelah itu menjumlahkan angka tersebut
			x = (int)x1[i]; //mengubah array yang isinya huruf agar berubah bentuknya dari char menjadi int
			y = (x-64)%9; //operasi agar huruf A-H menjadi angka 1-8, huruf J-Q menjadi angka 1-8, huruf S-Z menjadi angka 1-8, dan huruf I,R menjadi 0
			if(y == 0){ //mengecek jika ada huruf yang 0, yaitu I atau R maka total1-nya akan bertambah 9 karena I dan R itu bernilai 9
				total1 += 9;
			}
			else{ //jika selain I dan R maka angka tersebut akan ditambahkan ke total1
				total1 += y;
			}
		}
		
		int total2 = 0;
		for(i = 0; i < m; i++){ //pengulangan ini digunakan untuk menjumlahkan isi array milik Ellona yang berisi kartu angka
			total2 += x2[i];
		}
		
		if(total1 == total2){ //mengecek apakah total1 dan total2 sama jika iya maka program dibawah ini akan ditampilkan
			printf("Nilai kartu mereka sama,\n");
			printf("Ada rasa suka di antara mereka.\n");
		}
		else{ //jika total1 dan total2 tidak sama maka program dibawah ini akan ditampilkan
			printf("Nilai kartu mereka tidak sama,\n");
			printf("Mereka cukup berteman baik saja.\n");
		}
	}
	else{ //jika jumlah kartu Techi dan Ellona tidak sama maka program dibawah ini akan ditampilkan.
		printf("Jumlah kartu mereka tidak sama,\n");
		printf("Pertemanan mereka tidak akan serasi.\n");
	}
	return 0;
}