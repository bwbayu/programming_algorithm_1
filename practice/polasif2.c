#include <stdio.h>
//belum diupload yg ada komen
int main(){
	int n, i, kolom, baris;
	scanf("%d", &n);
	
	int n1 = (n*2)-2;
	for(kolom = 0; kolom < 1; kolom++){
		for(baris = 0; baris < n; baris++){
			printf(" ");
		}
		for(baris = 0; baris < n; baris++){
			printf("*");
		}
		for(baris = 0; baris < n1; baris++){
			printf(" ");
		}
		for(baris = 0; baris < n; baris++){
			printf("*");
		}
		printf("\n");
	}
	for(kolom = 0; kolom < (n-1); kolom++){
		for(baris = n-2; baris > kolom; baris--){
			printf(" ");
		}
		for(baris = -2; baris < kolom; baris++){
			printf("*");
		}
		for(baris = 0; baris < n; baris++){
			printf("*");
		}
		for(baris = 0; baris < n1; baris++){
			printf(" ");
		}
		for(baris = -1; baris < kolom; baris++){
			printf(" ");
		}
		for(baris = 0; baris < n; baris++){
			printf("*");
		}
		printf("\n");
	}
	for(kolom = 0; kolom < (n-1); kolom++){
		for(baris = 0; baris < n; baris++){
			printf(" ");
		}
		for(baris = 0; baris < kolom; baris++){
			printf(" ");
		}
		for(baris = 0; baris < n; baris++){
			printf("*");
		}
		for(baris = n-1; baris > kolom; baris--){
			printf(" ");
		}
		for(baris = n-2; baris > kolom; baris--){
			printf(" ");
		}
		for(baris = 0; baris < n; baris++){
			printf("*");
		}
		printf("\n");
	}
	int n2 = (n*2)-1;
	for(kolom = 0; kolom < 1; kolom++){
		for(baris = 0; baris < n2; baris++){
			printf(" ");
		}
		for(baris = 0; baris < n2; baris++){
			printf("*");
		}
		printf("\n");
	}
	int n3 = (n*2)-3;
	for(kolom = 0; kolom < n; kolom++){
		for(baris = 0; baris < 1; baris++){
			printf(" ");
		}
		for(baris = n-1; baris > kolom; baris--){
			printf(" ");
		}
		for(baris = 0; baris < n; baris++){
			printf("*");
		}
		for(baris = 0; baris < kolom; baris++){
			printf(" ");
		}
		for(baris = 0; baris < n3; baris++){
			printf(" ");
		}
		for(baris = 0; baris < kolom; baris++){
			printf(" ");
		}
		for(baris = 0; baris < n; baris++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}