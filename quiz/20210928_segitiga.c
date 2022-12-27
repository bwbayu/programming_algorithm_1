#include <stdio.h>
#include <math.h>

//Saya Bayu Wicaksono NIM 2106836 mengerjakan evaluasi kuis 1 dalam mata kuliah Algoritma dan Pemrograman 1 untuk keberkahanNya 
//maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin

int main(){
	int a, b, c;
	int x, y, z;
	float L1, L2;
	
	scanf("%d %d %d", &a, &b, &c);
	scanf("%d %d %d", &x, &y, &z);
	
	//memeriksa apakah segitiga 1 adalah segitiga siku-siku
	if(((a > b) && (a > c)) && ((a*a) == ((b*b) + (c*c)))){
		L1 = 0.5*b*c;
	}
	else if(((b > a) && (b > c)) && ((b*b) == ((a*a) + (c*c)))){
		L1 = 0.5*a*c;
	}
	else if(((c > b) && (c > a)) && ((c*c) == ((b*b) + (a*a)))){
		L1 = 0.5*b*a;
	}
	else //jika segitiga 1 bukan segitiga siku-siku maka L1 bernilai 0
	{ 
		L1 = 0;
	}
	//memeriksa apakah segitiga 2 adalah segitiga siku-siku
	if(((x > y) && (x > z)) && ((x*x) == ((y*y) + (z*z)))){
		L2 = 0.5*z*y;
	}
	else if(((y > x) && (y > z)) && ((y*y) == ((x*x) + (z*z)))){
		L2 = 0.5*x*z;
	}
	else if(((z > y) && (z > x)) && ((z*z) == ((y*y) + (x*x)))){
		L2 = 0.5*x*y;
	}
	else{ //jika segitiga 2 bukan segitiga siku-siku maka L2 bernilai 0
		L2 = 0;
	}
	
	int selisih;
	//memeriksa jika kedua segitiga adalah segitiga siku-siku manakah yang lebih besar, segitiga 1 atau segitiga 2
	//jika segitiga 1 lebih besar maka akan menampilkan selisih luas segitiga 1 dengan luas segitiga 2
	if((L1 > L2) && (L2 > 0)){
		printf("segitiga siku-siku\n");
		printf("segitiga pertama\n");
		selisih = L1 - L2;
		printf("selisih %d\n", selisih);
	} 
	//jika segitiga 2 lebih besar maka akan menampilkan selisih luas segitiga 2 dengan luas segitiga 1
	else if((L2 > L1) && (L1 > 0)){
		printf("segitiga siku-siku\n");
		printf("segitiga kedua\n");
		selisih = L2 - L1;
		printf("selisih %d\n", selisih);
	}
	//jika salah satu atau keduanya bukan segitiga siku-siku
	else{
		selisih = 0;
	}
	
	//memeriksa apakah segitiga 1 dan segitiga 2 adalah segitiga sama sisi
	if(((a == b) && (a == c)) && ((x == y) && (x == z)))
	{
		printf("segitiga sama sisi\n");
		
		//mencari tinggi dari kedua segitiga
		float t1, t2;
		t1 = sqrt((a * a) - ((0.5 * a) * (0.5 * a)));
		t2 = sqrt((x * x) - ((0.5 * x) * (0.5 * x)));
		
		//mengubah float menjadi integer
		int T1 = t1, T2 = t2;
		
		//mencari luas kedua segitiga setelah ditemukan tingginya
		L1 = 0.5 * a * T1;
		L2 = 0.5 * x * T2;
		
		//memeriksa apakah segitiga 1 lebih besar daripada segitiga 2
		//jika segitiga 1 lebih besar maka akan menampilkan selisih luas segitiga 1 dengan luas segitiga 2
		if(L1 > L2)
		{
			printf("segitiga pertama\n");
			selisih = L1 - L2;
			printf("selisih %d\n", selisih);
		}
		//memeriksa apakah segitiga 2 lebih besar daripada segitiga 1
		//jika segitiga 2 lebih besar maka akan menampilkan selisih luas segitiga 2 dengan luas segitiga 1
		else if(L2 > L1){
			printf("segitiga kedua\n");
			selisih = L2 - L1;
			printf("selisih %d\n", selisih);
		}
		else{}
	}
	//memeriksa apakah kedua segitiga merupakan segitiga sama kaki
	else if((((a == b) && (a != c)) || ((b == c) && (b != a)) || ((a == c) && (a != b))) && (((x == y) && (x != z)) || ((x == z) && (x != y)) || ((y == z) && (y != x))))
	{
		printf("segitiga sama kaki\n");
		
		float T1, T2;
		int t1, t2;
		//mencari sisi dari segitiga 1 yang berbeda kemudian mencari tingginya dan luasnya
		if((a == b) && (a != c)){
			T1 = sqrt((a * a) - ((0.5 * c) * (0.5 * c)));
			t1 = T1;
			L1 = 0.5 * c * t1;
		}
		else if((b == c) && (b != a)){
			T1 = sqrt((b*b) - ((0.5 * a) * (0.5 * a)));
			t1 = T1;
			L1 = 0.5 * a * t1;
		}
		else{
			T1 = sqrt((a*a) - ((0.5 * b) * (0.5 * b)));
			t1 = T1;
			L1 = 0.5 * b * t1;
		}
		//mencari sisi dari segitiga 2 yang berbeda kemudian mencari tingginya dan luasnya
		if((x == y) && (x != z)){
			T2 = sqrt((x*x) - ((0.5 * z) * (0.5 * z)));
			t2 = T2;
			L2 = 0.5 * z * t2;
		}
		else if((x == z) && (x != y)){
			T2 = sqrt((x*x) - ((0.5 * y) * (0.5 * y)));
			t2 = T2;
			L2 = 0.5 * y * t2;
		}
		else{
			T2 = sqrt((y*y) - ((0.5 * x) * (0.5 * x)));
			t2 = T2;
			L2 = 0.5 * x * t2;
		}
		//memeriksa apakah luas segitiga 1 lebih besar dari segitiga 2
		//jika segitiga 1 lebih besar maka akan menampilkan selisih luas segitiga 1 dengan luas segitiga 2
		if(L1 > L2){
			printf("segitiga pertama\n");
			selisih = L1 - L2;
			printf("selisih %d\n", selisih);
		}
		//memeriksa apakah luas segitiga 2 lebih besar dari segitiga 1
		//jika segitiga 2 lebih besar maka akan menampilkan selisih luas segitiga 2 dengan luas segitiga 1
		else if(L2 > L1){
			printf("segitiga kedua\n");
			selisih = L2 - L1;
			printf("selisih %d\n", selisih);
		}
		else{}
	}
	//menampilkan jika salah satu atau kedua segitiga tidak termasuk segitiga sama sisi/sama kaki/siku-siku
	else if(selisih == 0){
		printf("tidak sama\n");
	}
	else{}
	
	return 0;
}