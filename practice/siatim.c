#include <stdio.h>
#include <string.h>
//blm dikomen
int main(){
	char sub[6];
	char str[666];
	scanf("%s", &sub);
	scanf("%s", &str);
	
	int banyak=0, index=0, kunci=0, kunci1=0;
	do{
		if(str[index] == sub[kunci]){
			kunci1 = kunci;
			while(str[index] == sub[kunci1] && kunci1 < strlen(sub)){
				kunci1++;
				index++;
			}
		}
		else{
			index++;
		}
		if(kunci1 == strlen(sub)){
			banyak++;
		}
		kunci1 = 0;
		kunci = 0;
	}while(index < strlen(str));
		
	printf("%d\n", banyak);
	
	return 0;
}