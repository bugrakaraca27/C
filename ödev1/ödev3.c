#include <stdio.h>

int main(){
	//3 basamaklý sayýnýn basamak deðerlerini bulma.
	printf("3 basamakli bir sayi giriniz :");
	int sayi,yuzlerB,onlarB,birlerB;
	scanf("%d",&sayi);
	yuzlerB = sayi/100;
	sayi = sayi-yuzlerB*100;
	onlarB = sayi/10;
	sayi = sayi-onlarB*10;
	birlerB = sayi;
	printf("birler basamagi : %d\n",birlerB);
	printf("onlar basamagi : %d\n",onlarB);
	printf("yuzler basamagi : %d\n",yuzlerB);
	
	
}
