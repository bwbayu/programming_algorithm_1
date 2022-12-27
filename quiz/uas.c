#include <stdio.h>

typedef struct{
	int arr[4];
}integer;

void urutan(int n, integer angka[], int i);
void keluaran(int n, integer angka[]);

int main(){
	int n, i, j;
	scanf("%d", &n);
	integer angka[n];
	for(i = 0; i < n; i++){
		for(j = 0; j < 4; j++){
			scanf("%d", &angka[i].arr[j]);
		}
		urutan(n, angka, i);
	}
	keluaran(n, angka);
	
	return 0;
}

void urutan(int n, integer angka[], int i){
	int j, k, temp;
	for(j = 0; j < 3; j++){
		for(k = j+1; k < 4; k++){
			if(angka[i].arr[j] > angka[i].arr[k]){
				temp = angka[i].arr[j];
				angka[i].arr[j] = angka[i].arr[k];
				angka[i].arr[k] = temp;
			}
		}
	}
}

void keluaran(int n, integer angka[]){
	int i, j, spasi=0, k;
	for(i = 0; i < n; i++){
		for(j = 3; j >= 0; j--){
			for(k = 0; k < spasi; k++){
				printf(" ");
			}
			printf("%d\n", angka[i].arr[j]);
		}
		if(angka[i].arr[3] < 10){
			spasi++;
		}
		else if(angka[i].arr[3] < 100){
			spasi+=2;
		}
		else if(angka[i].arr[3] < 1000){
			spasi+=3;
		}
		else{
			spasi+=4;
		}
	}
}