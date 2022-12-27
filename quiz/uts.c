#include <stdio.h>

//Saya Bayu Wicaksono NIM 2106836 mengerjakan UTS dalam mata kuliah Algoritma dan Pemrograman 1 untuk keberkahanNya 
//maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin

int main(){
	int kolom, baris, n;
	scanf("%d", &n);
	
	int n1 = n*5; //--------------------------------variabel untuk pola yang banyak kolomnya n*5
	for(baris = 0; baris < n; baris++){ //----------pengulangan untuk wilayah yang paling atas, banyak barisnya n
		for(kolom = 0; kolom < n1; kolom++){ //-----pengulangan untuk bagian spasi yang banyak kolomnya n*5
			printf(" ");
		}
		for(kolom = n-1; kolom > baris; kolom--){ //pengulangan untuk bagian spasi yang ada diantara spasi yang banyak kolomnya n*5 dan bintang yang berbentuk segitiga siku-siku
			printf(" ");
		}
		for(kolom = -1; kolom < baris; kolom++){ //-pengulangan untuk bagian bintang yang bentuknya segitiga siku-siku
			printf("*");
		}
		printf("\n");
	}
	
	int n2 = n*2, n3 = n*3, n4 = n+1; //------------variabel untuk pola yang banyak kolomnya n*2, n*3, dan n+1
	for(baris = 0; baris < n; baris++){ //----------pengulangan untuk wilayah yang banyak barisnya n, diantara wilayah paling atas dan wilayah tengah
		for(kolom = 0; kolom < n; kolom++){//-------pengulangan untuk bagian spasi yang banyak kolomnya n
			printf(" ");
		}
		for(kolom = n-1; kolom > baris; kolom--){//-pengulangan untuk bagian spasi yang ada diantara spasi yang banyak kolomnya n dan bintang yang berbentuk segitiga siku-siku
			printf(" ");
		}
		for(kolom = -1; kolom < baris; kolom++){//--pengulangan untuk bagian bintang yang berbentuk segitiga siku-siku
			printf("*");
		}
		for(kolom = 0; kolom < n2; kolom++){//------pengulangan untuk bagian spasi yang banyak kolomnya (n*2)
			printf(" ");
		}
		for(kolom = 0; kolom < n; kolom++){//-------pengulangan untuk bagian bintang yang banyak kolomnya n
			printf("*");
		}
		for(kolom = 0; kolom < n3; kolom++){//------pengulangan untuk bagian spasi yang banyak kolomnya n*3
			printf(" ");
		}
		for(kolom = n-1; kolom > baris; kolom--){//-pengulangan untuk bagian spasi yang sebelum segitiga siku-siku
			printf(" ");
		}
		for(kolom = -1; kolom < baris; kolom++){//--pengulangan untuk bagian bintang yang bentuknya segitiga siku-siku
			printf("*");
		}
		for(kolom = 0; kolom < n4; kolom++){//------pengulangan untuk bagian spasi yang banyak kolomnya (n+1)
			printf(" ");
		}
		for(kolom = n-1; kolom > baris; kolom--){//-pengulangan untuk bagian spasi yang sebelum segitiga sama kaki
			printf(" ");
		}
		for(kolom = -1; kolom < baris; kolom++){//--pengulangan untuk bagian bintang yang bentuknya segitiga siku-siku, nantinya bakal berbentuk segitiga sama kaki
			printf("*");
		}
		for(kolom = 0; kolom < baris; kolom ++){//--pengulangan untuk bagian bintang yang bentuknya segitiga siku-siku, nantinya bakal berbentuk segitiga sama kaki
			printf("*");
		}
		printf("\n");
	}
	
	int n5 = (n*2) + 1; //--------------------------variabel untuk pola yang banyak kolomnya ((n*2)+1)
	for(baris = 0; baris < n; baris++){//-----------pengulangan untuk wilayah tengah yang banyak barisnya n
		for(kolom = 0; kolom < n; kolom++){//-------pengulangan untuk bagian bintang yang banyak kolomnya n
			printf("*");
		}
		for(kolom = 0; kolom < n2; kolom++){//------pengulangan untuk bagian spasi yang banyak kolomnya n*2
			printf(" ");
		}
		for(kolom = 0; kolom < n3; kolom++){//------pengulangan untuk bagian bintang yang banyak kolomnya n*3
			printf("*");
		}
		for(kolom = 0; kolom < n; kolom++){//-------pengulangan untuk bagian spasi yang banyak kolomnya n
			printf(" ");
		}
		for(kolom = 0; kolom < n; kolom++){//-------pengulangan untuk bagian bintang yang banyak kolomnya n
			printf("*");
		}
		for(kolom = 0; kolom < n2; kolom++){//------pengulangan untuk bagian spasi yang banyak kolomnya n*2
			printf(" ");
		}
		for(kolom = 0; kolom < n5; kolom++){//------pengulangan untuk bagian bintang yang banyak kolomnya ((n*2)+1)
			printf("*");
		}
		printf("\n");
	}
	
	for(baris = 0; baris < n; baris++){//-----------pengulangan untuk wilayah yang banyak barisnya n, ada diantara wilayah tengah dan wilayah paling bawah
		for(kolom = 0; kolom < n; kolom++){//-------pengulangan untuk bagian spasi yang banyak kolomnya n
			printf(" ");
		}
		for(kolom = 0; kolom < baris; kolom++){//---pengulangan untuk bagian spasi yang sebelum segitiga siku-siku
			printf(" ");
		}
		for(kolom = n; kolom > baris; kolom--){//---pengulangan untuk bagian bintang yang bentuknya segitiga siku-siku
			printf("*");
		}
		for(kolom = 0; kolom < n2; kolom++){//------pengulangan untuk bagian spasi yang banyak kolomnya n*2
			printf(" ");
		}
		for(kolom = 0; kolom < n; kolom++){//-------pengulangan untuk bagian bintang yang banyak kolomnya n
			printf("*");
		}
		for(kolom = 0; kolom < n3; kolom++){//------pengulangan untuk bagian spasi yang banyak kolomnya n*3
			printf(" ");
		}
		for(kolom = 0; kolom < baris; kolom++){//---pengulangan untuk bagian spasi yang sebelum segitiga siku-siku
			printf(" ");
		}
		for(kolom = n; kolom > baris; kolom--){//---pengulangan untuk bagian bintang yang bentuknya segitiga siku-siku
			printf("*");
		}
		for(kolom = 0; kolom < n4; kolom++){//------pengulangan untuk bagian spasi yang banyak kolomnya n
			printf(" ");
		}
		for(kolom = 0; kolom < baris; kolom++){//---pengulangan untuk bagian spasi yang sebelum segitiga sama kaki
			printf(" ");
		}
		for(kolom = n; kolom > baris; kolom--){//---pengulangan untuk bagian bintang yang bentuknya segitiga siku-siku, nantinya bakal berbentuk segitiga sama kaki
			printf("*");
		}
		for(kolom = n-1; kolom > baris; kolom--){//-pengulangan untuk bagian bintang yang bentuknya segitiga siku-siku, nantinya bakal berbentuk segitiga sama kaki
			printf("*");
		}
		printf("\n");
	}
	for(baris = 0; baris < n; baris++){//-----------pengulangan untuk wilayah paling bawah yang banyak barisnya n
		for(kolom = 0; kolom < n1; kolom++){//------pengulangan untuk bagian spasi yang banyak kolomnya n*5
			printf(" ");
		}
		for(kolom = 0; kolom < baris; kolom++){//---pengulangan untuk bagian spasi yang sebelum segitiga siku-siku
			printf(" ");
		}
		for(kolom = n; kolom > baris; kolom--){//---pengulangan untuk bagian bintang yang bentuknya segitiga siku-siku
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}