#include <stdio.h>
//Saya Bayu Wicaksono NIM 2106836 mengerjakan soal TP3 dalam mata kuliah Algoritma dan Pemrograman 1 untuk keberkahanNya 
//maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin

//membuat tipe data untuk menyimpan titik (x, y) setiap sudut segitiga
typedef struct{
	int xa, ya, xb, yb, xc, yc;
}sudut_segitiga;

int main(){
	int kode;
	int persen;
	char Persen = '%';
	
	sudut_segitiga sudut;
	
	scanf("%d", &kode);
	scanf("%d%d%d%d%d%d", &sudut.xa, &sudut.ya, &sudut.xb, &sudut.yb, &sudut.xc, &sudut.yc);
	scanf("%d", &persen);
	
	kode %= 10; //mencari satuan dari variabel 'kode' yg akan digunakan sebagai kuadran untuk bayangan segitiga 
	
	switch(kode){
		case 1: //ketika bayangan segitiga ada di kuadran 1 maka program di bawah ini akan di jalankan
		//mengubah semua titik(x, y) pada segitiga yang masih negatif agar menjadi bentuk positif
		if(sudut.xa < 0){
		sudut.xa *= -1;
		}
		if(sudut.ya < 0){
		sudut.ya *= -1;
		}
		if(sudut.xb < 0){
		sudut.xb *= -1;
		}
		if(sudut.yb < 0){
		sudut.yb *= -1;
		}
		if(sudut.xc < 0){
		sudut.xc *= -1;
		}
		if(sudut.yc < 0){
		sudut.yc *= -1;
		}
		//karena ini kuadran 1, titik x dan titik y semuanya positif
		printf("A: %d, %d\n", sudut.xa, sudut.ya);
		printf("B: %d, %d\n", sudut.xb, sudut.yb);
		printf("C: %d, %d\n", sudut.xc, sudut.yc);
		break;
		
		case 2: //ketika bayangan segitiga ada di kuadran 2 maka program di bawah ini akan di jalankan
		//mengubah semua titik(x, y) pada segitiga yang masih negatif agar menjadi bentuk positif
		if(sudut.xa < 0){
		sudut.xa *= -1;
		}
		if(sudut.ya < 0){
		sudut.ya *= -1;
		}
		if(sudut.xb < 0){
		sudut.xb *= -1;
		}
		if(sudut.yb < 0){
		sudut.yb *= -1;
		}
		if(sudut.xc < 0){
		sudut.xc *= -1;
		}
		if(sudut.yc < 0){
		sudut.yc *= -1;
		}
		//karena ini kuadran 2, yg negatif hanya titik x nya saja sedangkan titik y nya positif
		printf("A: -%d, %d\n", sudut.xa, sudut.ya);
		printf("B: -%d, %d\n", sudut.xb, sudut.yb);
		printf("C: -%d, %d\n", sudut.xc, sudut.yc);
		break;
		
		case 3: //ketika bayangan segitiga ada di kuadran 3 maka program di bawah ini akan di jalankan
		//mengubah semua titik(x, y) pada segitiga yang masih negatif agar menjadi bentuk positif
		if(sudut.xa < 0){
		sudut.xa *= -1;
		}
		if(sudut.ya < 0){
		sudut.ya *= -1;
		}
		if(sudut.xb < 0){
		sudut.xb *= -1;
		}
		if(sudut.yb < 0){
		sudut.yb *= -1;
		}
		if(sudut.xc < 0){
		sudut.xc *= -1;
		}
		if(sudut.yc < 0){
		sudut.yc *= -1;
		}
		//karena ini kuadran 3, titik x dan titik y semuanya negatif
		printf("A: -%d, -%d\n", sudut.xa, sudut.ya);
		printf("B: -%d, -%d\n", sudut.xb, sudut.yb);
		printf("C: -%d, -%d\n", sudut.xc, sudut.yc);
		break;
		
		case 4: //ketika bayangan segitiga ada di kuadran 4 maka program di bawah ini akan di jalankan
		//mengubah semua titik(x, y) pada segitiga yang masih negatif agar menjadi bentuk positif
		if(sudut.xa < 0){
		sudut.xa *= -1;
		}
		if(sudut.ya < 0){
		sudut.ya *= -1;
		}
		if(sudut.xb < 0){
		sudut.xb *= -1;
		}
		if(sudut.yb < 0){
		sudut.yb *= -1;
		}
		if(sudut.xc < 0){
		sudut.xc *= -1;
		}
		if(sudut.yc < 0){
		sudut.yc *= -1;
		}
		//karena ini kuadran 4, yg negatif hanya titik y nya saja sedangkan titik x nya tetap positif
		printf("A: %d, -%d\n", sudut.xa, sudut.ya);
		printf("B: %d, -%d\n", sudut.xb, sudut.yb);
		printf("C: %d, -%d\n", sudut.xc, sudut.yc);
		break;
		
		default: // ketika satuan 'kode' bukanlah angka 1-4(yg mana angka 1-4 ini menunjukkan ada di kuadran manakah bayangan segitiga tsb)
		// sehingga posisi bayangannya ada di posisi asli segitiga 
		printf("Kuadran tidak valid!\n");
		printf("A: %d, %d\n", sudut.xa, sudut.ya);
		printf("B: %d, %d\n", sudut.xb, sudut.yb);
		printf("C: %d, %d\n", sudut.xc, sudut.yc);
		break;
	}
	
	int alas=0, tinggi=0;
	//mencari titik x yang lebih besar agar ketika dikurangi hasilnya tidak negatif
	if(sudut.xb > sudut.xc){
		alas = sudut.xb - sudut.xc;
	}
	else{
		alas = sudut.xc - sudut.xb;
	}
	//mencari tinggi segitiga dengan mengurangi titik puncak/titik y pada sudut A dengan salah satu titik di alas segitiga tsb/titik y pada sudut B atau C
	tinggi = sudut.ya - sudut.yb;
	
	float luas, persentase; //mencari luas segitiga dan mencari luas persentase dari luas segitiga awal (persentase disini sesuai permintaan user)
	luas = 0.5 * alas * tinggi;
	persentase = luas * persen / 100;
	
	printf("Luas: %0.2fcm2\n", luas);
	printf("Luas %d%c: %0.2fcm2\n", persen, Persen , persentase);
	
	return 0;
	
}