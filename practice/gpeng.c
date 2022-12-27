#include <stdio.h>

int main(){
	int n, m, k, h, r;
	
	scanf("%d%d%d%d%d", &n, &m, &k, &h, &r);
	
	int total, total1;
	total = (n + m + k + h) * r * 500; //mencari total harga yang diperoleh selama r hari
	total1 = (((n * 400) + (m * 350) + (k * 425) + (h * 325)) * r); //mencari total harga tanpa laba yang diperoleh selama r hari
	printf("%d\n", total - total1);
}