#include <stdio.h>
main(){
	//Girilen 2 say�n�n toplam�n� ve �arp�m�n� bulan program� yaz�n�z.
//	int sayi,sayi2;
//	scanf("%d",&sayi);
//	scanf("%d",&sayi2);
//	int toplam,carp;
//	toplam=sayi+sayi2;
//	carp=sayi*sayi2;
//	printf("sayinin toplami %d \nsayinin karesi %d",toplam,carp);
	
	//y= 3x^2 fonksiyonunda verilen x de�erine g�re y de�erini bulunuz. (�rnek: x=2 ise y=12 olmal�d�r.)
//
//	int x,y;
//	scanf("%d",&x);
//	y=3*(x*x);
//	printf("%d",y);
//

	//K�sa ve uzun kenar� girilen dikd�rtgenin alan�n� ve �evresini  hesaplayan program�n algoritmas�n� olu�turunuz.

//	int kisa,uzun,alan,cevre;
//	scanf("%d",&kisa);
//	scanf("%d",&uzun);
//	
//	cevre=(kisa+uzun)*2;
//	alan=kisa*uzun;
//	printf("cevre %d \nalan %d",cevre,alan);


	//Yar��ap� verilen dairenin alan�n� hesaplayan algoritmay� yaz�n�z. (pi = 3.14)
	
//	float yaricap,pi;
//	pi=3.14;
//	scanf("%f",&yaricap);
//	float alan;
//	alan=2*pi*yaricap*yaricap;
//	printf("alan %f",alan);

	//Fiyat ve kdv oran� girilen �r�n�n toplam fiyat�n� ekrana yazd�ran algoritmay� yaz�n�z?

//	int fiyat,kdv;
//	printf("urunun fiyati gir : ");
//	scanf("%d",&fiyat);
//	printf("urunun kdv gir : ");
//	scanf("%d",&kdv);
//
//	fiyat=fiyat+fiyat*kdv/100;
//	
//	printf("yeni fiyat : %d",fiyat);

	//Verilen 3 say�n�n ortalamas�n� bulunuz.
	
//	int a=5,b=10,c=21;	
//	int ort;
//	ort=(a+b+c)/3;
//	printf("ortalama : %d",ort);
	
	//Girilen g�n say�s�n� Y�l, Hafta ve G�n�e �evirerek yaz�n�z.
	
//	int gun,yil,ay;
//	printf("gun sayisi gir : ");
//	scanf("%d",&gun);
//	
//	yil=gun/365;
//	gun=gun%365;
//	ay=gun/30;
//	gun=gun%30;
//
//	printf("%d yil\n%d ay\n%d gun ",yil,ay,gun);

	//Klavyeden girilen �� farkl� tam say�n�n toplam�n� sadece 2 de�i�ken kullanarak ger�ekle�tiren program� yaz�n�z. 
	//(De�i�kenler: int toplam, sayi; �eklinde. Ba�ka de�i�ken kullan�lmayacakt�r.)

//	int sayi,toplam=0;
//	printf("sayi giriniz : \n");
//	scanf("%d",&sayi);
//	toplam+=sayi;
//	printf("sayi giriniz : \n");
//	scanf("%d",&sayi);
//	toplam+=sayi;
//	printf("sayi giriniz : \n");
//	scanf("%d",&sayi);
//	toplam+=sayi;
//	printf("toplam : %d",toplam);

	//A ve B tamsay� de�i�kenlerinin de�erlerini yer de�i�tiren algoritma(A=3 B=5 girildikten sonra A=5 B=3 olarak yer de�i�meli)

//	int a,b,c;
//	
//	printf("a sayisini giriniz ");
//	scanf("%d",&a);
//	
//	printf("b sayisini giriniz ");
//	scanf("%d",&b);
//	
//	c=a;
//	a=b;
//	b=c;
//	printf("a sayisi %d\nb sayisi %d",a,b);

	//Haftan�n G�nleri: 1-7 aras� girilen de�ere g�re g�nleri yazd�r�n�z.(if-else, switch-case)

//	int i,sayi;
//
//	for(i=0;sayi!=0;i++){
//	printf("sayi giriniz ");
//	scanf("%d",&sayi);
//	if(sayi==1){
//	printf("pazartesi\n");
//	}
//	else if(sayi==2){
//	printf("sali\n");
//	}
//	else if(sayi==3){
//	printf("carsamba\n");
//	}
//	else if(sayi==4){
//	printf("persembe\n");
//	}
//	else if(sayi==5){
//	printf("cuma\n");
//	}
//	else if(sayi==6){
//	printf("cumartesi\n");
//	}
//	else if(sayi==7){
//	printf("pazar\n");
//	}
//	else if(sayi==0){
//	printf("cikis yapildi");
//	break;
//	}
//	else
//	printf("1-7 arasi gir\n");	
//}

	//Girilen N adet say�n�n ortalamas�n� bulan algoritma

//	int i,n,ort,sayi,toplam;
//	printf("n giriniz ");
//    scanf("%d",&n);
//	
//	for(i=0;i<n;i++){
//		printf("sayi giriniz \n");
//		scanf("%d",&sayi);
//		toplam+=sayi;
//	}
//	ort=toplam/n;
//	printf("ortalama %d",ort);

	//Girilen say�y� tersten yazd�ran(tamsay� olarak) program(245 => 542).

//	int i,sayi,ters;
//	printf("sayi giriniz ");
//	scanf("%d",&sayi);
//	for(;sayi>0;){
//		ters=sayi%10;
//		printf("%d",ters);
//		sayi=sayi/10;
//	}

	//Palindrom say� kontrol�(�r:242 palindromdur, tersten yaz�l��� kendisine e�ittir)

//	int i,sayi,ters=0,a,b;
//	printf("sayi giriniz ");
//	scanf("%d",&sayi);
//	a=sayi;
//	for(;sayi>0;){                 
//		b=sayi%10;
//		ters=(ters*10)+b;
//		sayi=sayi/10;
//	}	
//	if(a==ters)
//	printf("palindrom sayidir");	

	//Girilen say�n�n fakt�riyelini hesaplayan program?

//	int fakt=1,i,sayi;
//	
//	printf("sayi giriniz : ");
//	scanf("%d",&sayi);
//	
//	for(i=1;i<=sayi;i++){
//		fakt*=i;
//	}
//	printf("sayinin faktoriyeli : %d",fakt);
	
	//Girilen n de�erine g�re Fibonacci serisinin ( 0 1 1 2 3 5 8 � ) ilk n terimini hesaplay�n�z?

//	int a=0,b=1,c=0,i,n;
//	printf("sayi giriniz : ");
//	scanf("%d",&n);
//
//	for(i=0;i<n;i++){
//		printf("%d ",a);
//		printf("%d ",b);
//		c=a+b;
//		printf("%d ",c);
//		a=b+c;
//		b=a+c;
//	}


	//Fibonacci serisini dizi kullanarak olu�turunuz.
	
//	int dizi[5];
//	
//	int i,a=1,b=1;
//	printf("0 ");
//	for(i=0;i<5;i++){
//		printf("%d ",a);
//		printf("%d ",b);
//		a+=b;
//		b+=a;
//		
//	}


	//Bir dizinin elemanlar�n� ba�ka bir diziye kopyalay�p yazd�r�n�z.
	
//	int dizi[3]= {1,2,3};
//	int rakam[3];
//	rakam[1]=dizi[2];
//	rakam[2]=dizi[1];	
//	rakam[0]=dizi[0];
//	int i;
//	for(i=0;i<3;i++){
//		printf("%d\n",rakam[i]);
//	}
//	for(i=0;i<3;i++){
//		printf("---%d\n",dizi[i]);
//	}
//	
	
	//Girilen kelimenin palindrom olup olmad���n� bulunuz.
	
//	char dizi[100];
//	printf("kelime gir :\n");
//	gets(dizi);
//	int boyut=0,i,j=0;
//	int kontrol=0;
//	for(j=0;dizi[j]!='\0';j++){
//		boyut++;
//	}
//	for(i=0;i<boyut;i++){
//		if(dizi[i]==dizi[boyut-i-1]){
//			kontrol=1;
//		}
//	}
//	if(kontrol==0)
//	printf("palindrom degil");
//	if(kontrol==1)
//	printf("palindromik");

	//Girilen say�n�n Jumbled (kom�u rakamlar aras�ndaki fark maksimum 1) olup olmad���n� bulunuz.(12, 45, 656, 3432,... )
	
//	int sayi,i,a,b,c;
//	
//	printf("sayi gir : ");
//	scanf("%d",&sayi);
//	a=sayi%10;
//	b=(sayi/10)%10;
//	c=sayi/100;
//	
//	for(i=0;i<sayi;i++){
//		if(a-b==1 || b-a==1 && b-c==1 || c-b==1){
//			printf("jumbled sayidir");
//			break;
//		}
//		else{
//		printf("degildir.");
//		break;
//		}

	//onluk tabanda verilen bir say�y� ikilik tabana �eviren algoritmay� yaz�n�z
	//�kilik tabanda verilen bir say�y� onluk tabana �eviren algoritmay� yaz�n�z
	
	
	
	
	
	
//	Girilen N de�erine g�re 1-N aras�ndaki t�m say�lar�n fakt�riyelini bulan program� yaz�n�z.(Ekran ��kt�s�: 1!=1, 2!=2, 3!=6�)
//	int n;
//	printf("n degeri giriniz : ");
//	scanf("%d",&n);
//	int i,j,fakt=1;
//	
//	for(i=1;i<n;i++){
//		for(j=1;j<=i;j++){
//			fakt*=j;	
//		}
//	printf("%d.sayinin fak : %d\n",i,fakt);
//	fakt=1;	
//	}
//	
	
	//Girilen N de�erine g�re 1-N aras�ndaki t�m Asal say�lar� yazd�r�n�z.
//
//	int n;
//	printf("n degeri giriniz : ");
//	scanf("%d",&n);
//	int	kontrol;	
//	int i,j;
//	
//	for(i=1;i<=n;i++){
//		kontrol=0;
//		for(j=2;j<=i/2;j++){
//			if(i%j==0){
//				kontrol++;
//				break;
//			}
//		}
//		if(kontrol==0 && i!=1){
//		printf("%d\n",i);
//	}
//	}


	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	






	
}
