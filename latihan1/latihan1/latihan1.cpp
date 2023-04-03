#include <iostream>
using namespace std;

struct mahasiswa		//membuat tipe data struct
{
	string NIM;
	string nama;
	string alamat;
	int umur;
};

int main() {
	mahasiswa mhs1, mhs2;		//membuat manual variabel mahasiswa1

	mhs1.NIM = "20220140102";
	mhs1.nama = "Abra Yudhistira";
	mhs1.alamat = "Yogyakarta";
	mhs1.umur = 20;

	cout << "Masukkan NIM = ";		//input keyboard variabel mahasiwa2
	cin >> mhs2.NIM;
	cout << "Masukkan Nama = ";
	cin >> mhs2.nama;
	cout << "Masukkan Alamat = ";
	cin >> mhs2.alamat;
	cout << "Masukkan Umur = ";
	cin >> mhs2.umur;

	cout << "\nNIM = " << mhs1.NIM;		//deklarasikan variabel mahasiswa1
	cout << "\nNama = " << mhs1.nama;
	cout << "\nAlamat = " << mhs1.alamat;
	cout << "\nUmur = " << mhs1.umur;

	cout << "\n\nNIM = " << mhs2.NIM;		//deklarasikan variabel mahasiswa2
	cout << "\nNama = " << mhs2.nama;
	cout << "\nAlamat = " << mhs2.alamat;
	cout << "\nUmur = " << mhs2.umur;
}