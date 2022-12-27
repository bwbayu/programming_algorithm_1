#include <stdio.h>

int main(){
	int baris, kolom, n;
	
	scanf("%d", &n);
	
	for(baris = 1; baris <= n; baris++){
		for(kolom = n; kolom >= baris; kolom--){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}