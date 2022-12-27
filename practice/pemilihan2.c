#include <stdio.h>

int main(){
	int a, b, c; //membuat 3 variabel untuk sisi segitiga
	int aa, bb, cc, dd, ee, ff; //membuat 4 variabel baru untuk menentukan segitiga siku-siku memakai rumus pitagoras
	
	//meminta masukan user untuk mengisi 3 variabel sisi segitiga
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	
	//membuat rumus pitagoras untuk mencari segitiga siku-siku
	aa = a * a;
	bb = b * b;
	cc = c * c;
	dd = bb + cc;
	ee = aa + cc;
	ff = aa + bb;
	
	//memeriksa apakah bilangan a, b, c adalah segitiga siku-siku
	if((aa == dd) || (bb == ee) || (cc == ff)){
		printf("%d, %d, %d merupakan segitiga siku-siku\n", a, b, c);
	} // memeriksa apakah bilangan a, b, c adalah segitiga sama sisi
	else if((a == b) && (a == c)){
		printf("%d, %d, %d merupakan segitiga sama sisi\n", a, b, c);
	} // memeriksa apakah bilangan a, b, c adalah segitiga sama kaki
	else if((a == b) || (b == c) || (a == c)){
		printf("%d, %d, %d merupakan segitiga sama kaki\n", a, b, c);
	} //lainnya
	else{
		printf("%d, %d, %d merupakan segitiga lainnya\n", a, b, c);
	}
	return 0;
}