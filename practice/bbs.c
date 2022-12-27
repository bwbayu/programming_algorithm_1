#include <stdio.h>

int main(){
	int baris, kolom, n;
	scanf("%d", &n);
	
	for(baris = 1; baris <= n; baris++){ //pengulangan untuk wilayah yang bagian atas
		for(kolom = 1; kolom <= baris; kolom++){ //pengulangan untuk wilayah yang nantinya menampilkan bintang untuk bagian segitiga siku-siku
			printf("*");
		}
		for(kolom = n-1; kolom >= baris; kolom--){ //pengulangan untuk wilayah yang nantinya menampilkan spasi untuk bagian segitiga siku-siku terbalik 
			printf(" ");
		}
		for(kolom = n-1; kolom >= baris; kolom--){ //pengulangan untuk wilayah yang nantinya menampilkan spasi untuk bagian segitiga siku-siku terbalik 
			printf(" ");
		}
		for(kolom = 1; kolom <= baris; kolom++){ //pengulangan untuk wilayah yang nantinya menampilkan bintang untuk bagian segitiga siku-siku 
			printf("*");
		}
		for(kolom = 1; kolom <= n; kolom++){ //pengulangan untuk wilayah yang nantinya menampilkan bintang untuk bagian persegi dan akan membentuk trapesium
			printf("*");
		}
		for(kolom = 1; kolom <= baris; kolom++){ //pengulangan untuk wilayah yang nantinya menampilkan bintang untuk bagian segitiga siku-siku
			printf("*");
		}
		printf("\n");
	}
	for(baris = 1; baris < n; baris++){ //pengulangan untuk wilayah yang bagian tengah
		for(kolom = n-1; kolom >= baris; kolom--){ //pengulangan untuk wilayah yang nantinya menampilkan bintang untuk bagian segitiga siku-siku terbalik
			printf("*");
		}
		for(kolom = 1; kolom <= baris; kolom++){ //pengulangan untuk wilayah yang nantinya menampilkan spasi untuk bagian segitiga siku-siku
			printf(" ");
		}
		for(kolom = 1; kolom <= baris; kolom++){ //pengulangan untuk wilayah yang nantinya menampilkan spasi untuk bagian segitiga siku-siku
			printf(" ");
		}
		for(kolom = n-1; kolom >= baris; kolom--){ //pengulangan untuk wilayah yang nantinya menampilkan bintang untuk bagian segitiga siku-siku terbalik
			printf("*");
		}
		for(kolom = 1; kolom <= n; kolom++){ //pengulangan untuk wilayah yang nantinya menampilkan bintang untuk bagian persegi panjang
			printf("*");
		}
		for(kolom = n-1; kolom >= baris;kolom--){ //pengulangan untuk wilayah yang nantinya menampilkan bintang untuk bagian segitiga siku-siku terbalik
			printf("*");
		}
		printf("\n");
	}
	for(baris = 1; baris <= n; baris++){ //pengulangan untuk wilayah yang bagian bawah
		for(kolom = 1; kolom <= baris; kolom++){ //pengulangan untuk wilayah yang nantinya menampilkan bintang untuk bagian segitiga siku-siku
			printf("*");
		}
		for(kolom = n-1; kolom >= baris; kolom--){ //pengulangan untuk wilayah yang nantinya menampilkan spasi untuk bagian segitiga siku-siku terbalik
			printf(" ");
		}
		for(kolom = n-1; kolom >= baris; kolom--){ //pengulangan untuk wilayah yang nantinya menampilkan spasi untuk bagian segitiga siku-siku terbalik
			printf(" ");
		}
		for(kolom = 1; kolom <= baris; kolom++){ //pengulangan untuk wilayah yang nantinya menampilkan bintang untuk bagian segitiga siku-siku
			printf("*");
		}
		printf("\n");
	}
	return 0;
}