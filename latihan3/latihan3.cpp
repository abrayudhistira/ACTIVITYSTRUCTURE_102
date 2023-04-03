#include <iostream>
using namespace std;

struct AlamatDetail			//membuat struktur variabel AlamatDetail dengan karakter
{
	char Desa[20];
	char Kota[20];
};

struct mahasiswa		//membuat struktur variabel mahasiswa dengan karakter
{
	char NIM[20];
	char nama[20];
	AlamatDetail alamat;
	int umur;
};