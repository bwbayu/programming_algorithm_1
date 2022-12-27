#include "header.h"

//Saya Bayu Wicaksono NIM 2106836 mengerjakan evaluasi 2 dalam mata kuliah Algoritma dan Pemrograman 1 untuk keberkahanNya 
//maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin

int main(){
	int n;
	scanf("%d", &n);
	char film[n][201];
	int i;
	for(i = 0; i < n; i++){
		scanf("%s", &film[i]);
	}
	int jam, menit, detik;
	scanf("%d:%d:%d", &jam, &menit, &detik);
	
	int totalwaktu;
	totalwaktu = waktu(jam, menit, detik);
	
	int total=0;
	char temp;
	for(i = 0; i < n; i++){
		temp = huruf(i, film);
		if(temp == 'y'){
			printf("Anagram!\n");
			total += 1;
		}
		else{
			printf("Bukan Anagram!\n");
		}
	}
	printf("\n");
	int hasil=total+totalwaktu;
	split(hasil);
	
	return 0;
}