#include <stdio.h>
//belum di upload yg ada komen
int main(){
	int n, baris, kolom;
	scanf("%d", &n);
	
	for(baris = 0; baris < n-1; baris++){
		for(kolom = 0; kolom < baris; kolom++){
			printf(" ");
		}
		for(kolom = 0; kolom < n; kolom++){
			printf("*");
		}
		for(kolom = n-1; kolom > baris; kolom--){
			printf(" ");
		}
		for(kolom = 0; kolom < (n+1); kolom++){
			printf("*");
		}
		for(kolom = n-1; kolom > baris; kolom--){
			printf("*");
		}
		printf("\n");
	}
	for(baris = 0; baris < 1; baris++){
		for(kolom = 0; kolom < (n-1); kolom++){
			printf(" ");
		}
		for(kolom = 0; kolom < (n*3); kolom++){
			printf("*");
		}
		printf("\n");
	}
	for(baris = 0; baris < n-1; baris++){
		for(kolom = 0; kolom < (n-1); kolom++){
			printf(" ");
		}
		for(kolom = n-1; kolom > baris; kolom--){
			printf("*");
		}
		for(kolom = 0; kolom < baris; kolom++){
			printf(" ");
		}
		for(kolom = 0; kolom < (n+2); kolom++){
			printf(" ");
		}
		for(kolom = 0; kolom < baris; kolom++){
			printf(" ");
		}
		for(kolom = n-1; kolom > baris; kolom--){
			printf("*");
		}
		printf("\n");
	}
	for(baris = 0; baris < n; baris++){
		for(kolom = 0; kolom < (n-1); kolom++){
			printf(" ");
		}
		for(kolom = -1; kolom < baris; kolom++){
			printf("*");
		}
		for(kolom = n-1; kolom > baris; kolom--){
			printf(" ");
		}
		for(kolom = 0; kolom < n; kolom++){
			printf(" ");
		}
		for(kolom = n-1; kolom > baris; kolom--){
			printf(" ");
		}
		for(kolom = -1; kolom < baris; kolom++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}