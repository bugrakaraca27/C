#include <stdio.h>

int main(){
	//klavyeden 2 say� giri�i al b�y�k olan�n k����e b�l�n�p b�l�nmedi�ini bul.
	
	int sayi1,sayi2;
	printf("2 sayi giriniz.\n");
	scanf("%d %d",&sayi1,&sayi2);
	if(sayi1==0 || sayi2==0){
		printf("gecersiz deger girdiniz.");
		return(0);
	}
	if(sayi1%sayi2 == 0){
		printf("sayi tam bolunmektedir.");
	}
	else{
		printf("sayi tam bolunmemektedir.");
		
	}
	}
	
	
	
	
	
	
	
	
	
