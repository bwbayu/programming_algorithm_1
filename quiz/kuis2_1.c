#include <stdio.h>
#include <string.h>

//Saya Bayu Wicaksono NIM 2106836 mengerjakan kuis 2 dalam mata kuliah Algoritma dan Pemrograman 1 untuk keberkahanNya 
//maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin

int main(){
	char str[999], arr[10], kata[11]; //masukan
	scanf("%s", &str);
	scanf("%s", &arr);
	int n;
	scanf("%d", &n);
	scanf("%s", &kata);
	
	int i, posisi=0, j; //untuk menentukan jumlah ascii dari kata genap/ganjil
	for(i = 0; i < strlen(arr); i++){
		posisi += arr[i];
	}
	
	char genap[999], ganjil[999];
	int index=0, indexkata=0, indexkata1=0, banyak=0;
	if(posisi == 523){ //buat yang genap
		for(i = 1; i < strlen(str); i+=2){ //pengulangan untuk keluaran yang string bentukan dari karakter posisi genap. Sekalian memasukkan karakter posisi genap ke array baru
			genap[index] = str[i];
			printf("%c", genap[index]);
			index++;
		}
		printf("\n");
		
		index = 0;
		do{ //pengulangan untuk menentukan berapa banyak suku kata masukan di dalam string posisi genap
			if(genap[index] == kata[indexkata]){ //mengecek apakah karakter di string posisi genap == karakter di suku kata
				indexkata1 = indexkata; //var indexkata1 itu untuk meneruskan pengecekan ke karakter selanjutnya dan juga untuk tanda
				while(genap[index] == kata[indexkata1] && indexkata1 < strlen(kata)){ //karakter sebanyak n akan di cek perulangan ini
					indexkata1++;
					index++;
				}
			}
			else{ //jika karater di string posisi genap != karakter di suku kata, maka akan melanjutkan untuk mengecek index selanjutnya dari string posisi genap
				index++;
			}
			if(indexkata1 == strlen(kata)){ //ketika perulangan selesai, entah karena ada karater yang beda atau karena perulangannya whilenya sudah selesai, maka akan dicek apakah tanda/indexkata1 == panjang suku kata, jika iya maka variabel banyak akan bertambah 1, jika tidak maka tidak terjadi apa apa
				banyak++;
			}
			indexkata1 = 0; //untuk mereset var indexkata1/tanda yang digunakan untuk menghitung ketika ada karakter yang sama
			indexkata = 0; //untuk mereset index string suku kata
			
		}while(index < strlen(genap)); //perulangan while akan terus terjadi selama index string posisi < panjang string posisi
		
		printf("%d\n", banyak);
		
	}
	else if(posisi == 629){ //buat yang ganjil
		for(i = 0; i < strlen(str); i+=2){ //pengulangan untuk keluaran yang string bentukan dari karakter posisi ganjil. Sekalian memasukkan karakter posisi ganjil ke array baru
			ganjil[index] = str[i];
			printf("%c", ganjil[index]);
			index++;
		}
		printf("\n");
		
		index = 0;
		do{ //pengulangan untuk menentukan berapa banyak suku kata masukan di dalam string posisi ganjil
			if(ganjil[index] == kata[indexkata]){ //mengecek apakah karakter di string posisi ganjil == karakter di suku kata
				indexkata1 = indexkata; //var indexkata1 itu untuk meneruskan pengecekan ke karakter selanjutnya dan juga untuk tanda
				while(ganjil[index] == kata[indexkata1] && indexkata1 < strlen(kata)){ //karakter sebanyak n akan di cek perulangan ini
					indexkata1++;
					index++;
				}
			}
			else{ //jika karater di string posisi ganjil != karakter di suku kata, maka akan melanjutkan untuk mengecek index selanjutnya dari string posisi ganjil
				index++;
			}
			if(indexkata1 == strlen(kata)){ //ketika perulangan selesai, entah karena ada karater yang beda atau karena perulangannya whilenya sudah selesai, maka akan dicek apakah tanda/indexkata1 == panjang suku kata, jika iya maka variabel banyak akan bertambah 1, jika tidak maka tidak terjadi apa apa
				banyak++;
			}
			indexkata1 = 0; //untuk mereset var indexkata1/tanda yang digunakan untuk menghitung ketika ada karakter yang sama
			indexkata = 0; //untuk mereset index string suku kata
			
		}while(index < strlen(ganjil)); //perulangan while akan terus terjadi selama index string posisi < panjang string posisi
		
		printf("%d\n", banyak);
	}
	
	return 0;
}