#include <stdio.h>
#include <stdlib.h>

// Yunus Emre Ay / E-posta:TR.yunus.emre.ay@gmail.com

int i=0,a,Boyut,altcizgi,cizgisatiri;

char HARF(char y)
{
    switch(y)
    {
    case 'Y':

        while(i!=Boyut)
        {
            if(i<(Boyut-1)/2)
            {
                for(a=0; a<i; a++)
                {
                    printf(" ");
                }
                printf("*");

                for(a=1; a<=Boyut-2-(2*i); a++)
                {
                    printf(" ");
                }
                printf("*");
                printf("\n");
                i++;
            }
            else
            {
                for(a=1; a<=(Boyut-1)/2; a++)
                {
                    printf(" ");
                }
                printf("*");
                printf("\n");
                i++;
            }



        }
        i=0;

        break;

    case 'U':

        while(i!=Boyut)
        {
            if(i!=Boyut-1)
            {
                printf("*");

                for(a=1; a<=Boyut-2; a++)
                {
                    printf(" ");
                }
                printf("*");
                printf("\n");
                i++;
            }
            else
            {
                for(a=0; a<Boyut; a++)
                {
                    printf("*");
                }
                i++;
            }
        }
        i=0;

        break;

    case 'N':

        while(i!=Boyut)
        {
            if(i==0 || i==Boyut-1)
            {
                printf("*");

                for(a=1; a<=Boyut-2; a++)
                {
                    printf(" ");
                }
                printf("*");
                printf("\n");
                i++;
            }
            else
            {
                printf("*");

                for(a=1; a<=i-1; a++)
                {
                    printf(" ");
                }
                printf("*");

                for(a=1; a<=Boyut-2-i; a++)
                {
                    printf(" ");
                }
                printf("*");
                printf("\n");
                i++;

            }
        }
        i=0;

        break;

    case 'S':

        while(i!=Boyut)
        {
            if(i==0 || i==(Boyut-1)/2 || i==Boyut-1 )
            {
                for(a=1; a<=Boyut; a++)
                {
                    printf("*");
                }
                printf("\n");
                i++;
            }
            else if (0<i && i<(Boyut-1)/2)
            {
                printf("*");
                printf("\n");
                i++;
            }
            else
            {
                for(a=1; a<=Boyut-1; a++)
                {
                    printf(" ");
                }
                printf("*");
                printf("\n");
                i++;
            }
        }
        i=0;

        break;

    case 'E':

        while(i!=Boyut)
        {
            if(i==0 || i==(Boyut-1)/2 || i==Boyut-1 )
            {
                for(a=0; a<Boyut-1; a++)
                {
                    printf("*");
                }
                printf("\n");
                i++;
            }
            else
            {
                printf("*");
                printf("\n");
                i++;
            }
        }
        i=0;

        break;

    case 'M':

        while(i!=Boyut)
        {
            if(1<=i && i<(Boyut-1)/2)
            {
                printf("*");
                for(a=1; a<=i-1; a++)
                {
                    printf(" ");
                }
                printf("*");
                for(a=1; a<=Boyut-2-(2*i); a++)
                {
                    printf(" ");
                }
                printf("*");
                for(a=1; a<=i-1; a++)
                {
                    printf(" ");
                }
                printf("*");
                printf("\n");
                i++;
            }
            else if(i==(Boyut-1)/2)
            {
                printf("*");
                for(a=1; a<=i-1; a++)
                {
                    printf(" ");
                }
                printf("*");
                for(a=1; a<=i-1; a++)
                {
                    printf(" ");
                }
                printf("*");
                printf("\n");
                i++;
            }
            else
            {
                printf("*");
                for(a=1; a<=Boyut-2; a++)
                {
                    printf(" ");
                }
                printf("*");
                printf("\n");
                i++;
            }
        }
        i=0;

        break;

    case 'R':

        while(i!=Boyut)
        {
            if(i==0 || i==(Boyut-1)/2)
            {
                for(a=0; a<=(Boyut-1)/2; a++)
                {
                    printf("*");
                }
                printf("\n");
                i++;
            }
            else if((Boyut-1)/2<i && i<Boyut)
            {
                printf("*");
                for(a=1; a<=i-1; a++)
                {
                    printf(" ");
                }
                printf("*");
                printf("\n");
                i++;
            }
            else
            {
                printf("*");

                for(a=1; a<=((Boyut-1)/2)-1; a++)
                {
                    printf(" ");
                }
                printf("*");
                printf("\n");
                i++;
            }
        }
        i=0;

        break;

    case 'A':

        altcizgi=(Boyut-1)-((Boyut-1)/2);
        cizgisatiri=(altcizgi/2)+altcizgi;

        while(i!=Boyut)
        {


            if(i<=(Boyut-1)/2)
            {

                for(a=1; a<=(Boyut-1)/2-i; a++)
                {
                    printf(" ");
                }
                printf("*");

                for(a=1; a<=(2*i)-1; a++)
                {
                    printf(" ");
                }

                if (i!=0)
                {
                    printf("*");
                }

                printf("\n");
                i++;

            }


            else if (i==cizgisatiri)
            {
                for(a=0; a<=Boyut-1; a++)
                {
                    printf("*");
                }
                printf("\n");
                i++;
            }
            else
            {
                printf("*");
                for(a=1; a<=Boyut-2; a++)
                {
                    printf(" ");
                }
                printf("*");
                printf("\n");
                i++;
            }

        }
        i=0;

        break;

    case ' ':

        printf("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx");

        break;

    }
}
int Y(int x)
{
    while(i!=Boyut)
    {
        if(i<(Boyut-1)/2)
        {
            for(a=0; a<i; a++)
            {
                printf(" ");
            }
            printf("*");

            for(a=1; a<=Boyut-2-(2*i); a++)
            {
                printf(" ");
            }
            printf("*");
            printf("\n");
            i++;
        }
        else
        {
            for(a=1; a<=(Boyut-1)/2; a++)
            {
                printf(" ");
            }
            printf("*");
            printf("\n");
            i++;
        }
    }
    i=0;
}
int U(int X)
{
    while(i!=Boyut)
    {
        if(i!=Boyut-1)
        {
            printf("*");

            for(a=1; a<=Boyut-2; a++)
            {
                printf(" ");
            }
            printf("*");
            printf("\n");
            i++;
        }
        else
        {
            for(a=0; a<Boyut; a++)
            {
                printf("*");
            }
            i++;
        }
    }
    i=0;
}
int N(int x)
{
    while(i!=Boyut)
    {
        if(i==0 || i==Boyut-1)
        {
            printf("*");

            for(a=1; a<=Boyut-2; a++)
            {
                printf(" ");
            }
            printf("*");
            printf("\n");
            i++;
        }
        else
        {
            printf("*");

            for(a=1; a<=i-1; a++)
            {
                printf(" ");
            }
            printf("*");

            for(a=1; a<=Boyut-2-i; a++)
            {
                printf(" ");
            }
            printf("*");
            printf("\n");
            i++;
        }
    }
    i=0;
}
int S(int x)
{
    while(i!=Boyut)
    {
        if(i==0 || i==(Boyut-1)/2 || i==Boyut-1 )
        {
            for(a=1; a<=Boyut; a++)
            {
                printf("*");
            }
            printf("\n");
            i++;
        }
        else if (0<i && i<(Boyut-1)/2)
        {
            printf("*");
            printf("\n");
            i++;
        }
        else
        {
            for(a=1; a<=Boyut-1; a++)
            {
                printf(" ");
            }
            printf("*");
            printf("\n");
            i++;
        }
    }
    i=0;
}
int E(int x)
{
    while(i!=Boyut)
    {
        if(i==0 || i==(Boyut-1)/2 || i==Boyut-1 )
        {
            for(a=0; a<Boyut-1; a++)
            {
                printf("*");
            }
            printf("\n");
            i++;
        }
        else
        {
            printf("*");
            printf("\n");
            i++;
        }
    }
    i=0;

}
int M(int x)
{
    while(i!=Boyut)
    {
        if(1<=i && i<(Boyut-1)/2)
        {
            printf("*");
            for(a=1; a<=i-1; a++)
            {
                printf(" ");
            }
            printf("*");
            for(a=1; a<=Boyut-2-(2*i); a++)
            {
                printf(" ");
            }
            printf("*");
            for(a=1; a<=i-1; a++)
            {
                printf(" ");
            }
            printf("*");
            printf("\n");
            i++;
        }
        else if(i==(Boyut-1)/2)
        {
            printf("*");
            for(a=1; a<=i-1; a++)
            {
                printf(" ");
            }
            printf("*");
            for(a=1; a<=i-1; a++)
            {
                printf(" ");
            }
            printf("*");
            printf("\n");
            i++;
        }
        else
        {
            printf("*");
            for(a=1; a<=Boyut-2; a++)
            {
                printf(" ");
            }
            printf("*");
            printf("\n");
            i++;
        }
    }
    i=0;
}
int R(int x)
{
    while(i!=Boyut)
    {
        if(i==0 || i==(Boyut-1)/2)
        {
            for(a=0; a<=(Boyut-1)/2; a++)
            {
                printf("*");
            }
            printf("\n");
            i++;
        }
        else if((Boyut-1)/2<i && i<Boyut)
        {
            printf("*");
            for(a=1; a<=i-1; a++)
            {
                printf(" ");
            }
            printf("*");
            printf("\n");
            i++;
        }
        else
        {
            printf("*");

            for(a=1; a<=((Boyut-1)/2)-1; a++)
            {
                printf(" ");
            }
            printf("*");
            printf("\n");
            i++;
        }
    }
    i=0;
}
int A(int x)
{
    int altcizgi,cizgisatiri;

    altcizgi=(Boyut-1)-((Boyut-1)/2);
    cizgisatiri=(altcizgi/2)+altcizgi;

    while(i!=Boyut)
    {


        if(i<=(Boyut-1)/2)
        {

            for(a=1; a<=(Boyut-1)/2-i; a++)
            {
                printf(" ");
            }
            printf("*");

            for(a=1; a<=(2*i)-1; a++)
            {
                printf(" ");
            }

            if (i!=0)
            {
                printf("*");
            }

            printf("\n");
            i++;

        }


        else if (i==cizgisatiri)
        {
            for(a=0; a<=Boyut-1; a++)
            {
                printf("*");
            }
            printf("\n");
            i++;
        }
        else
        {
            printf("*");
            for(a=1; a<=Boyut-2; a++)
            {
                printf(" ");
            }
            printf("*");
            printf("\n");
            i++;
        }

    }
    i=0;
}

