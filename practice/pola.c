#include <stdio.h>
#include <string.h>
//blm dikomen
int main(){
	char str[666];
	scanf("%s", &str);
	
	int i, j, spasi=1, index=strlen(str)/2, index1;
	if(strlen(str) % 2 == 0){ //strlen-nya genap
		index1 = (strlen(str)/2)-1;
		for(i = 0; i < strlen(str)/2; i++){
			for(j = i; j < (strlen(str)/2)-1; j++){
				printf(" ");
			}
			printf("%c", str[index]);
			index++;
			
			for(j = 0; j < spasi; j++){
				printf(" ");
			}
			spasi+=2;
			
			printf("%c", str[index1]);
			index1--;
			printf("\n");
		}
	}
	else{
		index1 = strlen(str)/2;
		for(j = 0; j < strlen(str)/2; j++){
			printf(" ");
		}
		printf("%c\n", str[index1]);

		for(i = 0; i < strlen(str)/2; i++){
			for(j = i; j < (strlen(str)/2)-1; j++){
				printf(" ");
			}
			index1++;
			printf("%c", str[index1]);
			
			for(j = 0; j < spasi; j++){
				printf(" ");
			}
			spasi+=2;
			index--;
			printf("%c\n", str[index]);
		}
	}
	
	return 0;
}