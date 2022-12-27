#include <stdio.h>
#include <string.h>
//arssk14

void masukan(int n, char str[][51]){
	int i;
	for(i = 0; i < n; i++){
		scanf("%s", &str[i]);
	}
}

int cek(int n, char str[][51], char kode[][51]){
	int i, j, front = strlen(kode[0]), behind = strlen(kode[1]);
	char depan[front], blkng[behind];
	
	i = 0;
	int hasil=0;
	while(i < n && hasil != 2){
		for(j = 0; j < front; j++){
			depan[j] = str[i][j];
		}
		j = (strlen(str[i])-behind);
		int index = 0;
		while(j < strlen(str[i]) && index < behind){
			blkng[index] = str[i][j];
			j++;
			index++;
		}
		
		if(front > 1){
			if(strcmp(depan, kode[0]) == 0){
				hasil++;
			}
		}
		else{
			if(depan[0] == kode[0][0]){
				hasil++;
			}
		}
		
		if(behind > 1){
			if(strcmp(blkng, kode[1])){
				hasil++;
			}
		}
		else{
			if(blkng[0] == kode[1][0]){
				hasil++;
			}
		}
		
		if(hasil == 2){
			return 1;
		}
		else{
			hasil = 0;
		}
		i++;
	}
}

int main(){
	int n, m;
	scanf("%d", &n);
	char str1[n][51];
	masukan(n, str1);
	scanf("%d", &m);
	char str2[m][51];
	masukan(m, str2);
	int k = 2;
	char kode[k][51];
	masukan(k, kode);
	
	int hcek1 = cek(n, str1, kode);
	int hcek2 = cek(m, str2, kode);
	if(hcek1 == 1 && hcek2 == 1){
		printf("valid\n");
	}
	else{
		printf("tidak valid\n");
	}
	
	return 0;
}