int main()
{
    int x,z=0,b,TanimlananDiziBoyutu,KullanilanDiziBoyutu=0;

    printf("*****YILDIZLARLA ISIM YAZMA PROGRAMINA HOSGELDINIZ*****\n\n\n");
    printf("Yildizlarla isim yazma islemini gerceklestirmeden once 'Boyut'u belirlemeniz gerekmektedir.\n\n");
    printf("Lutfen 'Boyut'u belirlerken tek sayilari kullaniniz ve en az '5' sayisini kullaniniz. ( Onerilen boyut degeri : 15 )\n\n");
    printf("Cift sayi kullandiginiz taktirde girdiginiz sayiya 1 eklenerek isleme devam edilecektir.\n");
    printf("5'ten daha kucuk bir sayi kullandiginiz taktirde Boyut=5 alinarak isleme devam edilecektir.\n\n\n");
    while (z==0)
    {

        printf("Lutfen Boyut'u belirleyiniz --> :");
        scanf("%d",&Boyut);
        printf("\n\n");

        if (Boyut%2==0)
        {
            Boyut=Boyut+1;
        }
        if (Boyut<5)
        {
            Boyut=5;
        }

        printf("Boyut: %d\n",Boyut);
        printf("--------------------------------------------------------------------------------");
        printf("\n\n");
        printf("Yildizlarla isim yazma programinda iki farkli mod bulunmaktadir.\n");
        printf("Lutfen size uygun olan modu seciniz.\n\n\n");
        printf("Basit Mod : Sistem tarafindan belirlenen ( YUNUS EMRE AY ) ismini yildizlar ile ekrana yazdirma.\n\n");
        printf("Gelismis Mod : Programin icersinde bulunan ( Y,U,N,S,E,M,R,A )harflerini kullanarak yildizlar ile ozel bir kelime yazdirma.\n\n\n");


        printf("Hangi modu aktiflestirmek istiyorsaniz lutfen yaninda yazan sayiyi tuslayiniz.\n\n");
        printf("Basit Mod : (1)\n");
        printf("Gelismis Mod : (2)\n");
        printf("--> :");
        scanf("%d",&x);
        printf("\n\n");

        switch(x)
        {
        case 1:
            printf("***Basit Mod Aktiflestirildi***\n\n\n");
            printf("--------------------------------------------------------------------------------\n\n");

            Y(0); printf("\n\n\n\n\n");
            U(0); printf("\n\n\n\n\n");
            N(0); printf("\n\n\n\n\n");
            U(0); printf("\n\n\n\n\n");
            S(0); printf("\n\n\n\n\n");
            printf("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx");
            printf("\n\n\n\n\n");
            E(0); printf("\n\n\n\n\n");
            M(0); printf("\n\n\n\n\n");
            R(0); printf("\n\n\n\n\n");
            E(0); printf("\n\n\n\n\n");
            printf("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx");
            printf("\n\n\n\n\n");
            A(0); printf("\n\n\n\n\n");
            Y(0); printf("\n\n\n\n\n");

            break;

        case 2:
            printf("***Gelismis Mod Aktiflestirildi***\n\n\n");
            printf("--------------------------------------------------------------------------------\n\n");

            char isim[100];

            printf("Lutfen ( Y,U,N,S,E,M,R,A )harflerini kullanarak yildizlar ile ekrana yazdirmak istediginiz kelimeyi giriniz.\n");
            printf("Lutfen kelime girerken bosluk birakmayiniz.\n ");
            printf("--->> :");
            scanf("%s",isim);
            printf("\n\n");


            TanimlananDiziBoyutu=sizeof(isim)/sizeof(isim[0]);

            while (0==0)
            {
                for(b=0; b<TanimlananDiziBoyutu; b++)
                {
                    if(isim[b]=='\0')
                    {
                        break;
                    }

                    KullanilanDiziBoyutu++;
                }
                break;
            }

            for(b=0; b<KullanilanDiziBoyutu; b++)
            {
                HARF(isim[b]);
                printf("\n\n\n\n\n");
            }

            printf("--------------------------------------------------------------------------------\n\n");
            printf("Kullanilabilecek Maksimum Karakter Sayisi: %d\n",TanimlananDiziBoyutu);
            printf("Kullanilan Karakter Sayisi: %d\n",KullanilanDiziBoyutu);
            KullanilanDiziBoyutu=0;


            break;

        default:
            printf("Hatali sayi girdiniz.Lutfen gecerli bir tuslama yapiniz.\n");


        }

        printf("\n\n\n");
        printf("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n\n");
        printf("Lutfen yildizlarla isim yazma programini kullanmaya devam etmek icin \"0\" tusunu tuslayiniz , cikmak icin \"ENTER\" tusundan farkli rastgele bir tusa basiniz.\n");
        printf("--->> :");
        scanf("%d",&z);
        printf("--------------------------------------------------------------------------------");
        printf("\n\n\n\n\n");

    }

    
    return 0;
}
