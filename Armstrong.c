#include <stdio.h>

void armstrong(void);

int main(void){
	
	armstrong();	//Fonksiyon �a��r�c�
	
	return 0;
}

void armstrong(void){
	
	int sayi, sayac=0, temps, sum=0,bas,us,tempsayac;		//Variables
	
	printf("Bir sayi giriniz: ");			//Girdi
	scanf("%d",&sayi);
	
	temps=sayi;
	
	while(temps>0){			//Basamak Bulucu
		temps=temps/10;		//Basamak her seferinde 1 azal�r
		sayac++;			//Sayac tersi �ekilde artar
	}
	
	temps=sayi;
	
	while(temps>0){	
		bas=temps%10;		//O anki basamak
		tempsayac=sayac;	//Basamak say�s�n� her seferinde ba�a d�nd�r�r
		us=1;				//�s de�erini s�f�rlar (�arpmada 1)
		while(tempsayac>0){		//Basamak Say�s� Kadar Basama�� kendiyle �arpma (�s alma)
			us*=bas;
			tempsayac--;
		}
		sum+=us;				//�ss� al�nm�� ifade toplan�r
		temps=temps/10;			//Sonraki basama�a ge�ilir.
	}
	
	if(sum==sayi){				//E�itlik sa�lan�rsa olumlu, sa�lanmazsa olumsuz gerid�n�� sa�lan�r.
		printf("%d sayisi bir armstrong sayisidir.",sayi);
	}
	else{
		printf("%d sayisi bir armstrong sayisi degildir.",sayi);
	}
	
}
