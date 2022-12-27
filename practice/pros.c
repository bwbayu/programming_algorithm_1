#include <stdio.h>

int i, j, min = 0;
int kosong[6];
void array(int n, int arr[n]);
void desc(int hasil[]);

int main(){
	int n;
	int h;
	for(h = 0; h < 3; h++){
		scanf("%d", &n);
		int arr[n];
		for(j = 0; j < n; j++){
			scanf("%d", &arr[j]);
		}
		array(n, arr);
	}
	desc(kosong);
	
	return 0;
}

void array(int n, int arr[n]){
	int depan=0, belakang=0, tmp=0;
	int pembagi = n/2;
	for(i = 0; i < pembagi; i++){
		depan += arr[i];
		
	}
	tmp = depan / pembagi;
	kosong[min] = tmp;
	//printf("%d %d\n", kosong[min], min);
	min++;
	
	tmp = 0;
	for(i = pembagi; i < n; i++){
		belakang += arr[i];
	}
	tmp = belakang / pembagi;
	kosong[min] = tmp;
	//printf("%d %d\n", kosong[min], min);
	min++;

}

void desc(int hasil[]){
	int tmp=0;

	
	for(i = 0; i < 5; i++){
		for(j = i+1; j < 6; j++){
			if(hasil[i] < hasil[j]){
				tmp = hasil[i];
				hasil[i] = hasil[j];
				hasil[j] = tmp;
			}
		}
	}
	
	for(i = 0; i < 6; i++){
		printf("%d\n", hasil[i]);
	}
}