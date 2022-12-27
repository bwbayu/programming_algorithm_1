#include <stdio.h>

int main(){
	float bilangan; //membuat variabel untuk bilangan float
	int bil; //membuat variabel untuk mengubah bilangan float menjadi bilangan integer
	scanf("%f", &bilangan); //meminta masukan user untuk bilangan float
	
	bil = bilangan; //mengubah bilangan float menjadi integer
	int hasil; //membuat variabel untuk membuat float menjadi integer
	hasil = bilangan * 100; //mengalikan float dengan 100 agar menjadi integer
	int hasil_akhir; //membuat variabel untuk nilai sisa
	hasil_akhir = hasil % bil; //mencari sisa yang sebelum dikalikan adalah nilai dibelakang koma
	
	//memeriksa apakah nilai di depan koma adalah kelipatan dari nilai di belakang koma
	if((bil % hasil_akhir) == 0){
		printf("nilai %d merupakan kelipatan dari %d", bil, hasil_akhir);
	}else{
		printf("nilai %d bukan kelipatan dari %d", bil, hasil_akhir);
	}
	return 0;
}