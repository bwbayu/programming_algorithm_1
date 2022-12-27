#include <stdio.h>

//masih salah idk why
int main(){
	int i, j=0, k=0;
	int arr[6];
	for(i = 0; i < 6; i++){
		scanf("%d", &arr[i]);
	}
	
	int ganjil=0, genap=0;
	int bganjil[3], bgenap[3];
	for(i = 0; i < 6; i++){
		if(arr[i] % 2 == 0){
			bgenap[j] = arr[i];
			genap++;
			j++;
		}
		else{
			bganjil[k] = arr[i];
			ganjil++;
			k++;
		}
	}
	
	if(genap == 3 & ganjil == 3){
		for(i = 0; i < 3; i++){
			printf("%d\n%d\n", bgenap[i], bganjil[i]);
		}
	}
	else{
		printf("tidak valid\n");
	}
	
	return 0;
}