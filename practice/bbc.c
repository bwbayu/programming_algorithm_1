#include <stdio.h>

int main(){
	int baris, kolom, n, n1;
	scanf("%d", &n);
	n1=n*2; //variabel untuk kolom yang polanya (n*2)
	
	for(baris = 1; baris <= n1; baris++){ //pengulangan untuk wilayah yang atas bagian segitiga
		for(kolom = 1; kolom <= baris; kolom++){ //pengulangan untuk wilayah yang nantinya menampilkan bintang untuk bagian segitiga siku-siku kiri
			printf("*");
		}
		for(kolom = n1; kolom > baris; kolom--){ //pengulangan untuk wilayah yang nantinya menampilkan spasi untuk bagian segitiga siku-siku terbalik dan akan membentuk segitiga sama kaki terbalik
			printf(" ");
		}
		for(kolom = n1; kolom > baris; kolom--){ //pengulangan untuk wilayah yang nantinya menampilkan spasi untuk bagian segitiga siku-siku terbalik dan akan membentuk segitiga sama kaki terbalik
			printf(" ");
		}
		for(kolom = 1; kolom <= baris; kolom++){ //pengulangan untuk wilayah yang nantinya menampilkan bintang untuk bagian segitiga siku-siku di tengah dan akan membentuk segitiga sama kaki
			printf("*");
		}
		for(kolom = 1; kolom < baris; kolom++){ //pengulangan untuk wilayah yang nantinya menampilkan bintang untuk bagian segitiga siku-siku di tengah dan akan membentuk segitiga sama kaki
			printf("*");
		}
		for(kolom = n1; kolom > baris; kolom--){ //pengulangan untuk wilayah yang nantinya menampilkan spasi untuk bagian segitiga siku-siku terbalik dan akan membentuk segitiga sama kaki terbalik
			printf(" ");
		}
		for(kolom = n1; kolom > baris; kolom--){ //pengulangan untuk wilayah yang nantinya menampilkan spasi untuk bagian segitiga siku-siku terbalik dan akan membentuk segitiga sama kaki terbalik
			printf(" ");
		}
		for(kolom = 1; kolom <= baris; kolom++){ //pengulangan untuk wilayah yang nantinya menampilkan bintang untuk bagian segitiga siku-siku kiri
			printf("*");
		}
		printf("\n");
	}
	int n2=(n*4) - 3; //variabel untuk kolom yang polanya ((n*4)-3)
	for(baris = 1; baris <= n; baris++){ //pengulangan untuk wilayah yang tengah bagian persegi panjang
		for(kolom = 0; kolom <= n1; kolom++){ //pengulangan untuk wilayah yang nantinya menampilkan spasi untuk bagian persegi panjang
			printf(" ");
		}
		for(kolom = 1; kolom <= n2; kolom++){ //pengulangan untuk wilayah yang nantinya menampilkan bintang untuk bagian persegi panjang
			printf("*");
		}
		printf("\n");
	}
	int n3=(n*5) - 2; //variabel untuk kolom yang polanya ((n*5)-2)
	for(baris = 1; baris <= n; baris++){ //pengulangan untuk wilayah yang bawah bagian segitiga
		for(kolom = 1; kolom <= n3; kolom++){ //pengulangan untuk wilayah yang nantinya menampilkan spasi untuk bagian persegi panjang
			printf(" ");
		}
		for(kolom = 1; kolom < baris; kolom++){ //pengulangan untuk wilayah yang nantinya menampilkan spasi untuk bagian segitiga siku-siku
			printf(" ");
		}
		for(kolom = n; kolom >= baris; kolom--){ //pengulangan untuk wilayah yang nantinya menampilkan bintang untuk bagian segitiga siku-siku terbalik
			printf("*");
		}
		printf("\n");
	}
	return 0;
	
}