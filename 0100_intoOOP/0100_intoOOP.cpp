#include <iostream>
using namespace std;

class Mahasiswa {
public: // akses modifier
	string nama;
	int umur;
	string jurusan;

	void output() {
		cout << "Nama: " << nama << endl;
		cout << "Umur: " << umur << endl;
		cout << "Jurusan: " << jurusan << endl;
	}
};


class MataKuliah {
private:
	string kodeMk;
	string namaMk;
	int sks;
public :
	void input() {
		cout << "Kode MK: ";
		cin >> kodeMk;
		cout << "Nama Mk: ";
		cin >> namaMk;
		cout << "SKS: ";
		cin >> sks;
	}

	void output() {
		cout << "Kode MK: " << kodeMk << endl;
		cout << "Nama MK: " << namaMk << endl;
		cout << "SKS: " << sks << endl;
	}
};

int main() {
	Mahasiswa mhs;
	MataKuliah mk;

	mhs.nama = "Budi";
	mhs.umur = 20;
	mhs.jurusan = "Teknik Informatika";
	mhs.output();

	mk.input();
	mk.output();

	return 0;
}



#include <iostream>
using namespace std;

class bangunDatar {

	//akses modifier
private:
	float panjang, lebar;
public:
	float luas;

	void input() { // metode input persegi panjang

		cout << "Masukan Panjangnya = ";
		cin >> panjang;
		cout << "Masukan Lebarnya = ";
		cin >> lebar;
	}

	float hitungLuas() {
		return panjang * lebar;
	}

	void display() {
		cout << "Panjangnya = " << panjang << endl;

	}
};