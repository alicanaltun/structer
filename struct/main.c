#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Adres{
	int sokak;
	char mahalle[20];
	char ilce[20];
	char il[20];	
};
//adres yapisi olusturulur
struct Ogrenci{
	char ad[20];
	char soyad[20];
	int numara;
	struct Adres adres;
}ogrenci[5];
//ogrenci yapisi olusturulur ve icine adres yapisi eklenir


int main(int argc, char *argv[]) {
	int i;

	strcpy(ogrenci[1].ad,"Hazal"); 
	strcpy(ogrenci[1].soyad,"Guner");
	ogrenci[1].numara = 107;
	ogrenci[1].adres.sokak = 225;
	strcpy(ogrenci[1].adres.mahalle,"Odabasi");
	strcpy(ogrenci[1].adres.ilce,"Antakya");
	strcpy(ogrenci[1].adres.il,"Hatay");
	
	strcpy(ogrenci[2].ad,"Yavuz"); 
	strcpy(ogrenci[2].soyad,"Canbaz");
	ogrenci[2].numara = 58;
	ogrenci[2].adres.sokak = 1915;
	strcpy(ogrenci[2].adres.mahalle,"Hayrullah");
	strcpy(ogrenci[2].adres.ilce,"Onikisubat");
	strcpy(ogrenci[2].adres.il,"Kahramanmaras");
	
	strcpy(ogrenci[3].ad,"Esma"); 
	strcpy(ogrenci[3].soyad,"Sultan");
	ogrenci[3].numara = 65;
	ogrenci[3].adres.sokak = 857;
	strcpy(ogrenci[3].adres.mahalle,"Bahcelievler");
	strcpy(ogrenci[3].adres.ilce,"Nurdagi");
	strcpy(ogrenci[3].adres.il,"Gaziantep");
	
	strcpy(ogrenci[4].ad,"Ahmet Ayaz"); 
	strcpy(ogrenci[4].soyad,"Abak");
	ogrenci[4].numara = 11;
	ogrenci[4].adres.sokak = 3006;
	strcpy(ogrenci[4].adres.mahalle,"Yenisehir");
	strcpy(ogrenci[4].adres.ilce,"Haliliye");
	strcpy(ogrenci[4].adres.il,"Sanliurfa");
	
	strcpy(ogrenci[5].ad,"Aysima"); 
	strcpy(ogrenci[5].soyad,"Yilmaz");
	ogrenci[5].numara = 502;
	ogrenci[5].adres.sokak = 151;
	strcpy(ogrenci[5].adres.mahalle,"Cirikpinar");
	strcpy(ogrenci[5].adres.ilce,"Battalgazi");
	strcpy(ogrenci[5].adres.il,"Malatya");
	// ogrenci bilgileri yapiya kaydedilie
	for(i=0;i<5;i++){
		printf("%s %s %d %s Mahallesi %d. Sokak %s/%s\n",ogrenci[i+1].ad,ogrenci[i+1].soyad,ogrenci[i+1].numara,ogrenci[i+1].adres.mahalle,ogrenci[i+1].adres.sokak,ogrenci[i+1].adres.ilce,ogrenci[i+1].adres.il);
	}
	// ogrenci bilgileri bastirilir
	return 0;
}