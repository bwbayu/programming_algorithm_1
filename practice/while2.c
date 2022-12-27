#include <stdio.h>

int main(){
	int n, i;
	scanf("%d", &n);
	double arr[n];
	for(i = 0; i < n; i++){
		scanf("%lf", &arr[i]);
	}
	
	int depan, belakang;
	for(i = 0; i < n; i++){
		depan = arr[i];
		belakang = (depan - arr[i]) * 100;
		if((depan % 2 == 0) && (belakang % 2 == 0)){
			printf("%f", arr[i]);
		}
	}
	
	return 0;
}