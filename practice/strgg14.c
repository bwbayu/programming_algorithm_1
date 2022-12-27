#include <stdio.h>
#include <string.h>
//blm upload komen
int main(){
	char str[100];
	scanf("%s", &str);
	
	int i, j, vokal=0, konsonan=0, total;
	for(i = 0; i < strlen(str); i++){
		if((str[i] == 'a') || (str[i] == 'i') || (str[i] == 'u') || (str[i] == 'e') || (str[i] == 'o')){
			vokal+=1;
		}
		else{
			konsonan+=1;
		}
	}
	total = vokal*konsonan;
	int batas1 = strlen(str)/4, batas2 = strlen(str)/3, index=0, batas=0;
	if(total % 2 == 0){
		if(strlen(str) % 4 == 0){
			for(i = 0; i < batas1; i++){
				while((batas < 4) && (index < strlen(str))){
					printf("%c", str[index]);
					index++;
					batas++;
				}
				batas=0;
				printf("\n");
			}
		}
		else if(strlen(str) % 4 != 0){
			for(i = 0; i <= batas1; i++){
				while((batas < 4) && (index < strlen(str))){
					printf("%c", str[index]);
					index++;
					batas++;
				}
				batas=0;
				printf("\n");
			}
		}
	}
	else{
		if(strlen(str) % 3 == 0){
			for(i = 0; i < batas2; i++){
				while((batas < 3) && (index < strlen(str))){
					printf("%c", str[index]);
					index++;
					batas++;
				}
				batas=0;
				printf("\n");
			}
		}
		else if(strlen(str) % 3 != 0){
			for(i = 0; i <= batas2; i++){
				while((batas < 3) && (index < strlen(str))){
					printf("%c", str[index]);
					index++;
					batas++;
				}
				batas=0;
				printf("\n");
			}
		}
	}
	
	
	return 0;
}