#include <stdio.h>
//belum diupload yg ada komen
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
	
	int separuhn = (n/2);
	int m1 = (m/2);
	int totaln=0, totalm=0;
	for(i = 0; i < separuhn; i++){
		totaln += arr1[i];
	}
	for(i = m1; i < m; i++){
		totalm += arr2[i];
	}
	
	if(totaln == totalm){
		printf("valid\n");
	}
	else{
		printf("tidak valid\n");
	}
	return 0;
}