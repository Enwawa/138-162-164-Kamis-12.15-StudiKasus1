#include <iostream>
#include <string>
using namespace std;

struct TTL{
		string tempat_lahir;
		int tanggal;
		int bulan;
		int tahun;
};
struct Alamat{
		string alamat_tinggal;
		string rt;
		string rw;
		string kelurahan;
		string kecamatan;
		string provinsi;
		string kabupaten;	
};
struct DataKTP{
	string nik;
	string nama;
	TTL ttl;
	bool kelamin;
	int golongan_darah;
	Alamat alamat;
	int agama;
	int status_perkawinan;
	string pekerjaan;
	string kewarganegaraan = "WNI";
	string masa_berlaku = "SEUMUR HIDUP";
	
};


void inputNIK(DataKTP &data_penduduk){
	cout << "Masukkan NIK Anda: "; cin >> data_penduduk.nik;
	system("cls");
}
void inputNama(DataKTP &data_penduduk){
	cout << "Masukkan nama lengkap Anda: "; cin.ignore();
	getline(cin, data_penduduk.nama);
	system("cls");

}
void inputTTL(DataKTP &data_penduduk){ 
	cout << "Masukkan tempat lahir Anda: "; 
	getline(cin, data_penduduk.ttl.tempat_lahir);
	cout << "Masukkan tanggal lahir Anda(01-31): "; cin >> data_penduduk.ttl.tanggal;
	cout << "Masukkan bulan lahir Anda(01-12): "; cin >> data_penduduk.ttl.bulan;
	cout << "Masukkan tahun lahir Anda: "; cin >> data_penduduk.ttl.tahun;
	system("cls");
}
void inputJK(DataKTP &data_penduduk){
	int pilihan;
	cout << "Pilih jenis kelamin:\n";
	cout << "1. Laki-laki\n";
	cout << "2. Perempuan\n";
	cout << "Pilihan (1/2): ";
	cin >> pilihan;

	if (pilihan == 2)
		data_penduduk.kelamin = true; 
	else
		data_penduduk.kelamin = false; 
	system("cls");
}
void inputGoldar(DataKTP &data_penduduk){
	cout << "Masukkan golongan darah Anda: " << endl;
	cout << "1.A \n2.B \n3.AB \n4.O \n";
	cout << "Pilihan (1-4): "; cin >> data_penduduk.golongan_darah;
	while (data_penduduk.golongan_darah < 1 || data_penduduk.golongan_darah > 4) {
		cout << "Pilihan tidak valid. Masukkan angka 1 - 4: ";
		cin >> data_penduduk.golongan_darah;
	}
	system("cls");
}
string namaGoldar(int kodeGoldar){
	switch (kodeGoldar) {
		case 1: return "A";
		case 2: return "B";
		case 3: return "AB";
		case 4: return "O";
		default: return "Tidak Diketahui";
	}
}
void inputAlamat(DataKTP &data_penduduk){
	cin.ignore();
	cout << "Masukkan provinsi Anda: "; 
	getline(cin, data_penduduk.alamat.provinsi);
	cout << "Masukkan kabupaten Anda: "; 
	getline(cin, data_penduduk.alamat.kabupaten);
	cout << "Masukkan alamat Anda: "; 
	getline(cin, data_penduduk.alamat.alamat_tinggal);
	cout << "Masukkan kelurahan/desa Anda: "; 
	getline(cin, data_penduduk.alamat.kelurahan);
	cout << "Masukkan kecamatan Anda: "; 
	getline(cin, data_penduduk.alamat.kecamatan);
	cout << "Masukkan RT anda: "; cin >> data_penduduk.alamat.rt;
	cout << "Masukkan RW anda: "; cin >> data_penduduk.alamat.rw;
	system("cls");
}
void inputAgama(DataKTP &data_penduduk){
	cout << "Masukkan agama Anda: " << endl;
	cout << "1. Islam\n";
	cout << "2. Kristen\n";
	cout << "3. Katolik\n";
	cout << "4. Hindu\n";
	cout << "5. Buddha\n";
	cout << "6. Konghucu\n";
	cout << "Pilihan (1-6): "; cin >> data_penduduk.agama;
	while (data_penduduk.agama < 1 || data_penduduk.agama > 6) {
		cout << "Pilihan tidak valid. Masukkan angka 1-6: ";
		cin >> data_penduduk.agama;
	}
	system("cls");
}
string namaAgama(int kodeAgama){
	switch (kodeAgama) {
		case 1: return "Islam";
		case 2: return "Kristen";
		case 3: return "Katolik";
		case 4: return "Hindu";
		case 5: return "Buddha";
		case 6: return "Konghucu";
		default: return "Tidak Diketahui";
	}
}
void inputStatus(DataKTP &data_penduduk){
	cout << "Masukkan status perkawinan Anda: " << endl;
	cout << "1. Belum Kawin\n";
	cout << "2. Kawin\n";
	cout << "3. Cerai Hidup\n";
	cout << "4. Cerai Mati\n";
	cout << "Pilihan (1-4): "; cin >> data_penduduk.status_perkawinan;
	while (data_penduduk.status_perkawinan < 1 || data_penduduk.status_perkawinan > 4) {
		cout << "Pilihan tidak valid. Masukkan angka 1-4: ";
		cin >> data_penduduk.status_perkawinan;
	}
	system("cls");
}
string namaStatus(int kodeStatus){
	switch (kodeStatus) {
		case 1: return "Belum Kawin";
		case 2: return "Kawin";
		case 3: return "Cerai Hidup";
		case 4: return "Cerai Mati";
		default: return "Tidak Diketahui";
	}
}
void inputPekerjaan(DataKTP &data_penduduk){
	cout << "Maasukkan pekerjaan Anda: "; cin.ignore();
	getline(cin, data_penduduk.pekerjaan);
	system("cls");
}
void TampilkanKTP(DataKTP &data_penduduk){
	
	cout << "\t\t\t PROVINSI " << data_penduduk.alamat.provinsi << endl;
	cout << "\t\t\t KABUPATEN " << data_penduduk.alamat.kabupaten << endl;
	cout << "\nNIK \t\t\t: " << data_penduduk.nik<<endl;
	cout << "Nama \t\t\t: " << data_penduduk.nama<<endl;
	cout << "Tempat/Tgl Lahir \t: " << data_penduduk.ttl.tempat_lahir<<", "<<data_penduduk.ttl.tanggal<<"-"<<data_penduduk.ttl.bulan<<"-"<<data_penduduk.ttl.tahun<<endl;
	cout << "Jenis Kelamin \t\t: " << (data_penduduk.kelamin ? "Perempuan" : "Laki-laki");
	cout << "\t\t Gol. Darah \t: " << namaGoldar(data_penduduk.golongan_darah) << endl;
	cout << "Alamat \t\t\t: " << data_penduduk.alamat.alamat_tinggal << endl;
	cout << "\tRT/RW \t\t: " << data_penduduk.alamat.rt << "/" << data_penduduk.alamat.rw << endl;
	cout << "\tKel/Desa \t: " << data_penduduk.alamat.kelurahan << endl;
	cout << "\tKecamatan \t: " << data_penduduk.alamat.kecamatan << endl;
	cout << "Agama \t\t\t: " << namaAgama(data_penduduk.agama) << endl;
	cout << "Status Perkawinan \t: " << namaStatus(data_penduduk.status_perkawinan) << endl;
	cout << "Pekerjaan \t\t: " << data_penduduk.pekerjaan << endl;
	cout << "Kewarganegaraan \t: " << data_penduduk.kewarganegaraan << endl;
	cout << "Berlaku Hingga \t\t: " << data_penduduk.masa_berlaku << endl;
}


int main(){
	
	DataKTP penduduk;
	inputNIK(penduduk);
	inputNama(penduduk);
	inputTTL(penduduk);
	inputJK(penduduk);
	inputGoldar(penduduk);
	inputAlamat(penduduk);
	inputAgama(penduduk);
	inputStatus(penduduk);
	inputPekerjaan(penduduk);
	TampilkanKTP(penduduk);
}
