#include <stdio.h>
#include <string.h>

typedef struct{
	char nama[50];
	int nilai;
}mahasiswa;

char kelompok(int nilai);
int ascii(int nilai, char nama[50]);

int main(){
	int n, i;
	scanf("%d", &n);
	mahasiswa siswa[n];
	for(i = 0; i < n; i++){
		scanf("%s", &siswa[i].nama);
		scanf("%d", &siswa[i].nilai);
	}
	
	for(i = 0; i < n; i++){
		printf("%s ", siswa[i].nama);
		printf("%c ", kelompok(siswa[i].nilai));
		printf("%d\n", ascii(siswa[i].nilai, siswa[i].nama));
	}
	
	return 0;
}

char kelompok(int nilai){
	if(nilai <= 100 && nilai >= 86){
		return 65;
	}
	else if(nilai <= 85 && nilai >= 71){
		return 66;
	}
	else if(nilai <= 70 && nilai >= 56){
		return 67;
	}
	else if(nilai <= 55 && nilai >= 41){
		return 68;
	}
	else if(nilai <= 40 && nilai >= 26){
		return 69;
	}
	else{
		return 70;
	}
}

int ascii(int nilai, char nama[50]){
	int total = nilai, i;
	for(i = 0; i < strlen(nama); i++){
		total += nama[i];
	}
	
	return total;
}