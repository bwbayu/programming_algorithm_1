#include <stdio.h>
// masih salah(gatau salahnya dmn) + komennya blm di upload
int main(){
	int n, m, i;
	
	scanf("%d", &n);
	int arr1[n];
	for(i = 0; i < n; i++){
		scanf("%d", &arr1[i]);
	}
	
	scanf("%d", &m);
	int arr2[m];
	for(i = 0; i < m; i++){
		scanf("%d", &arr2[i]);
	}
	int total = 0;
	if((n > m) || (n == m)){
		for(i = 0; i < m; i++){
			if(((arr1[i] % 2 == 0) && (arr2[i] % 2 == 0)) || ((arr1[i] % 2 == 1) && (arr2[i] % 2 == 1))){
				total += 1;
			}
			else{
				printf("tidak valid\n");
			}
		}
		if(total == m){
			printf("valid\n");
		}
	}
	else{
		for(i = 0; i < n; i++){
			if(((arr1[i] % 2 == 0) && (arr2[i] % 2 == 0)) || ((arr1[i] % 2 != 0) && (arr2[i] % 2 != 0))){
				total += 1;
			}
			else{
				printf("tidak valid\n");
			}
		}
		if(total == n){
			printf("valid\n");
		}
	}
	return 0;
}