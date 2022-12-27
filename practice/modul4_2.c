#include <stdio.h>

int main(){
	int baris, kolom, n;
	scanf("%d", &n); //n=5
	
	for(baris = 1; baris <= n; baris++){
		for(kolom = n-1; kolom >= baris; kolom--){
			printf(" ");
		}
		for(kolom = 1; kolom <= n; kolom++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}