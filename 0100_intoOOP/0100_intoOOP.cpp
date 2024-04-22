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
};

