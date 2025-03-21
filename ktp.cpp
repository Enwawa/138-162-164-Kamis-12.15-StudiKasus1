#include <iostream>
#include <string>
using namespace std;

struct bio {
	string nik;
    	string prov;
    	string kab;
    	string nama;
    	string tempat_lahir;
    	string tgl_lahir;
    	string jenis_kelamin;
    	string goldar;
    	string alamat;
    	string rt;
    	string rw;
    	string kelurahan;
    	string kecamatan;
    	string agama;
    	string status_perkawinan;
    	string pekerjaan;
    	string kewarganegaraan;
};

int main () {
	bio data;
	
	cout<<"Masukkan NIK Anda: ";
	getline(cin, data.nik);
	
	cout<<"Masukkan Provinsi Anda: ";
	getline(cin, data.prov);
	
	cout<<"Masukkan Kabupaten Anda: ";
	getline(cin, data.kab);
	
	cout<<"Masukkan Nama Anda: ";
	getline(cin, data.nama);
	
	cout<<"Masukkan Tempat Lahir Anda: ";
	getline(cin, data.tempat_lahir);
	
	cout<<"Masukkan Tanggal Lahir Anda: ";
	getline(cin, data.tgl_lahir);
	
	cout<<"Masukkan Jenis Kelamin Anda: ";
	getline(cin, data.jenis_kelamin);
	
	cout<<"Masukkan Golongan Darah Anda: ";
	getline(cin, data.goldar);
	
	cout<<"Masukkan Alamat Anda: ";
	getline(cin, data.alamat);
	
	cout<<"Masukkan RT Anda: ";
	getline(cin, data.rt);
	
	cout<<"Masukkan RW Anda: ";
	getline(cin, data.rw);
	
	cout<<"Masukkan Kelurahan Anda: ";
	getline(cin, data.kelurahan);
	
	cout<<"Masukkan Kecamatan Anda: ";
	getline(cin, data.kecamatan);
	
	cout<<"Masukkan Agama Anda: ";
	getline(cin, data.agama);
	
	cout<<"Masukkan Status Perkawinan Anda: ";
	getline(cin, data.status_perkawinan);
	
	cout<<"Masukkan Pekerjaan Anda: ";
   	getline(cin, data.pekerjaan);
	
	cout<<"Masukkan Kewarganegaraan Anda: ";
	getline(cin, data.kewarganegaraan);
	
	cout<<endl;
	
	cout << "              PROVINSI  " << data.prov << endl;
    	cout << "             KABUPATEN  " << data.kab << endl;
    	cout << endl;
    	cout << "NIK                : " << data.nik << endl;
    	cout << "Nama               : " << data.nama << endl;
    	cout << "Tempat/Tgl Lahir   : " << data.tempat_lahir<< "/"<< data.tgl_lahir << endl;
    	cout << "Jenis Kelamin      : " << data.jenis_kelamin << "            Gol. Darah: " << data.goldar << endl;
    	cout << "Alamat             : " << data.alamat << endl;
    	cout << "        RT/RW              : " << data.rt << "/" << data.rw << endl;
    	cout << "        Kel/Desa           : " << data.kelurahan << endl;
    	cout << "        Kecamatan          : " << data.kecamatan << endl;
   	cout << "Agama              : " << data.agama << endl;
    	cout << "Status Perkawinan  : " << data.status_perkawinan << endl;
    	cout << "Pekerjaan          : " << data.pekerjaan << endl;
    	cout << "Kewarganegaraan    : " << data.kewarganegaraan << endl;
    	cout << "Berlaku Hingga     : Seumur Hidup" << endl;
	
	return 0;
}
	
	
	return 0;
}
