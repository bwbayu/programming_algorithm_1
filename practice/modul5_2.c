#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int arr[n];
	int i;
	
	for(i = 0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	int min = arr[0];
	int index=0;
	for(i = 0; i < n; i++){
		if(min > arr[i]){
			min = arr[i];
			index = i;
		}
	}
	int max = arr[0];
	int index1=0;
	for(i = 0; i < n; i++){
		if(max < arr[i]){
			max = arr[i];
			index1 = i;
		}
	}
	printf("Indeks nilai minimum  : %d\n", index);
	printf("Indeks nilai maksimum : %d\n", index1);
	
	return 0;
}