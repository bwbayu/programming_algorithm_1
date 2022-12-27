#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int arr[n];
	int i;
	float total=0;
	for(i = 0; i<n; i++){
		scanf("%d", &arr[i]);
		total += arr[i];
	}
	printf("%f", (total/n));
	return 0;
	
}