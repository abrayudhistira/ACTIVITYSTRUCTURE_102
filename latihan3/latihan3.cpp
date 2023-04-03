#include <iostream>
using namespace std;

struct AlamatDetail			//membuat struktur variabel AlamatDetail dengan karakter
{
	char Desa[20];
	char Kota[20];
};

struct Mahasiswa		//membuat struktur variabel mahasiswa dengan karakter
{
	char NIM[20];
	char Nama[20];
	AlamatDetail alamat;
	int umur;
};

int main() {
	Mahasiswa mhs[3];			// mendeklarasikan variabel mahasiswa

	for (int i = 0; i < 3; i++) {
		cout << "Masukkan NIM = ";
		cin.getline(mhs[i].NIM, 12);
		cout << "Masukkan Nama = ";
		cin.getline(mhs[i].Nama, 25);
		cout << "Alamat = ";
		cout << "\n\tMasukkan Desa = ";
		cin.getline(mhs[i].alamat.Desa, 20);
		cout << "\n\tMasukkan Kota = ";
		cin.getline(mhs[i].alamat.Kota, 20);
		cout << "Masukkan Umur = ";
		cin >> mhs[i].umur;
		cin.ignore(1, '\n');

	}

	for (int i = 0; i < 3; i++)
	{
		cout << "\n\nNIM = " << mhs[i].NIM;
		cout << "\nNama = " << mhs[i].Nama;
		cout << "\nDesa = " << mhs[i].alamat.Desa;
		cout << "\nKota = " << mhs[i].alamat.Kota;
		cout << "\nUmur = " << mhs[i].umur;
	}
}