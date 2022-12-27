#include <stdio.h>

typedef struct{
	int alas;
	int tinggi;
	int miring;
	int luas;
}segitiga;
int n;
void max1(segitiga segi[], int i);

int main(){
	int i, j;
	scanf("%d", &n);
	segitiga segi[n];
	int sisi[n][3];
	for(i = 0; i < n; i++){
		//scanf("%d %d %d", &sisi[i][0], &sisi[i][1], &sisi[i][2]);
		scanf("%d %d %d", &segi[i].alas, &segi[i].tinggi, &segi[i].miring);
		//max(sisi, i);
		max1(segi, i);
	}
	
	int maks = 0, sisimiring = 0;
	for(i = 0; i < n; i++){
		if(segi[i].luas > maks){
			maks = segi[i].luas;
			sisimiring = segi[i].miring;
		}
		
	}
	printf("%d %d\n", maks, sisimiring);
	return 0;
}

void max1(segitiga segi[], int i){
	int j, k, temp;
	int kosong[i][3];
	kosong[i][0] = segi[i].alas;
	kosong[i][1] = segi[i].tinggi;
	kosong[i][2] = segi[i].miring;
	
	for(j = 0; j < 2; j++){
		for(k = j+1; k < 3; k++){
			if(kosong[i][j] > kosong[i][k]){
				temp = kosong[i][j];
				kosong[i][j] = kosong[i][k];
				kosong[i][k] = temp;
			}
		}
	}
	segi[i].miring = kosong[i][2];
	segi[i].luas = kosong[i][0] * kosong[i][1] / 2;
	
}