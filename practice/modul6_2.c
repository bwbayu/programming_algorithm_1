#include <stdio.h>

typedef struct{
	int nim, nilai;
	char kelas;
}mahasiswa;

int main(){
	int n, i;
	scanf("%d", &n);
	
	mahasiswa siswa[n];
	
	for(i = 0; i < n; i++){
		scanf("%d %c %d", &siswa[i].nim, &siswa[i].kelas, &siswa[i].nilai);
	}
	
	int x=0, y=0;
	while((x < n) && (y == 0)){
		if(siswa[x].nilai == 100){
			y += 1;
		}
		x++;
	}
	
	if(y == 1){
		printf("Ada orang istimewa");
	}
	else{
		printf("Semua orang biasa");
	}
	printf("\n");
	return 0;
}