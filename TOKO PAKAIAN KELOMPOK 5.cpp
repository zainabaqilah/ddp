//NAMA ANGGOTA KELOMPOK 5:
//	1. FITRIA AZ ZAHRA (2217051052)
//	2. NADYA MAHARANI (2217051095)
//	3. ZAINAB AQILAH (2217051149)

#include <iostream>
using namespace std;
string baju[3] = {"Hoodie", "Kaos", "Kemeja"};
string celana[3] = {"Jeans", "Kulot", "Straight Pants"};


void pesanan()
{
	cout << "Daftar baju : " << endl;
	for (int a = 0; a < 3; a++) {
		cout << "- " << baju [a] << endl;
		}
		
		cout << endl;
		
		
	cout << "Daftar celana : " << endl;
	for (int b=0; b < 3; b++){
		cout << "- " << celana [b] << endl;
		}
		
		cout << endl;
		
}

void daftar() 
{
	int p, q, r=100000, s=150000;
	cout << "Ingin Pesan Baju Apa (1-3) ? "; 
	cin >> p;
	
	cout << "Ingin Pesan Celana Apa (1-3) ? "; 
	cin >> q;
	
	cout << endl;
	
	
	switch (p) {
		case 1 :
			cout << "Pesanan Pertama : " << baju[0] << " = Rp" << r;
			break;
			
		case 2 :
			cout << "Pesanan Pertama : " << baju[1] << " = Rp" << r;
			break;
			
		case 3 :
			cout << "Pesanan Pertama : " << baju[2] << " = Rp" << r;
			break;
			
	}
	
	cout << endl;
	
	
	switch (q) {
		case 1 :
			cout << "Pesanan Kedua : " << celana[0] << " = Rp" << s;
			break;
			
		case 2 :
			cout << "Pesanan Kedua : " << celana[1] << " = Rp" << s;
			break;
			
		case 3 :
			cout << "Pesanan Kedua : " << celana[2] << " = Rp" << s;
			break;
			
	}
	
	cout << endl;
	
	cout << "\n\tTotal = Rp" << r+s;
	
}


int main(){
	char pil;
	cout << "\t==========SELAMAT DATANG DI TOKO PAKAIAN AWIKWOK==========\n";
	
	cout << "\t=======Baju Serba Rp100.000 & Celana Serba Rp150.000======\n";
	
		cout << endl;
		
		do {
			pesanan();
			daftar();
			cout << endl;
			
			cout << "\nIngin Melakukan Pemesanan Lagi? (y/n) : ";
			cin >> pil;
			
			cout << endl;
			
		}
		
		while (pil=='y' || pil=='Y');
		cout << "\n\t=====TERIMAKASIH DAN SELAMAT DATANG KEMBALI=====";
}
