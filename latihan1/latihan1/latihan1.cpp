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
}
