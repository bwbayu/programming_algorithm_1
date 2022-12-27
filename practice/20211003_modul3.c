#include <stdio.h>

typedef struct{
	int bil1, bil2, bil3;
	char x;
} aritmatika;

int main(){
	aritmatika art; 
	
	scanf("%d %d %d %c", &art.bil1, &art.bil2, &art.bil3, &art.x);
	
	switch(art.x){
		case 'A':
		printf("%d\n", (art.bil1 * art.bil2) + (art.bil2 * art.bil3));
		break;
		case 'B':
		printf("%d\n", (art.bil1 * art.bil2) / art.bil3);
		break;
		case 'C':
		printf("%d\n", (art.bil2 - art.bil3) * art.bil1);
		break;
		default:
		printf("%d\n", (art.bil1 + art.bil2) - art.bil3);
		break;
	}
	return 0;
	
}