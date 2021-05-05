#include<iostream>

using namespace std;

int main()
{
	int data;
	cout << "Masukkan Jumlah Data Anda = ";
	cin >> data;
	int array[data];
	
	int i;
	cout <<"Silahkan Masukkan Data ke Dalam Array" << endl;
	for(int i= 1; i <= data; i++)
	{
		cout << "Masukkan Data ke- "<< i <<" : " ;
		cin >> array[i];
	}
	
	cout << "\nIsi Data Array Adalah" << endl;
	for(int i = 1; i <= data; i++)
	{
		cout << array[i] << " ";
	}
	
	int cari;
	int posisi;
	cout << "\nSilahkan Masukkan Data Yang Ingin Dicari = ";
	cin >> cari;
	
	for(int i = 1; i <= data; i++)
	{
		if (cari == array[i] )
		{
			posisi = i;				
		}	
	
	}
		if (posisi == -1)
		{
			cout <<"Data tidak ditemukan"<<endl;
		}
		else{
			cout <<"Data "<< cari <<" ditemukan"<<endl;
			cout <<"Pada posisi ke-"<<posisi<<endl;
			
		}
		
}
