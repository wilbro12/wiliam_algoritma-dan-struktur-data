#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <iomanip>
#include <string.h>
using namespace std;

int main (){
	
	int f, j, ulangi;
	char jenis[6] = {'D','d','P','p','S','s'} ,*ket[6];
	long banyak[6], jumlahharga[6] = {0}, hargasatuan[6] = {2500 ,2000 ,1500};
	long jumlahbarang[6]= {0}, pajak[6], totalbarang[6];
	
	pesan:
	jumlahbarang[f] = 0;
	cout << "\tGEROBAK FRIED CHICKEN" << endl;
	cout << "\t---------------------" << endl;
	cout << "\t Kode Jenis Harga" << endl;
	cout << "\t---------------------" << endl;
	cout << "\t [D] Dada  Rp. 2500" << endl;
	cout << "\t [P] Paha  Rp. 2000" << endl;
	cout << "\t [S] Sayap Rp. 1500" << endl << endl;
	cout << "\t---------------------" << endl << endl;
	cout << "\tBanyak Jenis : ";
	cin >> f;
	
	if (f <= 0){
		cout << "\n\t\tBanyak Jenis Tidak Boleh Null";
		goto akhir;
   }
   
   else{
        for(j = 1 ; j <= f; ++j)
       {
       	
    cout << "\tJenis Ke - " << j;
    cout << "\n\tJenis Potong [D/P/S] : ";
	cin >> jenis[j];
    cout << "\tBanyak Potongan : ";
	cin >> banyak[j];
    cout << "\t------------------------\n";
    
	if (jenis[j] == 'D' || jenis[j] == 'd'){
        ket[j] = "Dada ";
        hargasatuan[j] = 2500;
        }
        else if (jenis[j] == 'P' || jenis[j] == 'p'){
            ket[j] = "Paha ";
            hargasatuan[j] = 2000;
            }
           	else if (jenis[j] == 'S' || jenis[j] == 's'){
            ket[j] = "Sayap";
            hargasatuan[j] = 1500;
            }
    else{
    cout << "\nAnda Salah Masukan Kode Jenis Potongan.";
    hargasatuan[j] = 0;
    }
    
    jumlahharga [j] = hargasatuan[j] * banyak[j];
    jumlahbarang [f] = jumlahbarang[f] + hargasatuan[j] * banyak[j];
    
	if (jumlahbarang [f] == 0){
        pajak[f] = 0;
        totalbarang[f] = 0;
        }
        
    else{
    	pajak[f] = jumlahbarang[f] * 0.1;
        totalbarang[f] = jumlahbarang[f] + pajak[f];
        }
        
      }
   }
   
	cout << "\n\n\tGEROBAK FRIED CHICKEN\n";
	cout << "------------------------------------------------\n";
	cout << "No.| Jenis     | Harga     | Banyak | Jumlah\n";
	cout << "   | Potong    | Satuan    | Beli   | Harga\n";
	cout << "================================================\n";
	
    for (j = 1; j <= f; ++j){
    cout << " " << j << " | " << ket[j]<<"     | " << hargasatuan[j];
   	cout << "      | " << banyak[j]<<"      | Rp. "<< jumlahharga[j] << endl;
    }
    
	cout << "------------------------------------------------\n";
	cout << "\t\t\tJumlah Bayar  Rp. " << jumlahbarang[f] << endl;
	cout << "\t\t\tPajak 10%     Rp. " << pajak[f] << endl;
	cout << "\t\t\tTotal Bayar   Rp. " << totalbarang[f];
	cout << "\n\n\n\tAnda Ingin Memesan Lagi? [Y/T] = ";
	
	ulangi = getche();
	
    if (ulangi == 'Y' || ulangi == 'y'){
    	goto pesan;
	}
       
   	else{
   		cout << "\n\n\t\tTerima Kasih";
	   }
       
	akhir:
		
getchar();
}
