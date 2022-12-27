#include <stdio.h>
#include <string.h>
//arypb14
int n;
int min(int bil[51], int banyak);
int max(int bil[51], int banyak);
void urutan(int kecil[], int besar[]);

int main(){
	n=3;
	int bil[51], i, j;
	int kecil[n], besar[n];
	for(i = 0; i < n; i++){
		int banyak;
		scanf("%d", &banyak);
		for(j = 0; j < banyak; j++){
			scanf("%d", &bil[j]);
		}
		int temp, temp1;
		temp = min(bil, banyak);
		kecil[i] = temp;
		temp1 = max(bil, banyak);
		besar[i] = temp1;
	}
	urutan(kecil, besar);
	return 0;
}

int min(int bil[51], int banyak){
	int i, temp=0, min = 99999;
	for(i = 0; i < banyak; i++){
		if(bil[i] < min){
			min = bil[i];
		}
	}
	
	return min;
}

int max(int bil[51], int banyak){
	int i, temp=0, max = 0;
	for(i = 0; i < banyak; i++){
		if(bil[i] > max){
			max = bil[i];
		}
	}
	
	return max;
}

void urutan(int kecil[], int besar[]){
	int i, j, temp;
	for(i = 0; i < n-1; i++){
		for(j = i+1; j < n; j++){
			if(kecil[i] > kecil[j]){
				temp = kecil[i];
				kecil[i] = kecil[j];
				kecil[j] = temp;
			}
		}
	}
	printf("%d", kecil[0]);
	for(i = 1; i < n; i++){
		printf(" %d", kecil[i]);
	}
	
	for(i = 0; i < n-1; i++){
		for(j = i+1; j < n; j++){
			if(besar[i] > besar[j]){
				temp = besar[i];
				besar[i] = besar[j];
				besar[j] = temp;
			}
		}
	}
	
	printf("\n%d", besar[0]);
	for(i = 1; i < n; i++){
		printf(" %d", besar[i]);
	}
	printf("\n");
}