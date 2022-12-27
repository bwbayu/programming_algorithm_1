#include "header.h"

//Saya Bayu Wicaksono NIM 2106836 mengerjakan UAS dalam mata kuliah Algoritma dan Pemrograman 1 untuk keberkahanNya 
//maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin

int cari(int n, char str[][101], char kode[101]){ //fungsi untuk mencari banyak suku kata masukan di dalam array of string
	int i, j, banyak=0, index, indexkode1=0, indexkode = 0;
	for(i = 0; i < n; i++){//pengulangan untuk setiap string di dalam array of string
		index=0; //index untuk string
		do{
			if(str[i][index] == kode[indexkode]){//jika huruf di string sama dengan huruf pertama suku kata maka program di dalam if akan di eksekusi
				indexkode1 = indexkode; //index untuk suku kata
				//jika huruf di string sama dengan huruf pertama suku kata, maka akan di cek index string selanjutnya apakah sama dengan index berikutnya suku kata
				//pengecekan akan terus berlangsung sampai index terakhir di suku kata
				//jika berhenti di tengah maka kata tersebut tidak sama dengan suku kata
				//jika diproses sampai akhir maka kata tersebut sama dengan suku kata
				while(str[i][index] == kode[indexkode1] && indexkode1 < strlen(kode)){
					index++;//iterasi untuk index string
					indexkode1++;//iterasi untuk index suku kata
				}
			}
			else{//jika huruf di string tidak sama dengan huruf pertama suku kata, maka index untuk string akan bertambah
				index++;//iterasi untuk index string
			}
			if(indexkode1 == strlen(kode)){//jika index suku kata sama dengan panjang string suku kata maka variabel banyak bertambah 1 artinya ada suku kata di dalam string tersebut
				banyak++;
			}
			//dibawah ini untuk mereset index suku kata karena ada kemungkinan suku kata muncul lebih dari 1x dalam string
			indexkode1 = 0;
			indexkode = 0;
		}while(index < strlen(str[i]));//pengulangan untuk setiap huruf dalam string
	}
	return banyak;//mengembalikan nilai banyaknya suku kata masukan di dalam array of string
}