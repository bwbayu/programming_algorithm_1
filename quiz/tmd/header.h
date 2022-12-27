#include <stdio.h>
#include <string.h>

/*Saya Bayu Wicaksono mengerjakan evaluasi Tugas Masa Depan dalam mata kuliah Algoritma dan Pemrograman I 
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

//memisahkan ascii
void split(char str[], int bagi[][10], int banyak[]); //prosedur untuk memecah angka ascii huruf contohnya 97 jadi 9 dan 7, 117 jadi 1, 1, dan 7

//pola
void m(int tebal, int tanda); //prosedur untuk pola spasi-B-spasi
void rl(int tebal); //prosedur untuk pola B-spasi-B
void l(int tebal); //prosedur untuk pola spasi-spasi-B
void r(int tebal, int tanda); //prosedur untuk pola B-spasi-spasi
void rm(int tebal, int tanda); //prosedur untuk pola B-B-spasi
void one(int tebal); //prosedur khusus untuk angka 1
void rr(int tebal, int tanda); //prosedur untuk pola B-spasi
void ll(int tebal); //prosedur untuk pola spasi-B
void spasi(int tebal, int tebalkhusus); //prosedur untuk spasi

//keluaran
void keluaran(int bagi[][10], int banyak[], int jumlah, int tebal, int baris); //prosedur untuk keluaran pola dan spasi

//pola dibagi menjadi 5 bagian/baris
void cari1(int tebal, int angka, int tanda); //prosedur untuk pola baris 1
void cari2(int tebal, int angka, int tanda); //prosedur untuk pola baris 2
void cari3(int tebal, int angka, int tanda); //prosedur untuk pola baris 3
void cari4(int tebal, int angka, int tanda); //prosedur untuk pola baris 4
void cari5(int tebal, int angka, int tanda); //prosedur untuk pola baris 5