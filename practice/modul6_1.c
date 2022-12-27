#include <stdio.h>

	
int main(){
	int i, n;
	scanf("%d", &n);
	
	char arr[n];
	for(i = 0; i < n; i++){
		scanf(" %c", &arr[i]);
	}
	
	int j=0, m=0;
	while((m < 1) && (j < n)){
		if(arr[j] == 'a'){
			printf("Ada huruf a, yang pertama di indeks ke-%d", j);
			m++;
		}
		else if(j == n-1){
			printf("Tidak ada huruf a");
		}
		j++;
	}
	printf("\n");
	
	return 0;
}