#include <stdio.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int sekiller;
	int fonksiyonlar;
	int islem;
	int sayi1,sayi2;
	int pi=3.14;
	int yaricap;
	int alan;
	int cevre;
	int taban;
	int yuseklik;
	int kenar1;
	int kenar2;
	int kisakenar;
	int uzunkenar;
	int sicaklik;
	float fahreneit;
	float kelvin;
	
	printf("LUTFEN BIR FONKSIYON SECINIZ\n");
	printf("1.HESAP MAKINASI\n");
	printf("2.SEKILLERIN CEVRE VE ALAN HESAPLAYICISI\n");
	printf("3.SICAKLIK CEVIRICI\n");
	printf("lutfen yukaridaki İslemlerden birini seciniz\n");
	scanf("%d",&fonksiyonlar);
	
	switch(fonksiyonlar){

	case 1:
	printf("hesap makinasi fonksiyonuna giris yaptiniz\n");
	printf("\n1.Toplama\n");	
	printf("2.Carma\n");
		printf("\nislemi seciniz:");
    scanf("%d",&islem);	
	switch(islem){	
        case 1:
    printf("toplama islemini sectiniz\n");    	
    printf("1.Sayiyi giriniz:\n");
    scanf("%d",&sayi1);
    printf("2.Sayiyi giriniz:\n ");
    scanf("%d",&sayi2);
    islem=sayi1+sayi2;
    printf("Toplama isleminin sonucu : %d\n\n\n",islem);
    
    break;
        case 2:
    printf("carpma islemini sectiniz\n");    	
    printf("1.Sayiyi giriniz:\n");
    scanf("%d",&sayi1);
    printf("2.Sayiyi giriniz: \n");
    scanf("%d",&sayi2);
    islem=sayi1*sayi2;
            printf("Carpma isleminin sonucu : %d\n\n\n",islem);
        break;
        default:
            printf("Lutfen gecerli bir sayi giriniz.\n\n");
		break;
    }
    
    printf("LUTFEN BIR FONKSIYON SECINIZ\n");
	printf("1.HESAP MAKINASI\n");
	printf("2.SEKILLERIN CEVRE VE ALAN HESAPLAYICISI\n");
	printf("3.SICAKLIK CEVIRICI\n");
	printf("lutfen yukaridaki sayilardan birini seciniz\n");
	scanf("%d",&fonksiyonlar);

    //break;
	case 2:
	printf("sekiller fonksiyonunu sectiniz\n");
	printf("1.DAIRE\n");
	printf("2.UCGEN\n");
	printf("3.DIKDORTGEN\n");
	printf("lutfen bir sekil seciniz\n");
	scanf("%d",&sekiller);
    switch(sekiller){
    case 1:
	printf("daireyi sectiniz\n");
	printf("lutfen yaricap degerini giriniz\n");	
	scanf("%d",&yaricap);
    alan=pi*yaricap*yaricap;
    printf("dairenin alani:%d\n\n",alan);
    cevre=2*pi*yaricap;
    printf("dairenin cevresi:%d\n\n",cevre);
    break;
    case 2:
    printf("ucgeni sectiniz\n");
	printf("lutfen yukseklik degerini giriniz\n");
	scanf("%d",&yuseklik);
	printf("lutfen taban degerini giriniz\n");
	scanf("%d",&taban);
	alan=taban*yuseklik/2;
	printf("ucgenin alanı:%d\n\n",alan);
	printf("lutfen bir kenar giriniz\n");
	scanf("%d",&kenar1);
	printf("lutfen kalan diger kenarı yazınız\n");
	scanf("%d",&kenar2);
	printf("diger kenarı yazmanıza gerek yok diger kenar taban olarak alınacaktır\n");
    cevre=taban*kenar1*kenar2;
    // break;
    
    printf("LUTFEN BIR FONKSIYON SECINIZ\n");
	printf("1.HESAP MAKINASI\n");
	printf("2.SEKILLERIN CEVRE VE ALAN HESAPLAYICISI\n");
	printf("3.SICAKLIK CEVIRICI\n");
	printf("lutfen yukaridaki islemlerden birini seciniz\n");
	scanf("%d",&fonksiyonlar);
    break;
    
     case 3:
    	printf("sectiginiz sekil dikdortgendir\n");
    	printf("kısa kenar degerini  giriniz\n");
    	scanf("%d",&kisakenar);
    	printf("uzun kenar degerini lütfen giriniz\n");
    	scanf("%d",&uzunkenar);
    	alan=kisakenar*uzunkenar;
    	printf("dikdorgenin alanı:%d\n",alan);
    	cevre=(kisakenar+uzunkenar)*2;
    	printf("dikdörtgenin çevresi:%d\n",cevre);
    	break;
    	default:
    	printf("lutfen 1,2 ya da 3 degerlerinden birini giriniz\n");
    	break;
    }
    
    case 3:
	printf("sicaklik donusumlerini sectiniz\n");
	printf("1.fahreneit den kelvin e donusum\n");
	printf("2.kelvin den fahreneit a donusum\n");
	scanf("%d",&sicaklik);
	switch(sicaklik){
	case 1:
	printf("fahreneit den kelvin e donusumu sectiniz\n");
	printf("lutfen fahreneit degerini giriniz\n");
	scanf("%f",&fahreneit);	
	kelvin=((5/9)*(fahreneit-32)+273.15);
    printf("kelvin degeri : %f\n\n",kelvin);
	break;
	case 2:
	printf("kelvin den fahreneit a donusumu sectiniz\n");
	printf("lutfen kelvin degerini giriniz\n");
	scanf("%f",&kelvin);
	fahreneit=((9/5)*(kelvin-273.15)+32);
	printf("fahreneit degeri:%f\n",fahreneit);
	default:
	printf("lutfen 1 ya da 2 degerlerinden birini giriniz\n\n\n");

    printf("LUTFEN BIR FONKSIYON SECINIZ\n");
	printf("1.HESAP MAKINASI\n");
	printf("2.SEKILLERIN CEVRE VE ALAN HESAPLAYICISI\n");
	printf("3.SICAKLIK CEVIRICI\n");
	printf("lutfen yukaridaki İslemlerden birini seciniz\n");
	scanf("%d",&fonksiyonlar);
	
	}
	 
	// break;

    printf("LUTFEN BIR FONKSIYON SECINIZ\n");
	printf("1.HESAP MAKINASI\n");
	printf("2.SEKILLERIN CEVRE VE ALAN HESAPLAYICISI\n");
	printf("3.SICAKLIK CEVIRICI\n");
	printf("lutfen yukaridaki İslemlerden birini seciniz\n");
	scanf("%d",&fonksiyonlar);

}
	return 0;
}