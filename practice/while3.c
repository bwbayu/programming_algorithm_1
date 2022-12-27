#include <stdio.h>

typedef struct{
	int pembilang, penyebut;
}pecahan;

int main(){
	int n, i;
	scanf("%d", &n);
	pecahan arr[n];
	
	for(i = 0; i < n; i++){
		scanf("%d", &arr[i].pembilang);
		scanf("%d", &arr[i].penyebut);
	}

	int batas = 0;
	i = 0;
	while((i < n) && (batas < 3)){
		if(arr[i].pembilang % arr[i].penyebut == 0){
			printf("%d %d\n", arr[i].pembilang, arr[i].penyebut);
			batas++;
		}
		i++;
	}
	
	return 0;
}