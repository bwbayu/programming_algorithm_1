#include <stdio.h>
//ini juga kyknya masih salah
int main(){
	int n=6, i, j=0, k=0;
	char arr[n];
	for(i = 0; i < n; i++){
		scanf(" %c", &arr[i]);
	}
	
	int bhuruf=0, bangka=0;
	char huruf[3], angka[3];
	for(i = 0; i < n; i++){
		if(arr[i] >= 48 && arr[i] <= 57){
			bangka++;
			angka[j] = arr[i];
			j++;
		}
		else if(arr[i] >= 65 && arr[i] <= 90 || arr[i] >= 97 && arr[i] <= 122){
			bhuruf++;
			huruf[k] = arr[i];
			k++;
		}
	}
	
	if(bhuruf == 3 && bangka == 3){
		for(i = 0; i < 3; i++){
			printf("%c\n%c\n", huruf[i], angka[i]);
		}
	}
	else{
		printf("tidak valid\n");
	}
	
	return 0;
}