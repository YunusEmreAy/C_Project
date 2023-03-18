#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Yunus Emre Ay / E-posta:TR.yunus.emre.ay@gmail.com

int main()
{
    int x,a,b,mod_sonucu,z=0;
    float sayi1,sayi2,sonuc,ust=1,i;
    char y;
    printf("*****HESAP MAKINESINE HOSGELDINIZ*****\n\n");
    printf("#####Hesap makinesinden tam verim alabilmek icin lutfen cihazinizin sesini aciniz#####\n\n");
    printf("Hesap makinesinde iki farkli mod bulunmaktadir.\n");

    while (0==z)
    {


        printf("Lutfen size uygun olan modu seciniz.\n\n\n");
        printf("Basit mod islemleri :\n\n1.Toplama\n2.Cikarma\n3.Carpma\n4.Bolme\n\n");
        printf("Gelismis mod islemleri :\n\n1.Toplama\n2.Cikarma\n3.Carpma\n4.Bolme\n5.Mod Alma\n6.Karekok\n7.Ust Alma\n8.Logaritma\n\n\n");
        printf("Hangi modu aktiflestirmek istiyorsaniz lutfen yaninda yazan sayiyi tuslayiniz.\n\n");
        printf("Basit Mod : (1)\n");
        printf("Gelismis Mod : (2)\n");
        scanf("%d",&x);
        printf("\n\n");



        switch(x)
        {
        case 1:
            printf("***Basit Mod Aktiflestirildi***\n\n\n");
            printf("Lutfen hangi islemi yapmak istiyorsaniz islemin yaninda belirtilen harfi BUYUK HARF olarak giriniz.\n\n");
            printf("1.Toplma islemi (T)\n2.Cikarma islemi (C)\n3.Carpma islemi (R)\n4.Bolme islemi (B)\n");
            scanf("%s",&y);
            printf("\n\n");

            switch(y)
            {
            case 'T':
                printf("Secilen islem toplama islemi.\n\n");
                printf("Lutfen toplamak istediginiz 1. sayiyi giriniz.\n");
                scanf("%f",&sayi1);
                printf("Lutfen toplamak istediginiz 2. sayiyi giriniz.\n");
                scanf("%f",&sayi2);
                sonuc=sayi1+sayi2;
                printf("Toplama isleminin sonucu : %f \a",sonuc);


                break;


            case 'C':
                printf("Secilen islem cikarma islemi.\n\n");
                printf("Lutfen 1. sayiyi giriniz.\n");
                scanf("%f",&sayi1);
                printf("Lutfen 2. sayiyi giriniz.\n");
                scanf("%f",&sayi2);
                sonuc=sayi1-sayi2;
                printf("Cikarma isleminin sonucu : %f \a",sonuc);


                break;


            case 'R':
                printf("Secilen islem carpma islemi.\n\n");
                printf("Lutfen 1. sayiyi giriniz.\n");
                scanf("%f",&sayi1);
                printf("Lutfen 2. sayiyi giriniz.\n");
                scanf("%f",&sayi2);
                sonuc=sayi1*sayi2;
                printf("Carpma isleminin sonucu : %f \a",sonuc);


                break;


            case 'B':
                printf("Secilen islem bolme islemi.\n\n");
                printf("Lutfen 1. sayiyi giriniz.\n");
                scanf("%f",&sayi1);
                printf("Lutfen 2. sayiyi giriniz.\n");
                scanf("%f",&sayi2);
                sonuc=sayi1/sayi2;
                printf("Bolme isleminin sonucu : %f \a",sonuc);


                break;


            default:
                printf("Hatali harf veya kucuk harf girdiniz.Lutfen gecerli bir tuslama yapiniz.");



            }

            break;

        case 2:
            printf("***Gelismis Mod Aktiflestirildi***\n\n\n");
            printf("Lutfen hangi islemi yapmak istiyorsaniz islemin yaninda belirtilen harfi BUYUK HARF olarak giriniz.\n\n");
            printf("1.Toplma islemi (T)\n2.Cikarma islemi (C)\n3.Carpma islemi (R)\n4.Bolme islemi (B) \n5.Mod alma islemi (M)\n6.Karekok islemi (K)\n7.Us alma islemi (U)\n8.Logaritma islemi (L)\n");
            scanf("%s",&y);
            printf("\n\n");

            switch(y)
            {
            case 'T':
                printf("Secilen islem toplama islemi.\n\n");
                printf("Lutfen toplamak istediginiz 1. sayiyi giriniz.\n");
                scanf("%f",&sayi1);
                printf("Lutfen toplamak istediginiz 2. sayiyi giriniz.\n");
                scanf("%f",&sayi2);
                sonuc=sayi1+sayi2;
                printf("Toplama isleminin sonucu : %f \a",sonuc);


                break;


            case 'C':
                printf("Secilen islem cikarma islemi.\n\n");
                printf("Lutfen 1. sayiyi giriniz.\n");
                scanf("%f",&sayi1);
                printf("Lutfen 2. sayiyi giriniz.\n");
                scanf("%f",&sayi2);
                sonuc=sayi1-sayi2;
                printf("Cikarma isleminin sonucu : %f \a",sonuc);


                break;


            case 'R':
                printf("Secilen islem carpma islemi.\n\n");
                printf("Lutfen 1. sayiyi giriniz.\n");
                scanf("%f",&sayi1);
                printf("Lutfen 2. sayiyi giriniz.\n");
                scanf("%f",&sayi2);
                sonuc=sayi1*sayi2;
                printf("Carpma isleminin sonucu : %f \a",sonuc);


                break;


            case 'B':
                printf("Secilen islem bolme islemi.\n\n");
                printf("Lutfen 1. sayiyi giriniz.\n");
                scanf("%f",&sayi1);
                printf("Lutfen 2. sayiyi giriniz.\n");
                scanf("%f",&sayi2);
                sonuc=sayi1/sayi2;
                printf("Bolme isleminin sonucu : %f \a",sonuc);


                break;


            case 'M':
                printf("Secilen islem mod alma islemi.\n\n");
                printf("Lutfen 1. sayiyi giriniz.\n");
                scanf("%d",&a);
                printf("Lutfen 2. sayiyi giriniz.\n");
                scanf("%d",&b);
                mod_sonucu=a%b;
                printf("Mod Alma isleminin sonucu : %d \a",mod_sonucu);


                break;


            case 'K':
                printf("Secilen islem karekok islemi.\n\n");
                printf("Lutfen karekokunu almak istediginiz sayiyi giriniz.\n");
                scanf("%f",&sayi1);
                sonuc= sqrt(sayi1);
                printf("kok alma isleminin sonucu : %f \a",sonuc);


                break;



            case 'U':
                printf("Secilen islem ust alma islemi.\n\n");
                printf("Lutfen tabani olusturacak olan sayiyi giriniz.(eger ondalikli sayi girecekseniz ondalik kismini ayirmak icin virgul yerine nokta kullaniniz)\n");
                scanf("%f",&sayi1);
                printf("Lutfen ustu olusturacak sayiyi giriniz.(eger ondalikli sayi girecekseniz ondalik kismini ayirmak icin virgul yerine nokta kullaniniz)\n");
                scanf("%f",&sayi2);
                for(i=1; i<=sayi2; i++)
                {
                    ust=ust*sayi1;
                }

                printf("Ust alma isleminin sonucu : %f \a",ust);


                break;


            case 'L':
                printf("Secilen islem logaritma islemi.\n\n");
                printf("Lutfen taban olarak kullanmak istediginiz sayiyi giriniz.\n");
                scanf("%f",&sayi1);
                printf("Lutfen ust olarak kullanmak istediginiz sayiyi giriniz.\n");
                scanf("%f",&sayi2);
                sonuc= log(sayi2)/log(sayi1);
                printf("isleminin sonucu : %f \a",sonuc);


                break;


            default:
                printf("Hatali harf veya kucuk harf girdiniz.Lutfen gecerli bir tuslama yapiniz.");


            }


            break;

        default:
            printf("Hatali sayi girdiniz.Lutfen gecerli bir tuslama yapiniz.");

        }
        printf("\n\n\n");
        printf("Lutfen hesap makinesini kullanmaya devam etmek icin \"0\" tusunu tuslayiniz , cikmak icin \"ENTER\" tusundan farkli rastgele bir tusa basiniz.\n");
        scanf("%d",&z);
        printf("--------------------------------------------------------------------------------");
        printf("\n\n");

    }


    return 0;
}
