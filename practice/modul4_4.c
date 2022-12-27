#include <stdio.h>

int main(){
	int baris, kolom, n;
	scanf("%d", &n);
	
	for(baris = 1; baris <= n; baris++){
		for(kolom = 1; kolom < baris; kolom++){
			printf("0");
		}
		printf("1");
		for(kolom = n-1; kolom >= baris; kolom--){
			printf("0");
		}
		printf("\n");
	}
	return 0;
}