#include <stdio.h>

int main(){
	//uzun k�sa kenar al i�lem numaras�na g�re alan ve �evre hesapla.
	int uzunKenar,kisaKenar,cevre,alan,islemNo;
	printf("kisa kenari giriniz :");
	scanf("%d",&kisaKenar);
	printf("uzun kenari giriniz :");
	scanf("%d",&uzunKenar);
	alan = uzunKenar*kisaKenar;
	cevre = 2*(kisaKenar+uzunKenar);
	
	printf("Cevresini hesaplamak icin 1'e basiniz.\nAlanini hesaplamak icin 2'ye basiniz.");
	scanf("%d",&islemNo);
	if(islemNo==1){
		printf("%d",cevre);
	}
	if(islemNo==2){
		printf("%d",alan);
	}
}
