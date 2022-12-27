#include <stdio.h>

int main(){
	int bil; //membuat variabel bilangan
	scanf("%d", &bil);
	
	if(bil < 10){
		printf("%d merupakan satuan\n", bil);
	}else if(bil < 100){
		printf("%d merupakan puluhan\n", bil);
	}else if(bil < 1000){
		printf("%d merupakan ratusan\n", bil);
	}else if(bil < 10000){
		printf("%d merupakan ribuan\n", bil);
	}else{
		printf("%d merupakan lainnya\n");
	}
	return 0;
}