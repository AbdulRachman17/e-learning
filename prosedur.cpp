// PROGRAM PENJUALAN

#include<iostream>

using namespace std;


void penjualan(float a, float b) {
		float total;
		total = a*b;
		cout<< "harga akhir barang :" << total << endl;
		}
		
// PROGRAM UTAMA

int main(){
		float harga, jumlah;
		float total;
		cout<< "=============================" << endl;
		cout<< "=PROGRAM HITUNG HARGA BARANG=" << endl;
		cout<< "=============================" << endl;
		cout<< "Masukan Harga Barang : ";
		cin>> harga;
		cout<< "Masukan Jumlah Barang : ";
		cin>> jumlah;

		cout<< "\n";
		penjualan(harga, jumlah);
		return(0);
		}
		
		