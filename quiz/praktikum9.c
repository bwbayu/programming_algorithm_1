#include <stdio.h>
#include <string.h>

void kekuatanboss(char jboss[]);
void kekuatanchar(int n, char jchar[][100]);
int jurusboss, x=0, juruschar[50];

void buff(int n, char echar[][50], char eboss[]);
void kelompok(int n, char nchar[][50]);
int x1=0, x2=0;
char nsuperior[50][50], ninferior[50][50];
int ksuperior[50], kinferior[50];

void superior(char nsuperior[][50], int ksuperior[]);
void inferior(char ninferior[][50], int kinferior[]);

int main(){
	//boss
	char nboss[50], eboss[50], jboss[100];
	scanf("%s", &nboss);
	scanf("%s", &eboss);
	scanf("%s", &jboss);
	
	//karakter
	int n;
	int i;
	scanf("%d", &n);
	char nchar[n][50], echar[n][50], jchar[n][100];
	for(i = 0; i < n; i++){
		scanf("%s", &nchar[i]);
		scanf("%s", &echar[i]);
		scanf("%s", &jchar[i]);
	}
	
	//call
	kekuatanboss(jboss);
	kekuatanchar(n, jchar);
	buff(n, echar, eboss);
	kelompok(n, nchar);
	superior(nsuperior, ksuperior);
	inferior(ninferior, kinferior);
	
	return 0;
}

void kekuatanboss(char jboss[]){
	int index = 0, total1=0, tmp=0, i;
	while(jboss[index] != '_' && index < strlen(jboss)){
		tmp = jboss[index];
		total1 += tmp;
		index++;
	}
	
	index++;
	int total2=0, indexkata2=0;
	for(i = index; i < strlen(jboss); i++){
		tmp = jboss[i];
		total2 += tmp;
		indexkata2++;
	}
	
	int kboss = 0;
	kboss = total1 - (total2 / indexkata2);
	if(kboss < 0){
		kboss *= -1;
	}
	jurusboss = kboss;
	printf("Kekuatan Boss: %d\n", kboss);
}

void kekuatanchar(int n, char jchar[][100]){
	int index, i, tmp = 0, total1, index2, total2, j;
	for(i = 0; i < n; i++){
		total1 = 0;
		total2 = 0;
		index = 0;
		index2 = 0;
		while(jchar[i][index] != '_'){
			tmp = jchar[i][index];
			total1 += tmp;
			index++;
		}
		
		index++;
		for(j = index; j < strlen(jchar[i]); j++){
			tmp = jchar[i][j];
			total2 += tmp;
			index2++;
		}
		
		int ksuper = 0;
		ksuper = total1 - (total2 / index2);
		if(ksuper < 0){
			ksuper *= -1;
		}
		
		juruschar[x] = ksuper;
		x++;
	}
}

void buff(int n, char echar[][50], char eboss[]){
	int i, j, tmp=0;
	for(i = 0; i < n; i++){
		if(strcmp(echar[i], "Fire") == 0 && strcmp(eboss, "Wind") == 0 ||
		strcmp(echar[i], "Wind") == 0 && strcmp(eboss, "Lightning") == 0 ||
		strcmp(echar[i], "Lightning") == 0 && strcmp(eboss, "Earth") == 0 ||
		strcmp(echar[i], "Earth") == 0 && strcmp(eboss, "Water") == 0 ||
		strcmp(echar[i], "Water") == 0 && strcmp(eboss, "Fire") == 0){
			tmp = juruschar[i];
			tmp = tmp + (tmp * 0.4);
			juruschar[i] = tmp;
		}
		else if(strcmp(echar[i], "Wind") == 0 && strcmp(eboss, "Fire") == 0 ||
		strcmp(echar[i], "Lightning") == 0 && strcmp(eboss, "Wind") == 0 ||
		strcmp(echar[i], "Earth") == 0 && strcmp(eboss, "Lightning") == 0 ||
		strcmp(echar[i], "Water") == 0 && strcmp(eboss, "Earth") == 0 ||
		strcmp(echar[i], "Fire") == 0 && strcmp(eboss, "Water") == 0){
			tmp = juruschar[i];
			tmp = tmp - (tmp * 0.3);
			juruschar[i] = tmp;
		}
	}
}

void kelompok(int n, char nchar[][50]){
	int i;
	for(i = 0; i < n; i++){
		if(juruschar[i] > jurusboss){
			
			strcpy(nsuperior[x1], nchar[i]);
			ksuperior[x1] = juruschar[i];
			x1++;
		}
		else{
			//masuk inferior
			strcpy(ninferior[x2], nchar[i]);
			kinferior[x2] = juruschar[i];
			x2++;
		}
	}
}

void superior(char nsuperior[][50], int ksuperior[]){
	int i;
	printf("=====================\nSuperior\n=====================\n---------------------\n");
	if(x1 != 0){
		for(i = 0; i < x1; i++){
			printf("%s %d\n", nsuperior[i], ksuperior[i]);
		}
	}
	else{
		printf("Tidak ada karakter Superior\n");
	}
	
	printf("---------------------\n");
}

void inferior(char ninferior[][50], int kinferior[]){
	int i;
	printf("=====================\nInferior\n=====================\n---------------------\n");
	if(x2 != 0){
		for(i = 0; i < x2; i++){
			printf("%s %d\n", ninferior[i], kinferior[i]);
		}
	}
	else{
		printf("Tidak ada karakter Inferior\n");
	}
	
	printf("---------------------\n");
}