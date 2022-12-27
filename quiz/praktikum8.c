#include <stdio.h>
#include <string.h>

//Saya Bayu Wicaksono NIM 2106836 mengerjakan soal TP8 dalam mata kuliah Algoritma dan Pemrograman 1 untuk keberkahanNya 
//maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin

int main(){
	int n, i, j;
	char kunci[50]; //mendeklarasikan string untuk string kunci
	scanf("%s", &kunci);
	scanf("%d", &n);
	char arr[n][50]; //deklarasi array of string untuk string folder
	for(i = 0; i < n; i++){ //pengulangan untuk inputan string folder sebanyak n
		scanf("%s", arr[i]);
	}

	//mencari k dengan menjumlahkan nilai ascii dari string kunci
	int total = 0; //var untuk menyimpan nilai k
	int totalhuruf = 26; //var untuk menyimpan banyak huruf yaitu 26
	for(i = 0; i < strlen(kunci); i++){ //pengulangan untuk menjumlahkan setiap char di string kunci
		total += kunci[i];
	}
	total %= totalhuruf; //rumus untuk menemukan nilai k, setelah dijumlahkan ascii dari string kunci kemudian di modulus 26
	
	//menghilangkan *
	char folder[n][50]; //deklarasi array of string untuk string folder yang tidak ada *
	int tanda, batas, bintang;
	int jumlah[n]; //deklarasi array jumlah untuk menyimpan strlen(folder)
	for(i = 0; i < n; i++){ //pengulangan untuk menghilangkan *
		tanda = 0; //var tanda untuk index string yang masih ada * nya. Ini juga buat nge reset var tanda
		batas = 0; //var batas untuk index string yang tidak ada * nya. Ini juga buat nge reset var batas
		bintang = 0; //var bintang untuk menentukan banyaknya * di setiap string folder. Ini juga buat nge reset var bintang
		do{ //pengulangan untuk mengecek ada atau tidaknya * di setiap string folder
			if(arr[i][tanda] == '*'){ //mengecek setiap char, jika * maka var bintang dan tanda akan bertambah
				tanda++; //iterasi
				bintang++; //iterasi
			}
			else{ //jika char tsb bukan *, maka 
				folder[i][batas] = arr[i][tanda];//char tsb akan dimasukkan ke string folder
				batas++; //iterasi
				tanda++; //iterasi
				
			}
		}while(tanda < strlen(arr[i])); //kondisi agar pengulangan terus terjadi selama var tanda < dari panjang string folder yang masih ada *
		jumlah[i] = strlen(arr[i]) - bintang; //menyimpan panjang string folder yang tidak ada * nya di array jumlah
	}
	
	//deklarasi untuk string folder1, ini tuh sama seperti string folder, string folder1 ini nanti akan digunakan untuk keluaran yang kamus
	char folder1[n][50];
	for(i = 0; i < n; i++){ //pengulangan mengisi string folder1
		for(j = 0; j < jumlah[i]; j++){ //pengulangan untuk memasukkan setiap charnya
			folder1[i][j] = folder[i][j];
		}
	}
	
	//enkripsi untuk mengganti setiap alfabet pada string dengan k alfabet sebelumnya
	int tmp;//var tmp untuk menyimpan nilai ascii setiap char
	for(i = 0; i < n; i++){//pengulangan untuk setiap stringnya
		for(j = 0; j < jumlah[i]; j++){ //pengulangan untuk setiap charnya
			tmp = folder[i][j]; //mengubah tipe data char menjadi tipe data integer
			if((tmp >= 65) && (tmp <= 90)){ //mengecek apakah char tsb A-Z, jika iya maka program di dalam if akan di eksekusi
				tmp -= total; //mengurangi var tmp dengan var total/nilai k
				if(tmp < 64){ //mengecek apakah setelah dikurangi nilainya kurang dari 64, jika iya maka
					tmp += totalhuruf; //var tmp akan ditambah var totalhuruf yaitu 26
					folder[i][j] = tmp; //setelah ditambahkan, kemudian dialokasikan ke string folder dan tipe data int nya diubah lagi jadi tipe data char
				}
				else{ //jika setelah dikurang nilainya ada diantara 65-90 maka 
					folder[i][j] = tmp; //akan langsung dialokasikan ke string folder dan tipe data int nya diubah lagi jadi tipe data char
				}
			}
			else if((tmp >= 97) && (tmp <= 122)){ //jika char tsb a-z, maka program di dalam else if akan di eksekusi
				tmp -= total; //mengubah tipe data char menjadi tipe data integer
				if(tmp < 96){ //mengecek apakah setelah dikurangi nilainya kurang dari 96, jika iya maka
					tmp += totalhuruf; //var tmp akan ditambahkan var totalhuruf yaitu 26;
					folder[i][j] = tmp; //setelah ditambahkan, kemudian dialokasikan ke string folder dan tipe data int nya diubah lagi jadi tipe data char
				}
				else{ //jika setelah dikurangi nilainya ada di antara 97-122 maka
					folder[i][j] = tmp; //akan langsung dialokasikan ke string folder dan tipe data int nya diubah lagi jadi tipe data char
				}
			}
		}
	}
	
	//mencari string paling besar buat string folder yang diindikasikan ada virus
	int jumlah1[n]; //membuat array jumlah1 yang fungsinya sama seperti array jumlah yaitu untuk menyimpan strlen(folder)
	for(i = 0; i < n; i++){ //pengulangan untuk mengisi array jumlah1
		jumlah1[i] = jumlah[i];
	}
	int virus=0; //deklarasi var virus untuk menyimpan string folder yang paling besar
	for(i = 0; i < n-1; i++){ //pengulangan untuk mengurutkan nilai di array jumlah1 dari paling besar ke paling kecil
		for(j = i+1; j < n; j++){ //pengulangan untuk pembandingnya
			if(jumlah1[i] < jumlah1[j]){ //mengecek apakah nilai di array jumlah1 lebih besar, jika iya maka program didalam if akan dieksekusi
				virus = jumlah1[i]; //menyimpan nilai yang lebih kecil di var virus
				jumlah1[i] = jumlah1[j]; //mengisi array yang nilainya lebih kecil dengan nilai yang lebih besar
				jumlah1[j] = virus; //mengisi array yang nilainya lebih besar dengan nilai yang lebih kecil
			}
		}
	}
	virus = jumlah1[0]; //mengalokasikan nilai paling besar ke var virus

	//mendeteksi jumlah ascii setiap di string folder
	int banyakfolder[n], pengubah = 0;
	for(i = 0; i < n; i++){ //pengulangan untuk index string folder
		pengubah = 0; //var pengubah untuk tempat menyimpan nilai setiap char di setiap string folder, dan ini juga untuk mereset var pengubah
		for(j = 0; j < jumlah[i]; j++){ //pengulangan untuk index char di setiap string folder
			pengubah += folder[i][j]; //mengubah tipe data char di string folder menjadi tipe data int kemudian menjumlahkan setiap char di setiap string folder dan menyimpannya di var pengubah
		}
		banyakfolder[i] = pengubah; //mengalokasikan total setiap string folder ke array banyakfolder
	}
	
	printf(">> Deteksi Virus <<\n");
	// keluaran 1
	int spasi = 0; //untuk spasi di keluaran 1
	for(i = 0; i < n; i++){  //pengulangan untuk index string folder
		if(banyakfolder[i] % 2 == 1){ //mengecek apakah string folder index i genap, jika iya maka program di dalam if akan dieksekusi
			for(j = 0; j < jumlah[i]; j++){ //pengulangan untuk index char di setiap string folder
				printf("%c", folder[i][j]); //karena string tsb diindikasikan aman dari virus. oleh karena itu, posisi stringnya rata kiri jadi ga perlu pake spasi
			}
		}
		else{ //jika string folder index i ganjil, maka program di dalam else akan dieksekusi
			spasi = virus - jumlah[i]; //karena string tsb diindikasikan ada virusnya. oleh karena itu, posisi stringnya rata kanan jadi perlu pake spasi
			for(j = 0; j < spasi; j++){ //pengulangan untuk spasi
				printf(" ");
			}
			for(j = 0; j < jumlah[i]; j++){ //pengulangan untuk index char di setiap string folder
				printf("%c", folder[i][j]);
			}
		}
		printf("\n");
	}
	
	//keluaran 2
	printf("\n>> Path Directory Asli <<\n");
	int garis = 92; //untuk tanda '\'
	for(i = 0; i < n; i++){ //pengulangan untuk index string folder
		for(j = 0; j < jumlah[i]; j++){ //pengulangan untuk index char di setiap string folder
			printf("%c", folder[i][j]);
		}
		if(i < n-1){ //untuk tanda '\'
			printf("%c", garis);
		}
	}
	printf("\n\n");
	
	//keluaran 3
	printf(">> Kamus <<\n");
	for(i = 0; i < n; i++){ //pengulangan untuk index string folder dan folder1
		printf("%d. [", i+1);
		for(j = 0; j < jumlah[i]; j++){ //pengulangan untuk index setiap char di string folder1
			printf("%c", folder1[i][j]);
		}
		printf("] -> [");
		for(j = 0; j < jumlah[i]; j++){ //pengulangan untuk index setiap char di string folder
			printf("%c", folder[i][j]);
		}
		printf("]\n");
	}
	
	return 0;
}