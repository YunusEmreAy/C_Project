#include <stdio.h>
#include <stdlib.h>

// Yunus Emre Ay

int adet,ID=101;

char *araba1="Toyota"; // gunluk kiralama bedeli = 150
char *araba2="BMW"; // gunluk kiralama bedeli = 250
char *araba3="Mercedes"; // gunluk kiralama bedeli = 400

char *indirim1="Sehit Yakini"; // %10 indirim
char *indirim2="Gazi"; // %20 indirim
char *indirim3="Ozel Durum YOK"; // %0 indirim

struct KisiBilgileri
{
    char isim[20];
    char soyisim[20];
    int ID;
    int KayitYili;
    char *indirim;
    int indirim_tutari;
};
struct Sistem
{
    int Depozito;
    int Borc;
    char *Secilen_Araba;
    int gun;
    struct KisiBilgileri *KBilgileri;
} *Musteriler;

struct Sistem* Baslangic()
{
    struct Sistem *p;
    int i,araba,indirim,indirimTutari;

    printf("Lutfen Baslangic asamasinda kac tane musteri bilgisi girmek istediginizi yaziniz. --> ");
    scanf("%d",&adet);

    p=(struct Sistem*)malloc(adet*sizeof(struct Sistem));
    if(p==NULL)
    {
        printf("Yetersiz Bellek!...\n");
        exit(1);
    }


    for(i=0; i<adet; i++)
    {
        (p+i)->KBilgileri=(struct KisiBilgileri*)calloc(1,sizeof(struct KisiBilgileri));
        if((p+i)->KBilgileri==NULL)
        {
            printf("Yetersiz Bellek!...\n");
            exit(1);
        }

        ((p+i)->KBilgileri)->indirim_tutari=0;
        printf("\n--------------------------------------------------------------------------------\n");
        printf("%d.musterinin ismini giriniz --> ",i+1);
        scanf("%s",&((p+i)->KBilgileri)->isim);
        printf("\n%d.musterinin soy ismini giriniz --> ",i+1);
        scanf("%s",&((p+i)->KBilgileri)->soyisim);
        ((p+i)->KBilgileri)->ID=ID;
        ID++;
        printf("\n%d.musterinin sistemimize kayit oldugu tarihi giriniz --> ",i+1);
        scanf("%d",&((p+i)->KBilgileri)->KayitYili);
        (p+i)->Depozito=1000;
        printf("\n%d. musteri icin araba seciniz\n\n",i+1);
        printf("1.Araba:%s\n2.Araba:%s\n3.Araba:%s\n\n--->",araba1,araba2,araba3);
        scanf("%d",&araba);
        if(araba==1)
        {
            (p+i)->Secilen_Araba=araba1;
        }
        else if(araba==2)
        {
            (p+i)->Secilen_Araba=araba2;
        }
        else
        {
            (p+i)->Secilen_Araba=araba3;
        }
        printf("\n%d. musteri sectigi arabayi kac gun kiralayacak giriniz --> ",i+1);
        scanf("%d",&(p+i)->gun);
        printf("\n%d.musteri icin ozel durum seciniz\n\n",i+1);
        printf("1.Durum:%s\n2.Durum:%s\n3.Durum:%s\n\n-->",indirim1,indirim2,indirim3);
        scanf("%d",&indirim);
        if(indirim==1)
        {
            ((p+i)->KBilgileri)->indirim=indirim1;
        }
        else if(indirim==2)
        {
            ((p+i)->KBilgileri)->indirim=indirim2;
        }
        else
        {
            ((p+i)->KBilgileri)->indirim=indirim3;
        }


        if(araba==1)
        {
            (p+i)->Borc=(p+i)->gun*150;
        }
        else if(araba==2)
        {
            (p+i)->Borc=(p+i)->gun*250;
        }
        else
        {
            (p+i)->Borc=(p+i)->gun*400;
        }

        if(indirim==1)
        {
            indirimTutari=(p+i)->Borc*(0.1);
            (p+i)->Borc=(p+i)->Borc-indirimTutari-1000;
            ((p+i)->KBilgileri)->indirim_tutari=indirimTutari;
        }
        else if(indirim==2)
        {
            indirimTutari=(p+i)->Borc*(0.2);
            (p+i)->Borc=(p+i)->Borc-indirimTutari-1000;
            ((p+i)->KBilgileri)->indirim_tutari=indirimTutari;
        }
        else
        {
            (p+i)->Borc=(p+i)->Borc-1000;
        }

    }

    return p;

};

