#include <stdio.h>
// si angkanya ada yg kurang 1
int main(){
	int n, i;
	scanf("%d", &n);
	float arr[n];
	for(i = 0; i < n; i++){
		scanf(" %f", &arr[i]);
	}
	
	int arr1[n], arr3[n];
	float arr2[n];
	float x;
	for(i = 0; i < n; i++){
		arr1[i] = arr[i];
		x = arr[i] - arr1[i];
		arr2[i] = x * 100;
		arr3[i] = arr2[i];
		printf("%f\n", arr2[i]);
	}
	for(i = 0; i < n; i++){
		printf("%d\n", arr3[i]);
	}
	return 0;
}