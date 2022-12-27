#include <stdio.h>
#include <string.h>

int main(){
	char str[100];
	scanf("%s", &str);
	
	int i, vokal=0, konsonan=0, total=0, j, k;
	for(i = 0; i < strlen(str); i++){
		if((str[i] == 'a') || (str[i] == 'i') || (str[i] == 'u') || (str[i] == 'e') || (str[i] == 'o')){
			vokal+=1;
		}
		else{
			konsonan+=1;
		}
	}
	total = vokal*konsonan;
	
	int batas, index=0;
	if(total % 2 == 0){ //buat nentuin 4/3
		batas = strlen(str)/4;
		i = 0;
		while(strlen(str) % 4 == 0 && i < batas){ //buat nentuin banyak kolom, kalau strlen-nya genap maka < doang(32/2=8)
			if(i % 2 == 0){
				j=0;
				while(j < 4 && index < strlen(str)){
					for(k = 0; k < j; k++){
						printf(" ");
					}
					printf("%c\n", str[index]);
					index++;
					j++;
				}
			}
			else{
				j=0;
				while(j < 4 && index < strlen(str)){
					printf("%c", str[index]);
					index++;
					j++;
				}
				printf("\n");
			}
			i++;
		}
		while(strlen(str) % 4 != 0 && i <= batas){ //buat nentuin banyak kolom, kalau strlen-nya ganjil maka <= (31/2=7(+1))
			if(i % 2 == 0){
				j=0;
				while(j < 4 && index < strlen(str)){
					for(k = 0; k < j; k++){
						printf(" ");
					}
					printf("%c\n", str[index]);
					index++;
					j++;
				}
			}
			else{
				j=0;
				while(j < 4 && index < strlen(str)){
					printf("%c", str[index]);
					index++;
					j++;
				}
				printf("\n");
			}
			i++;
		}
	}
	else{
		batas = strlen(str)/3;
		i=0;
		while(strlen(str) % 3 == 0 && i < batas){
			if(i % 2 == 0){
				j=0;
				while(j < 3 && index < strlen(str)){
					for(k = 0; k < j; k++){
						printf(" ");
					}
					printf("%c\n", str[index]);
					index++;
					j++;
				}
			}
			else{
				j=0;
				while(j < 3 && index < strlen(str)){
					printf("%c", str[index]);
					index++;
					j++;
				}
				printf("\n");
			}
			i++;
		}
		while(strlen(str) % 3 != 0 && i <= batas){
			if(i % 2 == 0){
				j=0;
				while(j < 3 && index < strlen(str)){
					for(k = 0; k < j; k++){
						printf(" ");
					}
					printf("%c\n", str[index]);
					index++;
					j++;
				}
			}
			else{
				j=0;
				while(j < 3 && index < strlen(str)){
					printf("%c", str[index]);
					index++;
					j++;
				}
				printf("\n");
			}
			i++;
		}
		
	}
	
	return 0;
}