#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int arr1[n];
	int arr2[n];
	int i;
	
	for(i = 0; i < n; i++){
		scanf("%d", &arr1[i]);
	}
	for(i = 0; i < n; i++){
		scanf("%d", &arr2[i]);
	}
	int maks1 = arr1[0];
	for(i = 1; i < n; i++){
		if(maks1 < arr1[i]){
			maks1 = arr1[i];
		}
	}
	int min2 = arr2[0];
	for(i = 1; i < n; i++){
		if(maks2 > arr2[i]){
			min2 = arr2[i];
		}
	}
	printf("%d", (maks1+min2));
	return 0;
	
}