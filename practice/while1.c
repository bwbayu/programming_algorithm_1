#include <stdio.h>

typedef struct{
	int alas, tinggi, sisimiring;
}segitigasikusiku;

int main(){
	int n, i;
	scanf("%d", &n);
	segitigasikusiku segitiga[n];
	
	for(i = 0; i < n; i++){
		scanf("%d", &segitiga[i].alas);
		scanf("%d", &segitiga[i].tinggi);
		scanf("%d", &segitiga[i].sisimiring);
	}

	int batas = 0;
	i = 0;
	while((i < n) && (batas < 3)){
		if(segitiga[i].sisimiring * segitiga[i].sisimiring == (segitiga[i].alas * segitiga[i].alas) + (segitiga[i].tinggi) * segitiga[i].tinggi){
			printf("%d %d %d\n", segitiga[i].alas, segitiga[i].tinggi, segitiga[i].sisimiring);
			batas++;
		}
		i++;
	}
	
	return 0;
}