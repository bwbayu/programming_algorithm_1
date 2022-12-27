#include <stdio.h>

//Saya Bayu Wicaksono NIM 2106836 mengerjakan evaluasi kuis 1 dalam mata kuliah Algoritma dan Pemrograman 1 untuk keberkahanNya 
//maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin

int main(){
	float a, b, c, d;
	int q, w, e, r;
	
	scanf("%f %f %f %f", &a, &b, &c, &d);
	scanf("%d %d", &q, &w);
	scanf("%d %d", &e, &r);
	
	// mengubah float menjadi integer
	int A = a, B = b, C = c, D = d;
	// mencari nilai dibelakang koma yang nantinya akan ditukar
	a -= A;
	b -= B;
	c -= C;
	d -= D;
	
	// variabel untuk hasil akhir setelah angka dibelakang komanya ditukar
	float j, k, l, m;
	
	// memeriksa pola penukaran apakah polanya 1234/2134/1243/2143 atau 3412/3421/4312/4321
	if((((q == 1) && (w == 2)) || ((q == 2) && (w == 1))) || (((q == 3) && (w == 4)) || ((q == 4) && (w == 3)))){
		j = A + b;
		k = B + a;
		l = C + d;
		m = D + c;
	} 
	// memeriksa pola penukaran apakah polanya 1342/1324/3142/3124 atau 2413/2431/4213/4231
	else if((((q == 1) && (w == 3)) || ((q == 3) && (w == 1))) || (((q == 2) && (w == 4)) || ((q == 4) && (w == 2)))){
		j = A + c;
		k = B + d;
		l = C + a;
		m = D + b;
	} 
	// memeriksa pola penukaran apakah polanya 1423/1432/4123/4132 atau 2314/2341/3214/3241
	else{ 
		j = A + d;
		k = B + c;
		l = C + b;
		m = D + a;
	}
	
	printf("%0.2f\n", j);
	printf("%0.2f\n", k);
	printf("%0.2f\n", l);
	printf("%0.2f\n", m);
	
	return 0;
	
}