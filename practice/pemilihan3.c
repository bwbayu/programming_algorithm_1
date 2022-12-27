#include <stdio.h>

int main(){
	int bil1, bil2; //membuat 2 variabel untuk bilangan
	int ganjil, genap; //membuat 2 variabel untuk menampilkan hasil kali/tambah jika kedua bilangan ganjil/genap
	//meminta masukan user untuk kedua bilangan tersebut
	scanf("%d", &bil1);
	scanf("%d", &bil2);
	//tampilan jika bilangan ganjil/genap
	ganjil = bil1 * bil2;
	genap = bil1 + bil2;
	//memeriksa apakah bil1 dan bil2 adalah bilangan genap
	if((bil1 % 2 == 0) && (bil2 % 2 == 0)){
		printf("%d\n", genap);
	} //memeriksa apakah bil1 dan bil2 terdiri dari ganjil dan genap
	else if((bil1 % 2 == 0) || (bil2 % 2 == 0)){
		printf("%d, %d\n", bil1, bil2);
	} //memeriksa apakah bil1 dan bil2 adalah bilangan ganjil
	else{
		printf("%d\n", ganjil);
	}
	return 0;
}