#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

struct KTP {
	string nik;
	string nama;
	string tempatTglLahir;
	string jenisKelamin;
	string golDarah;
	string alamat;
	string rt_rw;
	string kel_desa;
	string kecamatan;
	string agama;
	string perkawinan;
	string pekerjaan;
	string kewarganegaraan;
	string berlaku_hingga;
};

void inputKTP(KTP &ktp){
	cout << "Masukan NIK: ";
	getline(cin, ktp.nik);
	cout << "Masukan Nama: ";
	getline(cin, ktp.nama);
	cout << "Masukan Tempat/Tgl Lahir: ";
	getline(cin, ktp.tempatTglLahir);
	cout << "Masukan Jenis Kelamin: ";
	getline(cin, ktp.jenisKelamin);
	cout << "Masukan Golongan Darah: ";
	getline(cin, ktp.golDarah);
	cout << "Masukan Alamat: ";
	getline(cin, ktp.alamat);
	cout << "Masukan RT/RW: ";
	getline(cin, ktp.rt_rw);
	cout << "Masukan Kelurahan/Desa: ";
	getline(cin, ktp.kel_desa);
	cout << "Masukan Kecamatan: ";
	getline(cin, ktp.kecamatan);
	cout << "Masukan Agama: ";
	getline(cin, ktp.agama);
	cout << "Masukan Status Perkawinan: ";
	getline(cin, ktp.perkawinan);
	cout << "Masukan Pekerjaan: ";
	getline(cin, ktp.pekerjaan);
	cout << "Masukan Kewarganegaraan: ";
	getline(cin, ktp.kewarganegaraan);
	cout << "Masukan Berlaku Hingga: ";
	getline(cin, ktp.berlaku_hingga);	
}

void displayKTP(const KTP &ktp){
	cout << "\n================SIMULASI KTP==================\n";
	cout << left << setw(20) << "NIK"<<": "<<ktp.nik<<endl;
	cout << left << setw(20) << "Nama"<<": "<<ktp.nama<<endl;
	cout << left << setw(20) << "Tempat/Tgl Lahir"<<": "<<ktp.tempatTglLahir<<endl;
	cout << left << setw(20) << "Jenis Kelamin"<<": "<<ktp.jenisKelamin<<endl;
	cout << left << setw(20) << "Golongan Darah"<<": "<<ktp.golDarah<<endl;
	cout << left << setw(20) << "Alamat"<<": "<<ktp.alamat<<endl;
	cout << left << setw(20) << "RT/RW"<<": "<<ktp.rt_rw<<endl;
	cout << left << setw(20) << "Kelurahan/Desa"<<": "<<ktp.kel_desa<<endl;
	cout << left << setw(20) << "Kecamatan"<<": "<<ktp.kecamatan<<endl;
	cout << left << setw(20) << "Agama"<<": "<<ktp.agama<<endl;
	cout << left << setw(20) << "Status Perkawinan"<<": "<<ktp.perkawinan<<endl;
	cout << left << setw(20) << "Pekerjaan"<<": "<<ktp.pekerjaan<<endl;
	cout << left << setw(20) << "Kewarganegaraan"<<": "<<ktp.kewarganegaraan<<endl;
	cout << left << setw(20) << "Berlaku Hingga"<<": "<<ktp.berlaku_hingga<<endl;
	cout << "=================================================";
}

int main(){
	KTP ktp;
	
	cout <<"input Data KTP\n";
	inputKTP(ktp);
	
	displayKTP(ktp);
	
	return 0;
}
