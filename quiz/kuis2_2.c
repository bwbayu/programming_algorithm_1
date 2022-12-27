#include <stdio.h>
#include <string.h>

//Saya Bayu Wicaksono NIM 2106836 mengerjakan kuis 2 dalam mata kuliah Algoritma dan Pemrograman 1 untuk keberkahanNya 
//maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin

int main(){
	int n, i, j; //masukan
	scanf("%d", &n);
	char str[n][201];
	for(i = 0; i < n; i++){
		scanf("%s", &str[i]);
	}
	
	int jumlah[n]; //array untuk menyimpan strlen dari setiap string
	for(i = 0; i < n; i++){ //perulangan untuk menyimpan strlen dari setiap string ke array baru
		jumlah[i] = strlen(str[i]);
	}
	int panjang; //variabel untuk menyimpan strlen yang paling panjang
	for(i = 0; i < n-1; i++){ //perulangan untuk menentukan strlen yang paling panjang dengan cara mengurutkan dari paling besar ke paling kecil
		for(j = i+1; j < n; j++){
			if(jumlah[i] < jumlah[j]){
				panjang = jumlah[i];
				jumlah[i] = jumlah[j];
				jumlah[j] = panjang;
			}
		}
	}
	panjang = jumlah[0]; //makanya var panjang diisi oleh index 0
	
	int spasi=0;
	for(i = 0; i < n; i++){ //perulangan untuk keluaran
		if(strlen(str[i]) < panjang){ //mengecek apakah panjang string index i < var panjang, jika iya maka harus ada spasi dulu sebelum menampilkan karakternya
			spasi = panjang - strlen(str[i]); //menentukan banyaknya spasi
			for(j = 0; j < spasi; j++){ //menampilkan spasinya
				printf(" ");
			}
		}
		for(j = strlen(str[i])-1; j >= 0; j--){ //menampilkan karakternya
			printf("%c", str[i][j]);
		}
		printf("\n");
		
		
		if(strlen(str[i]) > strlen(str[i+1]) && i < n-1){ //untuk enter yang muncul ketika ada string ke i yang lebih panjang daripada string setelahnya
			printf("\n");
		}
	}
	
	return 0;
}