void Yazdir(struct Sistem *p)
{
    int i;
    for(i=0; i<adet; i++)
    {
        if(((p+i)->KBilgileri)->ID!=0)
        {


            printf("\n\n****************************************\n");
            printf("ID=%d\tisim=%s\tsoyisim=%s\tkayit yili=%d\tOzel Durum=%s\n\n",((p+i)->KBilgileri)->ID,((p+i)->KBilgileri)->isim,
                   ((p+i)->KBilgileri)->soyisim,((p+i)->KBilgileri)->KayitYili,((p+i)->KBilgileri)->indirim);
            printf("Depozito=1000\tSecilen Araba=%s\tKiralanan gun suresi=%d\tYapilan indirim Miktari=%d\tOdenmesi gereken Borc=%d",(p+i)->Secilen_Araba,
                   (p+i)->gun,((p+i)->KBilgileri)->indirim_tutari,(p+i)->Borc);

        }
    }
}

struct Sistem* Ekleme(struct Sistem *HassPointer,struct Sistem *p)
{
    int i=0,araba,indirim,indirimTutari;

    (p+i)->KBilgileri=(struct KisiBilgileri*)calloc(1,sizeof(struct KisiBilgileri));
    if((p+i)->KBilgileri==NULL)
    {
        printf("Yetersiz Bellek!...\n");
        exit(1);
    }

    ((p+i)->KBilgileri)->indirim_tutari=0;
    printf("\n--------------------------------------------------------------------------------\n");
    printf("%d.musterinin ismini giriniz --> ",i+1);
    scanf("%s",&((p+i)->KBilgileri)->isim);
    printf("\n%d.musterinin soy ismini giriniz --> ",i+1);
    scanf("%s",&((p+i)->KBilgileri)->soyisim);
    ((p+i)->KBilgileri)->ID=ID;
    ID++;
    printf("\n%d.musterinin sistemimize kayit oldugu tarihi giriniz --> ",i+1);
    scanf("%d",&((p+i)->KBilgileri)->KayitYili);
    (p+i)->Depozito=1000;
    printf("\n%d. musteri icin araba seciniz\n\n",i+1);
    printf("1.Araba:%s\n2.Araba:%s\n3.Araba:%s\n\n--->",araba1,araba2,araba3);
    scanf("%d",&araba);
    if(araba==1)
    {
        (p+i)->Secilen_Araba=araba1;
    }
    else if(araba==2)
    {
        (p+i)->Secilen_Araba=araba2;
    }
    else
    {
        (p+i)->Secilen_Araba=araba3;
    }
    printf("\n%d. musteri sectigi arabayi kac gun kiralayacak giriniz --> ",i+1);
    scanf("%d",&(p+i)->gun);
    printf("\n%d.musteri icin ozel durum seciniz\n\n",i+1);
    printf("1.Durum:%s\n2.Durum:%s\n3.Durum:%s\n\n-->",indirim1,indirim2,indirim3);
    scanf("%d",&indirim);
    if(indirim==1)
    {
        ((p+i)->KBilgileri)->indirim=indirim1;
    }
    else if(indirim==2)
    {
        ((p+i)->KBilgileri)->indirim=indirim2;
    }
    else
    {
        ((p+i)->KBilgileri)->indirim=indirim3;
    }

    if(araba==1)
    {
        (p+i)->Borc=(p+i)->gun*150;
    }
    else if(araba==2)
    {
        (p+i)->Borc=(p+i)->gun*250;
    }
    else
    {
        (p+i)->Borc=(p+i)->gun*400;
    }

    if(indirim==1)
    {
        indirimTutari=(p+i)->Borc*(0.1);
        (p+i)->Borc=(p+i)->Borc-indirimTutari-1000;
        ((p+i)->KBilgileri)->indirim_tutari=indirimTutari;
    }
    else if(indirim==2)
    {
        indirimTutari=(p+i)->Borc*(0.2);
        (p+i)->Borc=(p+i)->Borc-indirimTutari-1000;
        ((p+i)->KBilgileri)->indirim_tutari=indirimTutari;
    }
    else
    {
        (p+i)->Borc=(p+i)->Borc-1000;
    }

    return HassPointer;
};

struct Sistem* BosYerBulma(struct Sistem *HasPointer)
{
    int i;
    struct Sistem *p,*GeriDondur,*tut;
    p=HasPointer;
    for(i=0; i<adet; i++)
    {
        if(((p+i)->KBilgileri)->ID==0)
        {
            tut=(p+i);
            ID=101+i;
            GeriDondur=Ekleme(HasPointer,tut);
            return GeriDondur;
        }
    }

    Musteriler=(struct Sistem*)malloc((adet+1)*sizeof(struct Sistem));
    if(Musteriler==NULL)
    {
        printf("Yetersiz Bellek!...\n");
        exit(1);
    }
    adet=adet+1;

    tut=(p+i);
    ID=101+i;
    GeriDondur=Ekleme(HasPointer,tut);
    return GeriDondur;

};

