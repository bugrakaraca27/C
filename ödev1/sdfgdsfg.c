#include <stdio.h>
main(){
	//Girilen 2 sayýnýn toplamýný ve çarpýmýný bulan programý yazýnýz.
//	int sayi,sayi2;
//	scanf("%d",&sayi);
//	scanf("%d",&sayi2);
//	int toplam,carp;
//	toplam=sayi+sayi2;
//	carp=sayi*sayi2;
//	printf("sayinin toplami %d \nsayinin karesi %d",toplam,carp);
	
	//y= 3x^2 fonksiyonunda verilen x deðerine göre y deðerini bulunuz. (Örnek: x=2 ise y=12 olmalýdýr.)
//
//	int x,y;
//	scanf("%d",&x);
//	y=3*(x*x);
//	printf("%d",y);
//

	//Kýsa ve uzun kenarý girilen dikdörtgenin alanýný ve çevresini  hesaplayan programýn algoritmasýný oluþturunuz.

//	int kisa,uzun,alan,cevre;
//	scanf("%d",&kisa);
//	scanf("%d",&uzun);
//	
//	cevre=(kisa+uzun)*2;
//	alan=kisa*uzun;
//	printf("cevre %d \nalan %d",cevre,alan);


	//Yarýçapý verilen dairenin alanýný hesaplayan algoritmayý yazýnýz. (pi = 3.14)
	
//	float yaricap,pi;
//	pi=3.14;
//	scanf("%f",&yaricap);
//	float alan;
//	alan=2*pi*yaricap*yaricap;
//	printf("alan %f",alan);

	//Fiyat ve kdv oraný girilen ürünün toplam fiyatýný ekrana yazdýran algoritmayý yazýnýz?

//	int fiyat,kdv;
//	printf("urunun fiyati gir : ");
//	scanf("%d",&fiyat);
//	printf("urunun kdv gir : ");
//	scanf("%d",&kdv);
//
//	fiyat=fiyat+fiyat*kdv/100;
//	
//	printf("yeni fiyat : %d",fiyat);

	//Verilen 3 sayýnýn ortalamasýný bulunuz.
	
//	int a=5,b=10,c=21;	
//	int ort;
//	ort=(a+b+c)/3;
//	printf("ortalama : %d",ort);
	
	//Girilen gün sayýsýný Yýl, Hafta ve Gün’e çevirerek yazýnýz.
	
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

	//Klavyeden girilen üç farklý tam sayýnýn toplamýný sadece 2 deðiþken kullanarak gerçekleþtiren programý yazýnýz. 
	//(Deðiþkenler: int toplam, sayi; þeklinde. Baþka deðiþken kullanýlmayacaktýr.)

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

	//A ve B tamsayý deðiþkenlerinin deðerlerini yer deðiþtiren algoritma(A=3 B=5 girildikten sonra A=5 B=3 olarak yer deðiþmeli)

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

	//Haftanýn Günleri: 1-7 arasý girilen deðere göre günleri yazdýrýnýz.(if-else, switch-case)

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

	//Girilen N adet sayýnýn ortalamasýný bulan algoritma

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

	//Girilen sayýyý tersten yazdýran(tamsayý olarak) program(245 => 542).

//	int i,sayi,ters;
//	printf("sayi giriniz ");
//	scanf("%d",&sayi);
//	for(;sayi>0;){
//		ters=sayi%10;
//		printf("%d",ters);
//		sayi=sayi/10;
//	}

	//Palindrom sayý kontrolü(Ör:242 palindromdur, tersten yazýlýþý kendisine eþittir)

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

	//Girilen sayýnýn faktöriyelini hesaplayan program?

//	int fakt=1,i,sayi;
//	
//	printf("sayi giriniz : ");
//	scanf("%d",&sayi);
//	
//	for(i=1;i<=sayi;i++){
//		fakt*=i;
//	}
//	printf("sayinin faktoriyeli : %d",fakt);
	
	//Girilen n deðerine göre Fibonacci serisinin ( 0 1 1 2 3 5 8 … ) ilk n terimini hesaplayýnýz?

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


	//Fibonacci serisini dizi kullanarak oluþturunuz.
	
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


	//Bir dizinin elemanlarýný baþka bir diziye kopyalayýp yazdýrýnýz.
	
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
	
	//Girilen kelimenin palindrom olup olmadýðýný bulunuz.
	
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

	//Girilen sayýnýn Jumbled (komþu rakamlar arasýndaki fark maksimum 1) olup olmadýðýný bulunuz.(12, 45, 656, 3432,... )
	
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

	//onluk tabanda verilen bir sayýyý ikilik tabana çeviren algoritmayý yazýnýz
	//Ýkilik tabanda verilen bir sayýyý onluk tabana çeviren algoritmayý yazýnýz
	
	
	
	
	
	
//	Girilen N deðerine göre 1-N arasýndaki tüm sayýlarýn faktöriyelini bulan programý yazýnýz.(Ekran çýktýsý: 1!=1, 2!=2, 3!=6…)
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
	
	//Girilen N deðerine göre 1-N arasýndaki tüm Asal sayýlarý yazdýrýnýz.
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
