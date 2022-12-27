#include <stdio.h>

//Saya Bayu Wicaksono NIM 2106836 mengerjakan soal TP4 dalam mata kuliah Algoritma dan Pemrograman 1 untuk keberkahanNya 
//maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin

int main(){
	int baris, kolom, n;
	char c;
	
	scanf("%c%d",&c, &n);
	
	int n1, n2;
	n1 = n*4; //variabel untuk pola yang banyak kolomnya n*4
	n2 = n*3; //variabel untuk pola yang banyak kolomnya n*3
	
	for(baris = 1; baris <= n; baris++){ //pengulangan untuk wilayah yang bagian telinga
		for(kolom = 1; kolom <= n1; kolom++){ //pengulangan untuk wilayah yang nantinya menampilkan spasi sebelum telinga
			printf(" ");
		}
		for(kolom = 1; kolom <= baris; kolom++){ //pengulangan untuk wilayah yang nantinya menampilkan bintang untuk telinga kiri
			printf("*");
		}
		for(kolom = n-1; kolom >= baris; kolom--){ //pengulangan untuk wilayah yang nantinya menampilkan spasi(spasinya berbentuk segitiga siku-siku terbalik) sesudah telinga kiri
			printf(" ");
		}
		for(kolom = 1; kolom <= n2; kolom++){ //pengulangan untuk wilayah yang nantinya menampilkan spasi diantara telinga
			printf(" ");
		}
		for(kolom = n-1; kolom >= baris; kolom--){ //pengulangan untuk wilayah yang nantinya menampilkan spasi (berbentuk segitiga siku-siku terbalik) sebelum telinga kanan
			printf(" ");
		}
		for(kolom = 1; kolom <= baris; kolom++){ //pengulangan untuk wilayah yang nantinya menampilkan bintang untuk telinga kanan
			printf("*");
		}
		printf("\n");
	}
	int n3= n*5; //variabel untuk pola yang banyak kolomnya n*5
	for(baris = 1; baris < n; baris++){ //pengulangan untuk wilayah yang bagian ekor dan dahi
		for(kolom = 1; kolom <= n; kolom++){ //pengulangan untuk wilayah yang nantinya menampilkan bintang untuk bagian ekor
			printf("*");
		}
		for(kolom = 1; kolom <= n2; kolom++){ //pengulangan untuk wilayah yang nantinya menampilkan spasi antara ekor dan dahi
			printf(" ");
		}
		for(kolom = 1; kolom <= n3; kolom++){ //pengulangan untuk wilayah yang nantinya menampilkan bintang untuk bagian dahi
			printf("*");
		}
		printf("\n");
	}
	if(n > 0){ //dibuat untuk bagian mata atas karena cuman 1 baris jadi pake if aja
		for(kolom = 1; kolom <= n; kolom++){ //pengulangan untuk wilayah yang nantinya menampilkan bintang untuk bagian ekor
			printf("*");
		}
		for(kolom = 1; kolom <= n2; kolom++){ //pengulangan untuk wilayah yang nantinya menampilkan spasi untuk bagian antara ekor dan mata
			printf(" ");
		}
		for(kolom = 1; kolom <= n; kolom++){ //pengulangan untuk wilayah yang nantinya menampilkan bintang untuk bagian sebelum mata kiri
			printf("*");
		}
		for(kolom = 1; kolom <= n; kolom++){ //pengulangan untuk wilayah yang nantinya menampilkan spasi untuk bagian mata kiri
			printf(" ");
		}
		for(kolom = 1; kolom <= n; kolom++){ //pengulangan untuk wilayah yang nantinya menampilkan bintang antara mata kiri dan mata kanan
			printf("*");
		}
		for(kolom = 1; kolom <= n; kolom++){ //pengulangan untuk wilayah yang nantinya menampilkan spasi untuk bagian mata kanan
			printf(" ");
		}
		for(kolom = 1; kolom <= n; kolom++){ //pengulangan untuk wilayah yang nantinya menampilkan bintang untuk bagian setelah mata kanan
			printf("*");
		}
		printf("\n");
	}
	int n4=n*2; //variabel untuk pola yang banyak kolomnya n*2
	if(n > 0){ //dibuat untuk bagian mata bawah karena cuman 1 baris jadi pake if aja
		for(kolom = 1; kolom <= n; kolom++){ //pengulangan untuk wilayah yang nantinya menampilkan spasi untuk bagian sebelum ekor
			printf(" ");
		}
		for(kolom = 1; kolom <= n; kolom++){ //pengulangan untuk wilayah yang nantinya menampilkan bintang untuk bagian ekor
			printf("*");
		}
		for(kolom = 1; kolom <= n4; kolom++){ //pengulangan untuk wilayah yang nantinya menampilkan spasi untuk bagian antara ekor dan mata
			printf(" ");
		}
		for(kolom = 1; kolom <= n; kolom++){ //pengulangan untuk wilayah yang nantinya menampilkan bintang untuk bagian sebelum mata kiri
			printf("*");
		}
		for(kolom = 1; kolom <= n; kolom++){ //pengulangan untuk wilayah yang nantinya menampilkan spasi untuk bagian mata kiri
			printf(" ");
		}
		for(kolom = 1; kolom <= n; kolom++){ //pengulangan untuk wilayah yang nantinya menampilkan bintang untuk bagian antara mata kiri dan mata kanan
			printf("*");
		}
		for(kolom = 1; kolom <= n; kolom++){ //pengulangan untuk wilayah yang nantinya menampilkan spasi untuk bagian mata kanan
			printf(" ");
		}
		for(kolom = 1; kolom <= n; kolom++){ //pengulangan untuk wilayah yang nantinya menampilkan bintang untuk bagian setelah mata kanan
			printf("*");
		}
		printf("\n");
	}
	for(baris = 1; baris < n; baris++){ //pengulangan untuk wilayah yang bagian ekor dan mulut
		for(kolom = 1; kolom <= n; kolom++){ //pengulangan untuk wilayah yang nantinya menampilkan spasi sebelum bagian ekor
			printf(" ");
		}
		for(kolom = 1; kolom <= n; kolom++){ //pengulangan untuk wilayah yang nantinya menampilkan bintang untuk bagian ekor
			printf("*");
		}
		for(kolom = 1; kolom <= n4; kolom++){ //pengulangan untuk wilayah yang nantinya menampilkan spasi untuk bagian antara ekor dan mulut
			printf(" ");
		}
		for(kolom = 1; kolom <= n3; kolom++){ //pengulangan untuk wilayah yang nantinya menampilkan bintang untuk bagian mulut
			printf("*");
		}
		printf("\n");
	}
	int n5=n*7; //variabel untuk pola yang banyak kolomnya n*7
	int kolom1=1; //variabel yang nantinya akan menampilkan angka ganjil
	int kolom2=0; //variabel yang nantinya akan menampilkan angka genap
	for(baris = 1; baris <= n; baris++){ //pengulangan untuk wilayah yang bagian badan, bagian atas mangkuk, dan angka-angka
		for(kolom = 1; kolom <= n; kolom++){ //pengulangan untuk wilayah yang nantinya menampilkan spasi untuk bagian sebelum badan
			printf(" ");
		}
		for(kolom = 1; kolom <= n5; kolom++){ //pengulangan untuk wilayah yang nantinya menampilkan bintang untuk bagian badan
			printf("*");
		}
		for(kolom = 1; kolom <= n; kolom++){ //pengulangan untuk wilayah yang nantinya menampilkan spasi untuk bagian antara bagian badan dan mangkuk
			printf(" ");
		}
		for(kolom = 1; kolom <= n; kolom++){ //pengulangan untuk wilayah yang nantinya menampilkan bintang untuk bagian kiri mangkuk
			printf("*");
		}
		if((c == 'a') || (c == 'i') || (c == 'u') || (c == 'e') || (c == 'o')){ //mengecek apakah variabel 'c' adalah huruf vokal atau konsonan, jika vokal maka akan dilanjutkan ke program didalamnya
			for(kolom = 1; kolom <= n; kolom++){ //pengulangan untuk wilayah yang nantinya menampilkan angka 1, 3, 5, 7, 9
				if(kolom1 <= 9){ //untuk mengecek apakah angkanya kurang dari sama dengan 9 atau tidak, jika iya maka program di dalamnya akan di jalankan
					printf("%d", kolom1); //menampilkan isi dari kolom1
					kolom1 += 2; //agar angka ganjilnya terus bertambah 2 sehingga kolom1 nanti bisa menampilkan angka 1, 3, 5, 7, 9
				}
				else{ //karena kolom1 di if itu mentok di angka 9, oleh karena itu dibuat else agar kolom2 kembali ke nilai semua yaitu 0 dan bisa menampilkan angka 1, 3, 5, 7, 9
					kolom1 = 1; //mendeklarasikan ulang kolom1 nya agar kembali ke angka semula yaitu 1
					printf("%d", kolom1); //menampilkan isi dari kolom1
					kolom1 += 2; //agar angka ganjilnya terus bertambah 2 sehingga kolom1 nanti bisa menampilkan angka 1, 3, 5, 7, 9
				}
			}
		}
		else{ //jika hurufnya konsonan maka program yang ada di dalam else ini akan dijalankan
			for(kolom = 1; kolom <= n; kolom++){ //pengulangan untuk wilayah yang nantinya menampilkan angka 0, 2, 4, 6, 8
				if(kolom2 <= 9){ //untuk mengecek apakah angkanya kurang dari sama dengan 9 atau tidak, jika iya maka program di dalamnya akan di jalankan
					printf("%d", kolom2); //menampilkan isi dari kolom2
					kolom2 += 2; //agar angka genapnya terus bertambah 2 sehingga kolom2 nanti bisa menampilkan angka 0, 2, 4, 6, 8
				}
				else{ //karena kolom2 di if itu mentok di angka 8, oleh karena itu dibuat else agar kolom2 kembali ke nilai semua yaitu 0 dan bisa menampilkan angka 0, 2, 4, 6, 8
					kolom2 = 0; //mendeklarasikan ulang kolom2 nya agar kembali ke angka semula yaitu 0
					printf("%d", kolom2); //menampilkan isi dari kolom2
					kolom2 += 2; //agar angka genapnya terus bertambah 2 sehingga kolom2 nanti bisa menampilkan angka 0, 2, 4, 6, 8
				}
			}
		}
		for(kolom = 1; kolom <= n; kolom++){ //pengulangan untuk wilayah yang nantinya menampilkan bintang untuk bagian kanan mangkuk
			printf("*");
		}
		printf("\n");
	}
	for(baris = 1; baris <= n; baris++){ //pengulangan untuk wilayah yang bagian kaki dan bagian bawah mangkuk
		for(kolom = 1; kolom <= n; kolom++){ //pengulangan untuk wilayah yang nantinya menampilkan spasi untuk bagian sebelum kaki 1
			printf(" ");
		}
		for(kolom = 1; kolom <= n; kolom++){ //pengulangan untuk wilayah yang nantinya menampilkan bintang untuk bagian kaki 1
			printf("*");
		}
		for(kolom = 1; kolom <= n; kolom++){ //pengulangan untuk wilayah yang nantinya menampilkan spasi untuk bagian antara kaki 1 dan kaki 2
			printf(" ");
		}
		for(kolom = 1; kolom <= n; kolom++){ //pengulangan untuk wilayah yang nantinya menampilkan bintang untuk bagian kaki 2
			printf("*");
		}
		for(kolom = 1; kolom <= n; kolom++){ //pengulangan untuk wilayah yang nantinya menampilkan spasi untuk bagian antara kaki 2 dan kaki 3
			printf(" ");
		}
		for(kolom = 1; kolom <= n; kolom++){ //pengulangan untuk wilayah yang nantinya menampilkan bintang untuk bagian kaki 3
			printf("*");
		}
		for(kolom = 1; kolom <= n; kolom++){ //pengulangan untuk wilayah yang nantinya menampilkan spasi untuk bagian antara kaki 3 dan kaki 4
			printf(" ");
		}
		for(kolom = 1; kolom <= n; kolom++){ //pengulangan untuk wilayah yang nantinya menampilkan bintang untuk bagian kaki 4
			printf("*");
		}
		for(kolom = 1; kolom <= (n+1); kolom++){ //pengulangan untuk wilayah yang nantinya menampilkan spasi untuk bagian antara kaki 4 dan mangkuk bawah
			printf(" ");
		}
		for(kolom = 1; kolom < baris; kolom++){ //pengulangan untuk wilayah yang nantinya menampilkan spasi untuk bagian sebelum mangkuk bawah (spasinya berbentuk segitiga siku-siku)
			printf(" ");
		}
		for(kolom = n-1; kolom >= baris; kolom--){ //pengulangan untuk wilayah yang nantinya menampilkan bintang untuk bagian bawah mangkuk
			printf("*");
		}
		for(kolom = 1; kolom <= n; kolom++){ //pengulangan untuk wilayah yang nantinya menampilkan bintang untuk bagian bawah mangkuk
			printf("*");
		}
		for(kolom = n-1; kolom >= baris; kolom--){ //pengulangan untuk wilayah yang nantinya menampilkan bintang untuk bagian bawah mangkuk
			printf("*");
		}
		printf("\n");
	}
	return 0;
}