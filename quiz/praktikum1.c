#include <stdio.h>

/* Saya Bayu Wicaksono NIM 2106836 mengerjakan soal TP1 dalam mata kuliah Algoritma dan Pemrograman 1 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin
*/
int main(){
	int pemakaian;
	int istirahat;
	int jumlah;
	int menit;
	int detik;
	int total_menit;
	int total_detik;
	int total_waktu;
	int waktu_istirahat;
	int total_istirahat;
	int durasi_jam;
	int modulo_jam;
	int durasi_menit;
	int durasi_detik;
	
	pemakaian = 40 * 60; //mengubah waktu pemakaian mesin dari menit ke detik
	istirahat = 5 * 60; //mengubah waktu istirahat dari menit ke detik
	
	//meminta masukan user untuk jumlah pakaian, durasi menit dan detik yang dibutuhkan untuk menjahit 1 pakaian
	scanf("%d", &jumlah);
	scanf("%d", &menit);
	scanf("%d", &detik);
	
	total_menit = menit * 60; //mengubah waktu yang dibutuhkan untuk menjahit 1 pakaian dari menit ke detik
	total_detik = total_menit + detik; //menjumlahkan total waktu yg dibutuhkan untuk menjahit 1 pakaian dalam detik
	total_waktu = total_detik * jumlah; //mencari total waktu yang dibutuhkan untuk menyelesaikan semua pakaian
	
	waktu_istirahat = total_waktu / pemakaian; //mencari jumlah istirahat yang dilakukan selama menjahit
	total_istirahat = waktu_istirahat * istirahat; //mencari total waktu yang dibutuhkan selama istirahat
	total_istirahat += total_waktu; //mencari total waktu yang dibutuhkan untuk menjahit dan istirahat
	
	durasi_jam = total_istirahat / 3600; //mencari berapa jam yang dibutuhkan untuk menjahit
	modulo_jam = total_istirahat % 3600; //mencari sisa waktu (dalam detik) yang dibutuhkan untuk menjahit
	durasi_menit = modulo_jam / 60; //mencari berapa menit yang dibutuhkan untuk menjahit dari sisa waktu
	durasi_detik = modulo_jam % 60; //mencari berapa detik yang dibutuhkan untuk menjahit dari sisa waktu
	
	//menampilkan jumlah waktu istirahat mesin dan total waktu yang dibutuhkan untuk menjahit
	printf("Waktu istirahat      : %d kali\n", waktu_istirahat);
	printf("Total waktu menjahit : %d jam, %d menit, %d detik\n", durasi_jam, durasi_menit, durasi_detik);
	return 0;
	
}