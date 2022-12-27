#include <stdio.h>

int main(){
	int n;
	scanf("%d", &n);
	int num[n];
	int i;
	
	for(i = 0; i < n; i++){
		scanf("%d", &num[i]);
	}
	int maks=-99;
	for(i = 0; i < n; i++){
		if(num[i] % 2 == 1){
			if(maks < num[i]){
				maks = num[i];
			}
		}
	}
	printf("%d", maks);
	return 0;
}