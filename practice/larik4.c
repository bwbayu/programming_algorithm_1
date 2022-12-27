#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int arr[n];
	int i;
	
	for(i = 0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	int min=arr[0];
	for(i = 0; i<n; i++){
		if(i % 2 == 0){
			if(min > arr[i]){
				min = arr[i];
			}
		}
	}
	printf("%d", min);
	return 0;
}