struct Sistem* Silme(struct Sistem *p)
{
    int sil,i;
    printf("Lutfen silmek istediginiz kisinin ID numarasini giriniz. --> ");
    scanf("%d",&sil);

    for(i=0; i<adet; i++)
    {
        if(((p+i)->KBilgileri)->ID==sil)
        {
            ((p+i)->KBilgileri)->ID=0;
        }
    }
    return p;
};

struct Sistem* Odeme(struct Sistem *p)
{
    int i,a,odeme;
    printf("Odeme yapmak istediginiz musterinin ID numarasini giriniz. --> ");
    scanf("%d",&a);

    for(i=0; i<adet; i++)
    {
        if(((p+i)->KBilgileri)->ID==a)
        {
            printf("\nGirdiginiz ID adresinde mevcut odenmesi gereken borc tutari: %d TL dir.\nBu borc miktarinin ne kadarini odemek istiyorsaniz lutfen giriniz. --> ",(p+i)->Borc);
            scanf("%d",&odeme);
            (p+i)->Borc=((p+i)->Borc)-odeme;
            printf("Girdiginiz ID adresinde mevcut borc tutari: %d olarak guncellenmistir",(p+i)->Borc);
        }
    }
    return p;

};

struct Sistem* Guncelleme(struct Sistem *p)
{
    int i,a,y;
    printf("Guncelleme yapmak istediginiz musterinin ID numarasini giriniz. --> ");
    scanf("%d",&a);
    for(i=0; i<adet; i++)
    {
        if(((p+i)->KBilgileri)->ID==a)
        {
            printf("\nHangi bilgiyi degistirmek istiyorsaniz lutfen tuslayiniz");
            printf("\n\n1.isim\n2.soy isim\n3.Kayit Yili\n\n--> ");
            scanf("%d",&y);
            if(y==1)
            {
                printf("Yeni isim degerini giriniz --> ");
                scanf("%s",&((p+i)->KBilgileri)->isim);
            }
            else if(y==2)
            {
                printf("Yeni soyisim degerini giriniz --> ");
                scanf("%s",&((p+i)->KBilgileri)->soyisim);
            }
            else if(y==3)
            {
                printf("Yeni kayit yili degerini giriniz --> ");
                scanf("%d",&((p+i)->KBilgileri)->KayitYili);
            }
        }
    }
    return p;
};

int main()
{
    int x,z=0;
    printf("*****Araba Kiralama Otomasyonuna Hosgeldiniz*****\n\n");

    Musteriler=Baslangic();

    printf("--------------------------------------------------------------------------------\n");
    printf("--------------------------------------------------------------------------------\n");
    printf("--------------------------------------------------------------------------------\n");

    while(z==0)
    {

        printf("1.Musterileri Listele\n2.Yeni Musteri Ekleme\n3.Var Olan Musteri Bilgilerinde Degisiklik Yapma\n4.Musteri Silme\n5.Odeme Yapma\n6.Cikis\n");
        printf("********************************************************************************\n");
        printf("Yapmak istediginiz fonksiyonu tuslayiniz --> ");
        scanf("%d",&x);

        switch(x)
        {
        case 1:
            printf("Listeleme Fonksiyonu secildi\n");
            printf("--------------------------------------------------------------------------------");
            Yazdir(Musteriler);
            break;
        case 2:
            printf("Kisi Ekleme Fonksiyonu secildi\n");
            printf("--------------------------------------------------------------------------------\n");
            Musteriler=BosYerBulma(Musteriler);
            break;
        case 3:
            printf("Guncelleme Fonksiyonu secildi\n");
            printf("--------------------------------------------------------------------------------\n");
            Musteriler=Guncelleme(Musteriler);
            break;
        case 4:
            printf("Musteri Silme Fonksiyonu secildi\n");
            printf("--------------------------------------------------------------------------------\n");
            Musteriler=Silme(Musteriler);
            break;
        case 5:
            printf("Odeme Yapma Fonksiyonu secildi\n");
            printf("--------------------------------------------------------------------------------\n");
            Musteriler=Odeme(Musteriler);
            break;
        case 6:
            printf("Cikis Fonksiyonu secildi\n");
            printf("--------------------------------------------------------------------------------\n");
            exit(1);
            break;
        }

        printf("\n\n\n");
        printf("--------------------------------------------------------------------------------\n");
        printf("Lutfen Otomasyonu kullanmaya devam etmek icin \"0\" tusunu tuslayiniz , cikmak icin \"ENTER\" tusundan farkli rastgele bir tusa basiniz.\n");
        scanf("%d",&z);
        printf("--------------------------------------------------------------------------------");
        printf("\n\n");

    }




    return 0;
}
