#include <stdio.h>

typedef struct{
	int nim;
	int nilai;
}mahasiswa;

int main(){
	mahasiswa m1, m2, m3;
	
	scanf(" %d %d", &m1.nim, &m1.nilai);
	scanf(" %d %d", &m2.nim, &m2.nilai);
	scanf(" %d %d", &m3.nim, &m3.nilai);
	
	if((m1.nim > m2.nim) && (m1.nim > m2.nim)){
		printf("NIM terbesar adalah %d dengan nilai %d", m1.nim, m1.nilai);
	}
	else if((m2.nim > m1.nim) && (m2.nim > m3.nim)){
		printf("NIM terbesar adalah %d dengan nilai %d", m2.nim, m2.nilai);
	}
	else{
		printf("NIM terbesar adalah %d dengan nilai %d", m3.nim, m3.nilai);
	}
	return 0;
	
}