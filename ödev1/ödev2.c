#include <stdio.h>

int main(){
	//5 sayý alýp en küçük sayýyý bul.
	printf("5 tane sayi giriniz :\n");
	int sayi1,sayi2,sayi3,sayi4,sayi5;
	scanf("%d %d %d %d %d",&sayi1,&sayi2,&sayi3,&sayi4,&sayi5);
	int enKucuk = sayi1;
	if(enKucuk>sayi2){
		enKucuk=sayi2;
	}
	if(enKucuk>sayi3){
		enKucuk=sayi3;
	}
	if(enKucuk>sayi4){
		enKucuk=sayi4;
	}
	if(enKucuk>sayi5){
		enKucuk=sayi5;
	}
	
	printf("en kucuk sayi : %d",enKucuk);
	
	
	
}
