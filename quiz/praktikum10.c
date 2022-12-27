#include <stdio.h>
#include <string.h>

int n;
int masukan(char inisial);
int sum(int kumpulanbil[10], int banyak);
char nama[3][10];
void enkripsi(char inisial[], int kumpulanbil[10], int index);
void keluaran(char inisial[], int urutan[]);

int main(){
	n = 3;
	int i, j, banyak=0, index;
	char inisial[n], karakter;
	int kumpulanbil[10];
	int urutan[n], temp=0;
	for(i = 0; i < n; i++){
		scanf(" %c", &inisial[i]);
		karakter = inisial[i];
		banyak = masukan(karakter);
		
		for(j = 0; j < banyak; j++){
			scanf("%d", &kumpulanbil[j]);
		}
		urutan[i] = sum(kumpulanbil, banyak);
		index = i;
		enkripsi(inisial, kumpulanbil, index);
	}
	keluaran(inisial, urutan);
	
	return 0;
}

int masukan(char inisial){
	int banyak = 0;
	if(inisial == 'W'){
		banyak = 5;
	}
	else if(inisial == 'N'){
		banyak = 7;
	}
	else if(inisial == 'B'){
		banyak = 4;
	}
	
	return banyak;
}

int sum(int kumpulanbil[10], int banyak){
	int total = 0, i;
	for(i = 0; i < banyak; i++){
		total += kumpulanbil[i];
	}
	
	if(banyak == 4){
		total *= 2;
	}
	return total;
}

void enkripsi(char inisial[], int kumpulanbil[10], int index){
	char name[10];
	if(inisial[index] == 'W'){
		strcpy(name, "Wanda");
	}
	else if(inisial[index] == 'N'){
		strcpy(name, "Natasha");
	}
	else if(inisial[index] == 'B'){
		strcpy(name, "BobaBobi");
	}
	
	int i, temp, j=0;
	for(i = 0; i < strlen(name); i++){
		temp = name[i];
		temp += kumpulanbil[j];
		while(temp < 65){
			temp += 26;
		}
		while(temp > 90 && temp < 97 || temp > 122){
			temp -= 26;
		}
		if(temp >= 65 && temp <= 90){
			name[i] = temp;
		}
		else if(temp >= 97 && temp <= 122){
			name[i] = temp;
		}
		
		if(inisial[index] == 'B' && j == 3){
			j = -1;
		}
		j++;
		//printf("%c", name[i]);
	}
	//printf("\n");
	strcpy(nama[index], name);
	index++;
}

void keluaran(char inisial[], int urutan[]){
	int i, j, temp=0;
	char tmp, kosong[3][10];
	for(i = 0; i < n-1; i++){
		for(j = i+1; j < n; j++){
			if(urutan[j] < urutan[i]){
				temp = urutan[j];
				urutan[j] = urutan[i];
				urutan[i] = temp;
				tmp = inisial[j];
				inisial[j] = inisial[i];
				inisial[i] = tmp;
			}
		}
	}
	int tanda[3];
	int gatau;
	printf("Urutan :\n");
	for(i = 0; i < n; i++){
		if(inisial[i] == 'W'){
			printf("- Wanda\n");
			tanda[i] = 5;
		}
		else if(inisial[i] == 'N'){
			printf("- Natasha\n");
			tanda[i] = 7;
		}
		else if(inisial[i] == 'B'){
			printf("- Boba dan Bobi\n");
			tanda[i] = 8;
		}
		gatau = 0;
		while(strlen(nama[gatau]) != tanda[i]){
			gatau++;
		}
		if(strlen(nama[gatau]) == tanda[i]){
			strcpy(kosong[i],nama[gatau]);
		}
	}
	
	printf("\nKode Enkripsi :\n");
	for(i = 0; i < n; i++){
		printf("%s", kosong[i]);
	}
	printf("\n");
	
}