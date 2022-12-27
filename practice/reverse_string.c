#include <stdio.h>
#include <string.h>
// reverse string
int main(){
	char str[50], tmp;
	scanf("%s", &str);
	
	int index=0;
	int index1 = strlen(str)-1;
	do{
		tmp = str[index];
		str[index] = str[index1];
		str[index1] = tmp;
		
		index++;
		index1--;
	}while(index < index1);
	printf("%s", str);
	
	return 0;
}