#include <stdio.h>
#include <string.h>

int main(){
	char str[50];
	char batas[] = "done"; 
	int tmp = 0, banding = 0; 
	char hasil[50];
	
	do{
		scanf("%s", &str);
		tmp = strlen(str);
		if((tmp > banding) && (strcmp(batas,str) != 0)){
			banding = tmp;
			strcpy(hasil, str);
		}
		
	}while(strcmp(batas,str) != 0);
	
	printf("=============================\n");
	printf("string terpanjang adalah kata %s, panjangnya %d karakter\n", hasil, banding);
	
	return 0;
}