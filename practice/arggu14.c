#include <stdio.h>
#include <string.h>
//arggu14
int n;
void ugenap(int genap[51], int indexgenap);
void uganjil(int ganjil[51], int indexganjil);

int main(){
	n=2;
	int arr[51], i, j;
	int genap[51], ganjil[51], indexgenap=0, indexganjil=0;
	for(i = 0; i < n; i++){
		int banyak, temp=0;
		scanf("%d", &banyak);
		for(j = 0; j < banyak; j++){
			scanf("%d", &arr[j]);
			if(arr[j] % 2 == 0){
				temp = arr[j];
				genap[indexgenap] = temp;
				indexgenap++;
			}
			else{
				temp = arr[j];
				ganjil[indexganjil] = temp;
				indexganjil++;
			}
		}
	}
	uganjil(ganjil, indexganjil);
	ugenap(genap, indexgenap);
	return 0;
}

void uganjil(int ganjil[51], int indexganjil){
	int i, j, temp;

	printf("%d", ganjil[0]);
	for(i = 1; i < indexganjil; i++){
		printf(" %d", ganjil[i]);
	}
}

void ugenap(int genap[51], int indexgenap){
	int i, j, temp;

	printf("\n%d", genap[0]);
	for(i = 1; i < indexgenap; i++){
		printf(" %d", genap[i]);
	}
	printf("\n");
}