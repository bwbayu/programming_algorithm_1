#include <stdio.h>

typedef struct{
	int pembilang;
	int penyebut;
}pecahan;

int main(){
	pecahan p1, p2;
	pecahan p3;
	
	scanf("%d %d", &p1.pembilang, &p1.penyebut);
	scanf("%d %d", &p2.pembilang, &p2.penyebut);
	
	if(p1.penyebut != p2.penyebut){
		p3.penyebut = p1.penyebut * p2.penyebut;
		p1.penyebut *= p2.pembilang;
		p2.penyebut *= p1.pembilang;
		p3.pembilang = p1.penyebut + p2.penyebut;
		
		printf("pembilang : %d\npenyebut : %d\n", p3.pembilang, p3.penyebut);
	}
	else{
		p3.penyebut = p2.penyebut = p1.penyebut;
		p3.pembilang = p1.pembilang + p2.pembilang;
		
		printf("pembilang : %d\npenyebut : %d\n", p3.pembilang, p3.penyebut);
	}
	return 0;
	
}