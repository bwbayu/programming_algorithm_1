#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int arr[n];
	int i, j;
	int kosong;
	
	for(i = 0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	for(i = 0; i < (n-1); i++){
		for(j = i+1; j < n; j++){
			if(arr[i] > arr[j]){
				kosong = arr[i];
				arr[i] = arr[j];
				arr[j] = kosong;
			}
		}
	}
	printf("Nilai minimum kedua  : %d\n", arr[1]);
	printf("Nilai maksimum kedua : %d\n", arr[n-2]);
	return 0;
}