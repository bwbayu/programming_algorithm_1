#include <stdio.h>

//Saya Bayu Wicaksono NIM 2106836 mengerjakan UTS dalam mata kuliah Algoritma dan Pemrograman 1 untuk keberkahanNya 
//maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin

int main(){
	int n, i, j;
	scanf("%d", &n);
	char arr[n]; //------------------------membuat array untuk karakter yang banyaknya n
	for(i = 0; i < n; i++){//--------------pengulangan untuk mengisi array
		scanf(" %c", &arr[i]);
	}
	int min, max; //-----------------------variabel untuk menentukan index min dan index max
	scanf("%d %d", &min, &max);
	
	int x; //------------------------------variabel untuk menentukan banyak huruf yang akan dihitung
	scanf("%d", &x);
	char arr1[x];//------------------------membuat array1 untuk menentukan patokan huruf mana saja yang akan dihitung
	for(i = 0; i < x; i++){//--------------pengulangan untuk mengisi array1
		scanf(" %c", &arr1[i]);
	}
	
	int total = 0;//-----------------------variabel untuk menyimpan banyak huruf yang sama
	for(i = 0; i < x; i++){//--------------pengulangan untuk membandingkan huruf dari array1 dan array (jadi for ini sama for dibawahnya itu nanti bakal dibandingin di if, nah for ini itu jadi patokan huruf untuk ngebandingin dengan huruf yang ada di array) merangkai kata-katanya lebih sulit dari ngerjain soalnya bu jadi semoga ibu mengerti...
		for(j = min; j < (max+1); j++){//--pengulangan untuk membandingkan huruf dari array dan array1
			if(arr1[i] == arr[j]){//-------mengecek apakah huruf di array1 dan array sama
				total += 1;//--------------jika sama maka variabel total akan bertambah 1
			}
		}
		if(x-1 == i){//--------------------bikin ini biar angka terakhir dioutputnya gaada spasinya
			printf("%d", total);
		}
		else{//----------------------------yang ini biar setelah angka ada spasi
			printf("%d ", total);
		}
		total = 0;//-----------------------untuk me-reset variabel total biar jadi 0 lagi
	}
	printf("\n");
	
	return 0;
}