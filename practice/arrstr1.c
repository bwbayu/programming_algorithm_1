#include <stdio.h>
#include <string.h>

int main(){
	char str[50];
	scanf("%s", str);
	int batas = 0, i;
	for(i = 0; i < strlen(str); i++){
		if((str[i] == 'a') || (str[i] == 'i') || (str[i] == 'u') || (str[i] == 'e') || (str[i] == 'o')){
			printf("%d", batas);
		}
		else{
			printf("%c", str[i]);
		}
		batas++;
		if(batas == 10){
			batas = 0;
		}
	}
	printf("\n");
	
	return 0;
}