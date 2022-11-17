#include <iostream>
#include <string>

using namespace std; 

class Hesap {
	private : 
	int sayi; 
	int sayac; 
	bool sonuc; 
	string devammi; 
	public: 
	void menu(); 
	bool asalMi(int ); 
	void sonrakiBes(); 	
};

void Hesap:: menu()
{
	
	
	while( true  ) 
	{
	  
	
	cout<<"Asal sayi uygulamasi "<< endl; 
	cout<<"sayi giriniz : "; cin>>sayi; 
	if( asalMi(sayi ) ) 
	cout<<sayi << " asal "<< endl; 
	else 
	cout<<sayi << " asal degil "<< endl; 
	
	cout<<"sonraki 5 asal sayi : "<< endl; 
	sonrakiBes(); 
	
	cout<<"devam etmek istermisiniz [E/H] : "; cin>>devammi; 
	if( devammi == "e" || devammi == "E") 
		system("cls") ; 
	else
	{
		cout<<"Uygulamayi bitirdiniz..."<< endl ; 
		break; 	
	}		
   }
 } 
bool Hesap:: asalMi(int s )
{
	sonuc= true; 
	for( int i=2; i<s; i++  ) 
	{
		if( s%i==0 ) 
		{
			sonuc= false; 
			break; 
		}
	}
	
	return sonuc; 
	
 } 
void Hesap::  sonrakiBes()
{
	sayac=0; 
	int temp= sayi; 
	
	while( sayac != 5 ) 
	{
		temp++; 
		if( asalMi(temp ))
		{
			sayac++; 
			cout<<sayac << " . asal sayi : "<< temp<< endl; 
		} 
	}
	
	sayac= 0; 
		
 } 	


int main(int argc, char** argv) {
	
	Hesap nes; 
	nes.menu() ; 
	
	
	
	return 0;
}
