#include <stdio.h>

//Saya Bayu Wicaksono NIM 2106836 mengerjakan soal TP2 dalam mata kuliah Algoritma dan Pemrograman 1 untuk keberkahanNya 
//maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin


int main(){
	char q, w, e, r, t, y;
	int x;
	
	scanf(" %c", &q);
	scanf(" %c", &w);
	scanf(" %c", &e);
	scanf(" %c", &r);
	scanf(" %c", &t);
	scanf(" %c", &y);
	scanf("%d", &x);
	
	//membuat variabel untuk mencari jumlah huruf vokal dari char yang dimasukkan user, jika char tersebut vokal maka
	//nilai a akan terus bertambah 1
	int a=0;
	
	//memeriksa apakah char q adalah huruf vokal, jika iya maka nilai a akan bertambah 1 dan melanjutkan pengecekan char w
	//jika tidak maka nilai a tidak akan bertambah 1
	if((q == 'A') || (q == 'I') || (q == 'U') || (q == 'E') || (q == 'O')){
		a += 1;
	}
	
	//memeriksa apakah char w adalah huruf vokal, jika iya maka nilai a akan bertambah 1 dan melanjutkan pengecekan char e
	//jika tidak maka nilai a tidak akan bertambah 1
	if((w == 'A') || (w == 'I') || (w == 'U') || (w == 'E') || (w == 'O')){
		a += 1;
	}
	
	//memeriksa apakah char e adalah huruf vokal, jika iya maka nilai a akan bertambah 1 dan melanjutkan pengecekan char r
	//jika tidak maka nilai a tidak akan bertambah 1
	if((e == 'A') || (e == 'I') || (e == 'U') || (e == 'E') || (e == 'O')){
		a += 1;
	}
	
	//memeriksa apakah char r adalah huruf vokal, jika iya maka nilai a akan bertambah 1 dan melanjutkan pengecekan char t
	//jika tidak maka nilai a tidak akan bertambah 1
	if((r == 'A') || (r == 'I') || (r == 'U') || (r == 'E') || (r == 'O')){
		a += 1;
	}
	
	//memeriksa apakah char t adalah huruf vokal, jika iya maka nilai a akan bertambah 1 dan melanjutkan pengecekan char y
	//jika tidak maka nilai a tidak akan bertambah 1
	if((t == 'A') || (t == 'I') || (t == 'U') || (t == 'E') || (t == 'O')){
		a += 1;
	}
	
	//memeriksa apakah char y adalah huruf vokal, jika iya maka nilai a akan bertambah 1
	//jika tidak maka nilai a tidak akan bertambah 1
	if((y == 'A') || (y == 'I') || (y == 'U') || (y == 'E') || (y == 'O')){
		a += 1;
	}
	
	//memeriksa apakah jumlah huruf vokalnya ada 3 atau lebih dari 3 atau kurang dari 3
	if(a == 3)
	{ //jika huruf vokalnya ada 3 maka akan dilanjutkan memeriksa apakah nilai integer x yang dimasukkan genap/ganjil
		if(x % 2 == 0){
			printf("Riddle Stone Acquired! Everybody comes home\n");
		}
		else{
			printf("You are unworthy, for you cannot riddle me\n");
		}
	} //memeriksa apakah jumlah huruf vokal ada 3 atau lebih dari 3 atau kurang dari 3
	else if(a > 3)
	{  //jika huruf vokalnya lebih dari 3 maka akan dilanjutkan memeriksa apakah nilai integer x yang dimasukkan genap/ganjil
		if(x % 2 == 0){
			printf("You are unworthy, for you cannot riddle me\n");
		}
		else{
			printf("Riddle Stone Acquired! Everybody comes home\n");
		}
	} //memeriksa apakah jumlah huruf vokal ada 3 atau lebih dari 3 atau kurang dari 3
	else
	{ //jika huruf vokalnya kurang dari 3 maka akan dilanjutkan memeriksa apakah nilai integer x yang dimasukkan genap/ganjil
		if(x == 0){
			printf("Riddle Stone Acquired! Everybody comes home\n");
		}
		else{
			printf("You are unworthy, for you cannot riddle me\n");
		}
	}
	
	return 0;
}