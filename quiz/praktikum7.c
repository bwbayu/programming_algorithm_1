#include <stdio.h>
#include <string.h>

//Saya Bayu Wicaksono NIM 2106836 mengerjakan soal TP7 dalam mata kuliah Algoritma dan Pemrograman 1 untuk keberkahanNya 
//maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin

int main(){
	char str[50]; //string untuk masukan
	scanf("%s", &str); //meminta masukan user
	char kiri[50]; //string untuk kata di kiri sebelum tanda !
	char kanan[50]; //string untuk kata di kanan setelah tanda !
	char arr[50]; //string untuk menyimpan output tanpa kunci
	char arr1[50]; //string untuk menyimpan output enkripsi 2
	
	int index=0, tanda=0; //var index untuk index dari string, var tanda untuk menyimpan angka 1 jika ditemukan tanda !
	do{ //pengulangan untuk mengecek apakah di string masukan ada tanda !
		if(str[index] == '!'){ //jika di salah satu index ada tanda !
			tanda+=1; //variabel tanda akan bertambah 1
		}
		else{ //jika indexnya belum menemukan tanda ! atau tidak ada tanda !, maka
			tanda+=0; //variabel tanda akan bertambah 0
		}
		index++; //iterasi
	}while(index < strlen(str)); //perulangan akan terus diulang selama index < panjang string masukan
	
	if(tanda == 1){ //jika di string masukan ada tanda ! maka program akan dilanjutkan
		int bataskata = 0; //variabel untuk index string kiri
		index = 0; //variabel untuk index string masukan
		//line 30-42 itu aku membagi string masukan menjadi string kiri dan string kanan, patokannya tanda !
		do{//pengulangan untuk string kiri
			kiri[bataskata] = str[index]; //memasukkan string masukan sebelum tanda ! ke string kiri
			bataskata++; //iterasi untuk index string kiri
			index++; //iterasi untuk index string masukan
		}while(str[index] != '!'); //perulangan akan terus diulang selama index string masukan tidak sama dengan tanda !
		
		int bataskunci = 0; //variabel untuk index string kanan
		int index1 = index + 1; //variabel untuk index string masukan, kenapa index + 1 ? agar tanda ! nya dilompati dan tidak masuk ke string kanan
		do{ //pengulangan untuk string kanan
			kanan[bataskunci] = str[index1]; //memasukkan string masukan setelah tanda ! ke string kanan
			bataskunci++; //iterasi untuk index string kanan
			index1++; //iterasi untuk index string masukan
		}while(index1 < strlen(str)); //perulangan akan terus diulang selama index string masukan lebih kecil dari panjang string masukan
		
		int indexkanan;  //var untuk index string kanan
		int indexkiri; //var untuk index string kiri
		int batas; //var untuk batasan ketika membandingkan string kiri dan string kanan
		int indexkiri1; //var untuk index string kiri lagi (jika string kanan > 1)
		
		index = 0; //mendeklarasikan index string tanpa kunci = 0
		indexkiri = 0; //mendeklarasikan index string kiri = 0
		//pengulangan untuk mencari output tanpa kunci
		while(indexkiri < bataskata){ //while akan terus diulang selama index string kiri < bataskata (bataskata adalah panjang kata di string kiri/strlen(kiri))
			batas = 0; //mendeklarasikan batas = 0
			indexkanan = 0; //mendeklarasikan index string kanan = 0
			if(kiri[indexkiri] == kanan[indexkanan]){ //mengecek apakah char di string kiri == char di string kanan, jika iya maka program dibawah akan dijalankan
				batas++; //iterasi untuk var batas
				indexkiri1 = indexkiri + 1; //iterasi untuk var indexkiri1
				indexkanan++; //iterasi untuk var indexkanan
				while((kiri[indexkiri1] == kanan[indexkanan]) && (batas != bataskunci)){ //perulangan jikalau string kanannya lebih dari 1 dan akan terus mengecek apakah charnya sama atau tidak, jika var batas sudah sama dengan panjang kata di string kanan / strlen(kanan) maka perulangan tidak akan dijalankan/akan berhenti
					indexkiri1++; //iterasi untuk var indexkiri1
					indexkanan++; //iterasi untuk var indexkanan
					batas++; //iterasi untuk var batas
				}
				if(batas == bataskunci){ //mengecek apakah var batas == var bataskunci/strlen(kanan)
					indexkiri = indexkiri1; //jika sama maka hurufnya tidak akan dimasukkan ke string tanpa kunci, jadi indexkirinya akan melanjutkan mengecek dimulai dari indexkiri1
				}
				else{ //jika tidak sama maka char yang tadi di cek di if line 55 memang bukan kuncinya dan akan dimasukkan ke string tanpa kunci
					arr[index] = kiri[indexkiri]; //mengalokasikan char yang ternyata bukan kunci ke string tanpa kunci
					index++; //iterasi untuk var index
					indexkiri++; //iterasi untuk var indexkiri
				}
			}
			else{ //jika tidak sama maka char di string kiri akan di alokasikan ke array baru
				arr[index] = kiri[indexkiri]; //mengalokasikan char di string kiri ke array baru
				index++; //iterasi untuk index array baru
				indexkiri++; //iterasi utnuk index string kiri
			}	
		}
		
		if(index == 0){ //jika kata dikirinya kosong karena semua himpunan bagian string kirinya sama dengan string kanannya, contoh string kirinya iniini, string kanannya ini
			printf("==== Inputan Tidak Valid! ====\n"); //maka akan menampilkan ini
		}
		else{ //jika tidak maka program dibawah ini akan dijalankan dan menampilkan output enkripsi 1 dan enkripsi 2
			printf("Tanpa kunci: ");
			int i=0; //mendeklarasikan var i = 0
			while(i < index){ //perulangan untuk menampilkan string tanpa kunci
				printf("%c", arr[i]);
				i++;//iterasi var i
			}
			
			printf("\n\nEnkripsi 1:\n");
			
			int awal = index-1; //var awal untuk index awal pola zig zag yang menampilkan huruf dari string tanpa kunci paling belakang terlebih dahulu
			arr1[0] = arr[awal]; //menyimpan index dari string tanpa kunci ke index 0 di array baru bernama arr1
			printf("%c", arr1[0]); //menampilkan char di array baru dengan index 0
	
			int index2, index1, j, k;
			if(index % 2 == 0){ //mengecek apakah panjang string tanpa kunci genap/ganjil, jika genap maka program di dalam if akan dijalankan
				index2 = 1; //index2 digunakan sebagai index string baru untuk enkripsi 2
				k = awal - 2; //var k adalah rumus untuk pola zig zag yang atas 
				while((k >= 0) && (index2 < (index/2))){ //perulangan untuk pola zig zag yang atas
					printf(" %c", arr[k]); //menampilkan char enkripsi 1 pola atas
					arr1[index2] = arr[k]; //mengalokasikan char dari string tanpa kunci ke string baru untuk enkripsi 2
					k -= 2; //iterasi untuk index string tanpa kunci
					index2 += 1; //iterasi untuk index string enkripsi 2
				}
				printf("\n");
				j = awal - 1; //var j adalah rumus untuk pola zig zag yang bawah
				index1 = index/2; //lanjutan untuk index string enkripsi 2 
				while((j >= 0) && (index1 < index)){ //perulangan untuk pola zig zag yang bawah
					printf(" %c", arr[j]); //menampilkan char enkripsi 1 pola bawah
					arr1[index1] = arr[j]; //mengalokasikan char dari string tanpa kunci ke string baru untuk enkripsi 2
					j -= 2; //iterasi untuk index string tanpa kunci
					index1 += 1; //iterasi untuk index string enkripsi 2
				}
				
				printf("\n\nEnkripsi 2: ");
				index2 = 0;
				while((index1 == index) && (index2 < index)){ //perulangan untuk menampilkan enkripsi 2
					printf("%c", arr1[index2]); //menampilkan char untuk pola enkripsi 2
					index2++; //iterasi
				}
				printf("\n");
			}
			else{ //jika ganjil maka program di dalam else akan dijalankan
				index2 = 1; //index2 digunakan sebagai index string baru untuk enkripsi 2
				k = awal - 2; //var k adalah rumus untuk pola zig zag yang atas 
				while((k >= 0) && (index2 <= (index/2))){//perulangan untuk pola zig zag yang atas
					printf(" %c", arr[k]);//menampilkan char enkripsi 1 pola atas
					arr1[index2] = arr[k];//mengalokasikan char dari string tanpa kunci ke string baru untuk enkripsi 2
					k -= 2;//iterasi untuk index string tanpa kunci
					index2 += 1;//iterasi untuk index string enkripsi 2
				}
				printf("\n");
				j = awal - 1;//var j adalah rumus untuk pola zig zag yang bawah
				index1 = (index/2) + 1;//lanjutan untuk index string enkripsi 2 
				while((j >= 0) && (index1 < index)){//perulangan untuk pola zig zag yang bawah
					printf(" %c", arr[j]);//menampilkan char enkripsi 1 pola bawah
					arr1[index1] = arr[j];//mengalokasikan char dari string tanpa kunci ke string baru untuk enkripsi 2
					j -= 2;//iterasi untuk index string tanpa kunci
					index1 += 1;//iterasi untuk index string enkripsi 2
				}
				printf("\n\nEnkripsi 2: ");
				index2 = 0; //mendeklarasikan index2 = 0
				while((index1 == index) && (index2 < index)){//perulangan untuk menampilkan enkripsi 2
					printf("%c", arr1[index2]);//menampilkan char untuk pola enkripsi 2
					index2++; //iterasi
				}
				printf("\n");
			}
		}
	}
	else{ //jika di string masukan tidak ada tanda !, maka program akan langsung menampilkan dibawah ini
		printf("==== Inputan Tidak Valid! ====\n");
	}
	
	return 0;
}